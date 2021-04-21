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

int n;
VI a(20);
signed main() {
  cin >> n;
  REP(i, n) { cin >> a[i]; }

  a.resize(n);

  sort(ALL(a));
  reverse(ALL(a));

  VI bitCnt(30, 0);

  REP(i, n) {
    REP(bit, 30) {
      if ((1 << bit) & a[i]) {
        bitCnt[bit]++;
      }
    }
  }

  int res = 0;
  REP(bit, 30) {
    if (bitCnt[bit] == 0)
      continue;
    else if (bitCnt[bit] == 1) {
      res += (bit << 1);
    } else if (bitCnt[bit] >= 2) {
      continue;
    }
  }

  cout << res << endl;
  return 0;
}
