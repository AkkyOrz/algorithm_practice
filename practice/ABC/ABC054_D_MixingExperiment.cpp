#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int const INF = 1000000000;

int n;
int a[40], b[40], c[40];
int Ma, Mb;
int dp[41][401][401];

int check(){
    int mini = INF;
    for (int ca = 1; ca <= 400; ca++){
        for (int cb = 1; cb <= 400; cb++){
            if(ca * Mb == cb * Ma){
                mini = min(mini, dp[n][ca][cb]);
            }
        }
    }
    if (mini == INF){
        return -1;
    } else {
        return mini;
    }
}

int main(){
    cin >> n >> Ma >> Mb;
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= 400; j++){
            for (int k = 0; k <= 400; k++){
                dp[i][j][k] = INF;
            }
        }
    }
    dp[0][0][0] = 0;

    for (int i = 0; i < n; i++){
        for (int ca = 0; ca <= 400;ca++){
            for (int cb = 0; cb <= 400; cb++){
                if (dp[i][ca][cb] == INF) continue;
                dp[i+1][ca][cb] = min(dp[i+1][ca][cb], dp[i][ca][cb]);
                dp[i+1][ca+a[i]][cb+b[i]] = min(dp[i+1][ca+a[i]][cb+b[i]], dp[i][ca][cb] + c[i]);
            }
        }
    }

    cout << check() << endl;
}
