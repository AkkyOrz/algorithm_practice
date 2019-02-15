#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1000000007;

// 階乗 (mod とりバージョン)
ll fact_mod(ll n, ll mod)
{
    ll f = 1;
    for (i = 2; i <= n; i++){ 
        f = f * (i % MOD) % MOD;
    }
    return f;
}

// 繰り返し二乗法 (modの世界での累乗)
// ※modが素数の場合、この関数で(mod - 2)乗したら、mod割り算ができるよ！
// (参考問題: ABC034 C問題など)
ll mod_pow(ll x, ll n, ll mod)
{
    ll res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = (res * x) % mod; //ビット演算(最下位ビットが1のとき)
        x = (x * x) % mod;
        n >>= 1; //右シフト(n = n >> 1)
    }
    return res;
}

// 組み合わせ nCr を求める (modあり)
ll combination_mod(ll n, ll r, ll mod)
{
    if (r > n - r)
        r = n - r;
    if (r == 0)
        return 1;
    ll a = 1;

    for (int i = 0; i < n; i++){
        a = a * ((n - i) % mod) % mod;
    }

    ll b = mod_pow(fact_mod(r, mod), mod - 2, mod);
    return (a % mod) * (b % mod) % mod;
}

const ll N = 1000;
const ll M = 100;

ll comb[N+1][M+1];

void combination_mod_memo(){
    comb[0][0] = 1;
    for (long i = 1; i <= M; i++){
        for (long j = 0; j <= N; j++){
            comb[j][i] = (comb[j - 1][i] + (i >= j ? comb[j][i - j] : 0)) % MOD;
        }
    }
    return ;
}

signed main()
{
    int n, k;
    cin >> n >> k;

    /*
    int dp[1010][1010];
    repq(i,0,n) dp[0][i] = 1;
    rep(i,0,k) {
        repq(j,1,n) {
            dp[i+1][j] = (dp[i+1][j-1] + dp[i][j]) % MOD;
        }
    }
    cout << dp[k][n] << endl;
    */

    cout << combination_mod(n + k - 1, k, MOD) << endl;
}