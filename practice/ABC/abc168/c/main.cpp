// @prefix atcoder
// @description atcoder template

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

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
#define deg_to_rad(deg) (((deg) / 360.0) * 2.0 * M_PI)
#define rad_to_deg(rad) (((rad) / 2.0 / M_PI) * 360.0)

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
const int MOD = 1e9 + 7;

int a, b;
int h, m;

signed main() {
  cin >> a >> b >> h >> m;

  double res = 0.0;

  double theta = deg_to_rad(30.0 * h + 0.5 * m) - deg_to_rad(6.0 * m);

  // 余弦定理

  res = (double)pow(a, 2) + (double)pow(b, 2) - 2.0 * a * b * cos(theta);
  res = sqrt(res);

  cout << fixed << setprecision(10) << res << endl;
  return 0;
}
