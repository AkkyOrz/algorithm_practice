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

int n;
VI a(2000001);
signed main() {
  cin >> n;
  REP(i, n) { cin >> a[i]; }
  a.resize(n);

  VI s(n + 1);
  VI t(n + 1);
  VI u(n + 1);

  s[0] = 0;
  t[0] = 0;
  u[0] = 0;
  REP(i, n) {
    s[i + 1] = s[i] + a[i];
    t[i + 1] = max(t[i], s[i + 1]);
    u[i + 1] = s[i + 1] + u[i];
  }

  int ma = 0;

  REP(i, n) { ma = max(ma, u[i] + t[i + 1]); }
  cout << ma << endl;

  return 0;
}
