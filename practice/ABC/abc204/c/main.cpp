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

void printAns(bool flag) {
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

int n, m;
VVI g(2001);

int dfs(int pos, vector<bool> reached) {
  int cnt = 1;
  bool flag = true;
  for (auto next : g[pos]) {
    if (!reached[next]) {
      flag = false;
      break;
    }
  }
  if (flag)
    return 1;

  for (auto next : g[pos]) {
    if (!reached[next]) {
      reached[next] = true;
      cnt += dfs(next, reached);
      reached[next] = false;
    }
  }
  return cnt;
}

signed main() {
  cin >> n >> m;
  REP(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
  }
  int res = 0;
  vector<bool> reached(n, false);
  REP(i, n) {
    DEBUG(i);
    reached[i] = true;
    DEBUG(dfs(i, reached));
    res += dfs(i, reached);
    reached[i] = false;
  }

  cout << res << endl;
  return 0;
}
