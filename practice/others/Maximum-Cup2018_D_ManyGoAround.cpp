#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int INF = (1 << 30);


int n, m, l, x;
int a[10000];
int dp[10010][1000];


int main(){
    cin >> n >> m >> l >> x;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i <= n+1; i++){
        for (int j = 0; j < m; j++){
            dp[i][j] = INF;
        }
    }

    for (int i = 0; i <= n; i++){
        dp[i][0] = 1;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            dp[i+1][(j+a[i]) % m] = min(dp[i][(j+a[i]) % m], dp[i][j] + (j + a[i]) / m);
        }
    }

    if (dp[n][l] <= x){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}