#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 123456789012345;

int n, m;
int a[2010], b[2010];
ll c[2010];
ll dist[2010];

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a[i] >> b[i] >> c[i];
        a[i]--; b[i]--;
    }

    for (int i = 0; i < n; i++){
        dist[i] = -INF;
    }
    dist[0] = 0;

    ll ans;
    for (int i = 0; i <= 2*n; i++){
        for (int j = 0; j < m; j++){
            dist[b[j]] = max(dist[b[j]], dist[a[j]] + c[j]);
        }
    }
    ans = dist[n-1];

    ll next;
    for (int i = 0; i <= 2*n; i++){
        for (int j = 0; j < m; j++){
            dist[b[j]] = max(dist[b[j]], dist[a[j]] + c[j]);
        }
    }
    next = dist[n-1];

    if (next != ans) {
        cout << "inf" << endl;
    } else {
        cout << ans << endl;
    }
}
