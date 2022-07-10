// @prefix atcoder
// @description atcoder template

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
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

constexpr int DX[] = {1, 0, -1, 0, 1, -1, 1, -1};
constexpr int DY[] = {0, 1, 0, -1, 1, -1, -1, 1};

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
const int MOD = 1e9 + 7;

void printAns(bool flag) {
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

long double x, y, d;

signed main() {
  cin >> x >> y >> d;

  // cos
  //  degree is d
  double co = cos(d * M_PI / 180);
  double si = sin(d * M_PI / 180);

  cout << std::fixed << std::setprecision(8) << x * co - y * si << " "
       << x * si + y * co << endl;
}
