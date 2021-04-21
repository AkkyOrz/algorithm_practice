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

int h, w, x, y;
signed main() {
  cin >> h >> w >> y >> x;
  x--;
  y--;
  VS s(h);

  REP(i, h) { cin >> s[i]; }

  int cnt = 0;
  for (int i = x - 1; i >= 0; i--) {
    if (!(0 <= x && x < w))
      break;
    if (s[y][i] == '.') {
      cnt++;
      DEBUG(y);
      DEBUG(i);
    } else {
      break;
    }
  }
  for (int i = x + 1; i < w; i++) {
    DEBUG(y);
    DEBUG(i);
    if (!(0 <= x && x < w))
      break;
    if (s[y][i] == '.') {
      DEBUG(y);
      DEBUG(i);
      cnt++;
    } else {
      break;
    }
  }
  for (int j = y - 1; j >= 0; j--) {
    if (!(0 <= y && y < h))
      break;
    if (s[j][x] == '.') {
      cnt++;
      DEBUG(x);
      DEBUG(j);
    } else {
      break;
    }
  }
  for (int j = y + 1; j < h; j++) {
    if (!(0 <= y && y < h))
      break;
    if (s[j][x] == '.') {
      cnt++;
      DEBUG(x);
      DEBUG(j);
    } else {
      break;
    }
  }
  cout << cnt + 1 << endl;
  return 0;
}
