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

int n, m, x;

VI c(13);
VVI a(13, VI(13));

signed main()
{
  cin >> n >> m >> x;

  REP(i, n)
  {
    cin >> c[i];
    REP(j, m) { cin >> a[i][j]; }
  }

  int mi = INF;
  REP(i, (1 << n))
  {
    VI cnt(m, 0);
    int cost = 0;
    REP(j, n)
    {
      if (i & (1 << j)) {
        REP(k, m) { cnt[k] += a[j][k]; }
        cost += c[j];
      }
    }
    bool flag = true;
    REP(j, m)
    {
      if (cnt[j] < x) flag = false;
    }
    if (flag) { mi = min(mi, cost); }
  }

  if (mi == INF) {
    cout << -1 << endl;
  } else {
    cout << mi << endl;
  }
  return 0;
}
