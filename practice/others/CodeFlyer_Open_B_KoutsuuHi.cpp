#include <bits/stdc++.h>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;

int n, q;
vector<int> v(100010);

vector<int> C(100010), D(10010);

vector<ll> sum(100010);

//累積和と二分探索でいける...?

ll solve(int k){
    // x は位置
    // k はクエリのindex
    ll res = 0LL;

    ll c = C[k];
    ll d = D[k];

    int left = lower_bound(v.begin(), v.end(), max(c-d, 0LL)) - v.begin();
    int right = lower_bound(v.begin(), v.end(), c+d) - v.begin();

    int center = lower_bound(v.begin(), v.end(), c) - v.begin();

    cout << left << "< "<< center << "< "<< right << endl;
    res += left * d;
    res += (n - right) * d;
    res += (sum[right] - sum[left]);
    res -= (right - center) * c;
    return res;
}

int main(){
    cin >> n >> q;
    sum[0] = 0LL;
    cin >> v[0];
    for (int i = 1; i < n; i++){
        cin >> v[i];
        sum[i] = v[i] + sum[i-1];
    }
    v.resize(n);

    for (int i = 0; i < q; i++){
        cin >> C[i] >> D[i];
    }
    C.resize(q);
    D.resize(q);

    for (int i = 0; i < q; i++){
        cout << solve(i) << endl;
    }
}