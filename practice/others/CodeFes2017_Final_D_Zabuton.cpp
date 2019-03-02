#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll INF = 1LL << 50;

int n;

vector<pair<ll, ll>> v(5010);

ll dp[5010][5010];

int main(){
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), 
        [](pair<ll, ll> a, pair<ll, ll> b){
        return a.first + a.second < b.first + b.second;  
    });
/*
    for (auto a : v){
        cout << a.first << " " << a.second << endl;;
    }
    */

    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= n; j++){
            dp[i][j] = INF;
        }
    }

    int res = 0;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (dp[i-1][j-1] > v[i-1].first){
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = min(dp[i-1][j], dp[i-1][j-1] + v[i-1].second);
            }
        }
    }
    for (int j = 0; j <= n; j++){
        //cout << dp[n][j] << endl;
        if (dp[n][j] < INF) res = j;
    }
    cout << res << endl;
}