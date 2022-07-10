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

int n, q;
string s;

signed main() {
  cin >> n >> q;
  cin >> s;

  int index = 0;
  for (int i = 0; i < q; i++) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      // S の末尾の文字を削除し、先頭に挿入する」という操作を x 回連続で行う。
      // head は head + x
      if (index - x >= 0) {
        index -= x;
      } else {
        index -= x;
        index += n;
      }
    } else {
      // : S の x 番目の文字を出力する。
      // head + x
      int y = (index + x - 1) % n;
      DEBUG(y);
      cout << s[y] << endl;
    }
  }

  return 0;
}
