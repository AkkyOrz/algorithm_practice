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
int n, m;

VP lamp, wall;

VVI grid(1600, VI(1600, 0));

signed main() {
  cin >> h >> w >> n >> m;
  REP(i, n) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    lamp.push_back(make_pair(a, b));
    grid[a][b] = 2;
  }
  REP(i, m) {
    int c, d;
    cin >> c >> d;
    c--, d--;
    grid[c][d] = -1;
  }

  REP(i, n) {
    // x-axis
    for (int x = lamp[i].first - 1; x >= 0; x--) {
      if (grid[x][lamp[i].second] == -1)
        break;

      if (grid[x][lamp[i].second] == 2)
        break;
      grid[x][lamp[i].second] = 1;
    }
    FOR(x, lamp[i].first + 1, h) {
      if (grid[x][lamp[i].second] == -1)
        break;

      if (grid[x][lamp[i].second] == 2)
        break;
      grid[x][lamp[i].second] = 1;
    }

    // y-axis
    for (int y = lamp[i].second - 1; y >= 0; y--) {
      if (grid[lamp[i].first][y] == -1)
        break;

      if (grid[lamp[i].first][y] == 2)
        break;
      grid[lamp[i].first][y] = 1;
    }
    FOR(y, lamp[i].second + 1, w) {
      if (grid[lamp[i].first][y] == -1)
        break;

      if (grid[lamp[i].first][y] == 2)
        break;
      grid[lamp[i].first][y] = 1;
    }
  }

  int cnt = 0;
  REP(x, h) {
    REP(y, w) {
      if (grid[x][y] == 1 || grid[x][y] == 2) {
        cnt++;
      }
      // cout << grid[x][y] << " ";
    }
    // cout << endl;
  }

  cout << cnt << endl;

  return 0;
}
