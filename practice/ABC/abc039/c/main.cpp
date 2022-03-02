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

signed main() {
  string board = "WBWBWWBWBWBW";
  string s;
  cin >> s;

  int b_len = board.size();
  int ans = -1;
  board = board + board + board;
  REP(i, b_len) {
    REP(j, s.length()) {
      if (s[j] == board[i + j]) {
        if (j == s.length() - 1)
          ans = i;
        continue;
      } else {
        break;
      }
    }
  }
  DEBUG(ans);
  switch (ans) {
  case 0:
    cout << "Do";
    break;
  case 2:
    cout << "Re";
    break;
  case 4:
    cout << "Mi";
    break;
  case 5:
    cout << "Fa";
    break;
  case 7:
    cout << "So";
    break;
  case 9:
    cout << "La";
    break;
  case 11:
    cout << "Si";
    break;
  }

  cout << endl;

  return 0;
}
