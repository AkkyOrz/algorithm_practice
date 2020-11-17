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

int n, k;
VVI t;
signed main() {
  cin >> n >> k;
  REP(i, n) {
    VI v(n);
    REP(j, n) { cin >> v[j]; }
    t.push_back(v);
  }

  VI one_case;
  FOR(i, 1, n) { one_case.push_back(i); }

  int cnt = 0;
  do {
    int sum = t[0][one_case.front()];
    int idx = one_case.front();
    FOR(i, 1, n - 1) {
      sum += t[idx][one_case[i]];
      idx = one_case[i];
    }
    sum += t[one_case.back()][0];
    if (sum == k)
      cnt++;
  } while (next_permutation(one_case.begin(), one_case.end()));

  cout << cnt << endl;
  return 0;
}
