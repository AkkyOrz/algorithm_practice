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

int a, b, c, d;

bool check_1(int x, int y) { return abs(x) == abs(y) || abs(x) + abs(y) <= 3; }
bool check_2(int x, int y) {
  return (abs(y) <= abs(x) + 3 && abs(y) >= abs(x) - 3) || (x + y) % 2 == 0 ||
         (abs(x) + abs(y) <= 6);
}

signed main() {
  cin >> a >> b >> c >> d;

  int x = c - a;
  int y = d - b;

  if (x == 0 && y == 0) {
    cout << 0 << endl;
  } else if (check_1(x, y)) {
    cout << 1 << endl;
  } else if (check_2(x, y)) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
  return 0;
}
