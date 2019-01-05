#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int n, m;
ll dp[1<<16];
vector<int> G[16];

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        G[x].push_back(y);
    }
    ll SIZE_DP = (1<<n) - 1;
    dp[0] = 1;

    for (int S = 0; S < (1<<n); S++){
        for (int j = 0; j < n; j++){
            if (S & (1 << j)) continue;
            bool t = true;
            for (int k = 0; k < G[j].size(); k++){
                if (S & (1 << G[j][k])){
                    t = false;
                    break;
                }
            }
            if (t) dp[(S|(1<<j))] += dp[S];
        }
    }
    cout << dp[SIZE_DP] << endl;
}
