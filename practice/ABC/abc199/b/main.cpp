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
signed main() {
  cin >> n;
  VI a(n);
  VI b(n);

  int ma_a = -1;
  int mi_b = INF;
  REP(i, n) {
    cin >> a[i];
    ma_a = max(ma_a, a[i]);
  }
  REP(i, n) {
    cin >> b[i];
    mi_b = min(mi_b, b[i]);
  }

  if (ma_a > mi_b) {
    cout << 0 << endl;
  } else {
    cout << mi_b - ma_a + 1 << endl;
  }

  return 0;
}
