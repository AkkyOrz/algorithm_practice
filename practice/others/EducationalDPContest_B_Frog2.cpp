#include <bits/stdc++.h>
using namespace std;
#define int long long

// typedef
//------------------------------------------
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<PII> VP;

// rep
//------------------------------------------
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) (x).begin(), (x).end()
#define DEBUG(x) cerr << #x << ": " << x << '\n'
#define DEBUGP(x) cerr << #x << ": " << x.first << " \t" << x.second << '\n'
#define INF (1ll<<60)

int n, k;
VI h(100010);

signed main()
{
    cin >> n >> k;
    REP(i, n){
        cin >> h[i];
    }

    VI dp(n, INF);

    dp[0] = 0;
    FOR(i, 1, n){
        FOR(j, 1, min(i,k)+1){
            dp[i] = min(dp[i-j] + abs(h[i] - h[i-j]), dp[i]);
        }
        DEBUG(i);
        DEBUG(dp[i]);
    }

    cout << dp[n-1] << endl;

    return 0;
}