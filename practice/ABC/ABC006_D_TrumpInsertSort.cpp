#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
int c[30000];

const int INF = (1 << 30);

int dp[30001];

int main(){
    cin >> n;

    for (int i = 0; i < n ;i++){
        cin >> c[i];
        c[i]--;
    }

    for (int i = 0; i <= n+1; i++){
        dp[i] = INF;
    }

    for (int i = 0; i < n; i++){
        *lower_bound(dp, dp+n, c[i]+1) = c[i];
    }
/*
    for (int i = 0; i <= n; i++){
        cout << dp[i] << ", ";
    }
    cout << endl;
*/

    cout << n - (int)(lower_bound(dp, dp+n, INF) - dp) << endl;
}