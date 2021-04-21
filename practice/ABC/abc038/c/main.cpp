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

int n;
VI a(100100);
signed main() {
  cin >> n;
  REP(i, n) { cin >> a[i]; }

  a.resize(n);

  int res = 0;
  int left = 0;
  while (left < n) {
    int sum = 0;
    int right = left;

    /* sum に a[right] を加えても大丈夫なら right を動かす */
    while (right < n && a[right] < a[right + 1]) {
      // some case
      right++;
    }

    /* break した状態で right は条件を満たす最大 */
    res += (right - left + 2) * (right - left + 1) / 2;

    left = right + 1;
  }
  cout << res << endl;

  return 0;
}
