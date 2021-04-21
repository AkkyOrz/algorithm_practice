// @prefix atcoder
// @description atcoder template

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

int n;
VI a(100010);
VI dp(100010);

signed main() {
  cin >> n;
  REP(i, n) { cin >> a[i]; }

  dp[0] = 0;
  dp[1] = abs(a[1] - a[0]);

  REP(i, n) {
    dp[i + 2] =
        min(dp[i + 1] + abs(a[i + 1] - a[i + 2]), dp[i] + abs(a[i + 2] - a[i]));
    DEBUG(dp[i]);
  }

  cout << dp[n - 1] << endl;
  return 0;
}
