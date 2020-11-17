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
const int MOD = 1e9 + 7;

int h, w;
VS s(2001);

signed main() {
  cin >> h >> w;
  REP(i, h) {
    REP(j, w) { cin >> s[i]; }
  }

  VVI x(2001, VI(2001)), y(2001, VI(2001)), z(2001, VI(2001));
  VVI dp(2001, VI(2001));
  dp[0][0] = 1;
  REP(j, w - 1) {
    x[0][j + 1] = x[0][j] + dp[0][j];
    dp[0][j + 1] = x[0][j + 1];
  }
  REP(i, h - 1) {
    y[i + 1][0] = x[i][0] + dp[i][0];
    dp[i + 1][0] = y[i + 1][0];
  }

  FOR(i, 1, h + 1) {
    FOR(j, 1, w + 1) {
      if (s[i][j - 1] == '#') {
        x[i][j] = 0;
      } else {
        x[i][j] = x[i][j - 1] + dp[i][j - 1];
      }
      if (s[i - 1][j] == '#') {
        y[i][j] = 0;
      } else {
        y[i][j] = y[i - 1][j] + dp[i - 1][j];
      }
      if (s[i - 1][j - 1] == '#') {
        z[i][j] = 0;
      } else {
        z[i][j] = z[i - 1][j - 1] + dp[i - 1][j - 1];
      }
      if (s[i][j] == '#') {
        dp[i][j] = 0;
      } else {
        dp[i][j] = x[i][j] + y[i][j] + z[i][j];
      }
    }
  }

  REP(i, h) {
    REP(j, w) { cout << dp[i][j] << ','; }
    cout << endl;
  }
  REP(i, h) {
    REP(j, w) { cout << x[i][j] << ','; }
    cout << endl;
  }
  REP(i, h) {
    REP(j, w) { cout << y[i][j] << ','; }
    cout << endl;
  }
  REP(i, h) {
    REP(j, w) { cout << z[i][j] << ','; }
    cout << endl;
  }
  cout << dp[h][w] << endl;

  return 0;
}
