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

int n;
VVI v(10100, VI(3));

int rot_index(int x){
    if (x < 3) return x;
    return x-3;
}

signed main()
{
    cin >> n;
    REP(i, n){
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }

    VVI dp(n+10, VI(3, INF));

    REP(i, 3){
        dp[0][i] = v[0][i];
    }

    FOR(i, 1, n){
        REP(j, 3){
            dp[i][j] = max(dp[i-1][rot_index(j+1)], dp[i-1][rot_index(j+2)]) + v[i][j];
        }
    }

    cout << max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2])) << endl;

    return 0;
}