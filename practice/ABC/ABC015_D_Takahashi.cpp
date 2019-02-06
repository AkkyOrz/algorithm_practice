#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int w, n, K;
pair<int,int> p[51];

ll dp[51][10001][51];

int main(){
    cin >> w;
    cin >> n >> K;

    for (int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < w; i++){
        for (int j =0; j <= K; j++){ 
            dp[0][i][j] = 0;
        }  
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= w; j++){
            for (int k = 0; k <= K; k++){
                if (j >= p[i].first && k > 0){
                    dp[i+1][j][k] = max(dp[i][j - p[i].first][k-1] + p[i].second, dp[i][j][k]);
                } else {
                    dp[i+1][j][k] = dp[i][j][k];
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= K; i++){
        ans = (dp[n][w][i] > ans ? dp[n][w][i] : ans);
    }

    cout << ans << endl;

}