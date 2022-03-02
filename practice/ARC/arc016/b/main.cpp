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

void printAns(bool flag) {
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

signed main() {
  int n;
  cin >> n;
  VS x;
  REP(i, n) {
    string s;
    cin >> s;
    x.push_back(s);
  }

  vector<bool> button_on(9, false);
  int res = 0;
  REP(i, n) {
    REP(j, 9) {
      if (x[i][j] == 'x') {
        button_on[j] = false;
        res++;
      }
      if (x[i][j] == 'o') {
        if (!button_on[j]) {
          button_on[j] = true;
          res++;
        }
      }
      if (x[i][j] == '.')
      {
        button_on[j] = false;
      }
    }
  }
  cout << res << endl;

  return 0;
}
