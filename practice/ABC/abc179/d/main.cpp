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
#define INF (1ll << 60)

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
const int MOD = 998244353;

int n, k;
VP x(11);

VI dp(500000);
VI s;

signed main() {
  cin >> n >> k;
  REP(i, k) {
    cin >> x[i].first >> x[i].second;
    FOR(j, x[i].first, x[i].second) { s.push_back(j); }
    s.push_back(x[i].second);
  }

  dp[1] = 1;
  FOR(i, 1, n) {
    REP(j, s.size()) {
      if (i + s[j] <= n) {
        dp[i + s[j]] = (dp[i + s[j]] + dp[i]) % MOD;
      }
    }
    // FOR(i, 1, n) { cout << dp[i] << ","; }
    // cout << dp[n] << endl;
  }

  cout << dp[n] << endl;
  return 0;
}
