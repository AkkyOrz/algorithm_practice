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

signed main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  string t = "b";
  int i = 1;
  for (; 2 * i + 1 <= n; i++) {
    if (i % 3 == 1) {
      t = "a" + t + "c";
    }
    if (i % 3 == 2) {
      t = "c" + t + "a";
    }
    if (i % 3 == 0) {
      t = "b" + t + "b";
    }
  }

  if (s.compare(t) == 0)
    cout << i - 1 << endl;
  else
    cout << -1 << endl;

  return 0;
}
