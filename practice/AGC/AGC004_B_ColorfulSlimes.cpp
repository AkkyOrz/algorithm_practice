#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll INF = 1LL<<60;

ll dp[2000];

ll n, x;

/*
ll make_dp(vector<ll> &a){
    // init
    int index = distance(a.begin(), min_element(a.begin(), a.end()));
    cout << index << endl;
    for (int i = 0; i < n - index; i++){
        dp[i] = a[i + index];
    }
    for (int i = n-index; i < n; i++){
        dp[i] = a[i - (n - index)];
    }
    for (int i = 0; i < n; i++){
        cout << dp[i] << ", ";
    }
    cout << endl;
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n-1; i++){
            dp[i+1] = min(dp[i] + x, dp[i+1]);
        }
        dp[0] = min(dp[n-1] + x, dp[0]);
    }

    ll sum = 0;
    for (int i = 0; i < n ; i++){
        sum += dp[i];
        cout << dp[i] << ", ";
    }
    cout << endl;

    return sum;
}
*/

int main(){
    cin >> n >> x;
    vector<ll> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = INF;
    for (int i = 0; i < n; i++){
        dp[i] = a[i];
    }
    for (int i = 0; i < n; i++){
        ll can = i * x;
        for (int j = 0; j < n; j++){
            dp[j] = min(dp[j], a[(j - i + n) % n]);
        }
        for (int k = 0; k < n; k++){
            can += dp[k];
        }
        ans = min(ans, can);
    }
    cout << ans << endl;
}
