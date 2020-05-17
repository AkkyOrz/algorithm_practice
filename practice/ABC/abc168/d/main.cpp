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

int n, m;
VVI mp(100010);
vector<bool> visited(100000);
VI mark(100000);

signed main() {
  cin >> n >> m;
  REP(i, m) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    mp[a].push_back(b);
    mp[b].push_back(a);
  }

  queue<int> q;
  q.push(0);
  visited[0] = true;

  while (q.empty() != true) {
    int v = q.front();
    q.pop();
    for (auto next_v : mp[v]) {
      if (visited[next_v] == false) {
        DEBUGP(make_pair(v, next_v));
        mark[next_v] = v;
        visited[next_v] = true;
        q.push(next_v);
      }
    }
  }

  bool flag = true;
  REP(i, n) {
    if (visited[i])
      continue;
    flag = false;
  }
  if (flag) {
    cout << "Yes" << endl;
    FOR(i, 1, n) { cout << mark[i] + 1 << endl; }
  } else {
    cout << "No" << endl;
  }
  return 0;
}
