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

  int sum = 0;
  int mod0 = 0, mod1 = 0, mod2 = 0;
  for (int i = 0; pow(10, i) < n; i++) {
    int n_digit = ((n / (int)pow(10, i)) % 10) % 3;
    if (n_digit == 0) {
      mod0++;
    }
    if (n_digit == 1) {
      mod1++;
    }
    if (n_digit == 2) {
      mod2++;
    }
    sum = (sum + n_digit) % 3;
  }
  DEBUG(sum);
  DEBUG(mod0);
  DEBUG(mod1);
  DEBUG(mod2);
  int digit = mod0 + mod1 + mod2;
  if (sum == 0) {
    cout << 0 << endl;
  } else if (sum == 1) {
    if (mod1 >= 1 && digit >= 2) {
      cout << 1 << endl;
    } else if (mod2 >= 2 && digit >= 3) {
      cout << 2 << endl;
    } else {
      cout << -1 << endl;
    }
  } else if (sum == 2) {
    if (mod2 >= 1 && digit >= 2) {
      cout << 1 << endl;
    } else if (mod1 >= 2 && digit >= 3) {
      cout << 2 << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
