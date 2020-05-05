#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1LL << 30;

int n, k;
int h[100010];

int main(){
    cin >> n >> k;

    for (int i = 0; i < n; i ++){
        cin >> h[i];
    }

    sort(h, h+n);

    ll res = INF;
    for (int i = 0; i < n-k+1; i++){
        res = min(res, (ll)(h[i+k-1] - h[i]));
    }

    cout << res << endl;
}