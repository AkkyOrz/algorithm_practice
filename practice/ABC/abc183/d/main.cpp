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

int n, w;
VI p(200001);
VI q(200001, 0);
VP v(200001);

signed main() {
  cin >> n >> w;
  REP(i, n) {
    cin >> v[i].first >> v[i].second >> p[i];
    q[v[i].first] += p[i];
    q[v[i].second] += -p[i];
  }

  p.resize(n);
  v.resize(n);

  VI s(n + 1, 0);
  s[0] = 0;

  REP(i, n) { s[i + 1] = s[i] + q[i]; }

  bool flag = true;
  REP(i, n + 1) {
    if (s[i] > w) {
      flag = false;
    }
  }

  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
