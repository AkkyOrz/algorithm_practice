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
string s;
int q;

signed main() {
  cin >> n;
  cin >> s;
  cin >> q;
  string s_head = s.substr(0, n);
  string s_tail = s.substr(n, n);
  int cnt = 0;
  REP(i, q) {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1) {
      if (b <= n) {
        if (cnt % 2 == 0) {
          char c = s_head[a - 1];
          s_head[a - 1] = s_head[b - 1];
          s_head[b - 1] = c;
        } else {
          char c = s_tail[a - 1];
          s_tail[a - 1] = s_tail[b - 1];
          s_tail[b - 1] = c;
        }
      } else if (n < a) {
        if (cnt % 2 == 0) {
          char c = s_tail[a - 1 - n];
          s_tail[a - 1 - n] = s_tail[b - 1 - n];
          s_tail[b - 1 - n] = c;
        } else {
          char c = s_head[a - 1 - n];
          s_head[a - 1 - n] = s_head[b - 1 - n];
          s_head[b - 1 - n] = c;
        }
      } else {
        if (cnt % 2 == 0) {
          char c = s_head[a - 1];
          s_head[a - 1] = s_tail[b - 1 - n];
          s_tail[b - 1 - n] = c;
        } else {
          char c = s_tail[a - 1];
          s_tail[a - 1] = s_head[b - 1 - n];
          s_head[b - 1 - n] = c;
        }
      }
      if (cnt % 2 == 0) {
        // DEBUG(s_head + s_tail);
      } else {
        // DEBUG(s_tail + s_head);
      }
    } else {
      cnt++;
      // DEBUG(s_tail + s_head);
    }
    // DEBUG(cnt);
  }
  if (cnt % 2 == 0) {
    s = s_head + s_tail;
  } else {
    s = s_tail + s_head;
  }
  cout << s << endl;
  return 0;
}
