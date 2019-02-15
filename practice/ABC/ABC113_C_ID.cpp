#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;

int n, m;
vector<int> y(100010), p(100010);
vector<int> a[100010];

int main(){
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        cin >> p[i] >> y[i];
        a[p[i]].push_back(y[i]);
    }

    for (int i = 1; i <= n; i++){
        sort(a[i].begin(), a[i].end());
    }

    for (int i = 0; i < m; i++){
        ll res;
        ll pre = p[i] * 1000000LL;
        ll epi = (int)(lower_bound(a[p[i]].begin(),
                                a[p[i]].end(), 
                                y[i]) 
                    - a[p[i]].begin()) + 1;
        res = pre + epi;
        cout << setw(12) << setfill('0') << res << endl;
    }
}