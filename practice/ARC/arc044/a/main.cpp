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

  if (n == 1) {
    cout << "Not Prime" << endl;
  } else if (n == 2 || n == 3 || n == 5) {
    cout << "Prime" << endl;
  } else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0) {
    cout << "Prime" << endl;
  } else {
    cout << "Not Prime" << endl;
  }
  return 0;
}
