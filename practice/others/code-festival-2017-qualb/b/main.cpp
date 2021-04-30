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
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

signed main() {
  int n;
  cin >> n;
  VI d(n);
  REP(i, n) { cin >> d[i]; }
  int m;
  cin >> m;
  VI t(m);
  REP(i, m) { cin >> t[i]; }

  sort(ALL(d));
  sort(ALL(t));

  int idx = 0;
  REP(i, n) {
    if (d[i] == t[idx]) {
      idx++;
      continue;
    }
  }

  printAns(idx == m);

  return 0;
}
