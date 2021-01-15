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
VI a(101);
signed main() {
  cin >> n;
  REP(i, n) { cin >> a[i]; }
  a.resize(n);

  int ma = 1;
  int cnt = 1;
  FOR(i, 2, 1001) {
    int sum = 0;
    REP(j, n) {
      if (a[j] % i == 0) {
        sum++;
      }
    }
    if (sum >= cnt) {
      ma = i;
      cnt = sum;
    }
  }

  std::cout << ma << endl;
  return 0;
}