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

void printAns(bool flag) {
  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

signed main() {
  string x;
  cin >> x;

  bool flag = true;

  while (x.length() > 0 && flag) {
    if (x.substr(0, 2) == "ch") {
      x = x.substr(2, x.length() - 2);
    } else if (x[0] == 'o' || x[0] == 'k' || x[0] == 'u') {
      x = x.substr(1, x.length() - 1);
    } else {
      flag = false;
    }
  }

  printAns(flag);
  return 0;
}
