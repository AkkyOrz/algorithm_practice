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

constexpr int DX[] = {1, 0, -1, 0, 1, -1, 1, -1};
constexpr int DY[] = {0, 1, 0, -1, 1, -1, -1, 1};

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

VS s(10);
VVI v(10, VI(10));
int n;

int range(int i, int n) {
  if (i >= n)
    return i - n;
  if (i < 0)
    return i + n;
  return i;
}

int calculateMax(int i, int j) {
  int ma = -1;
  for (auto x = 0; x < 8; x++) {
    int cnt = 0LL;
    for (auto times = 0; times < n; times++) {
      int s = range(i + times * DX[x], n);
      int t = range(j + times * DY[x], n);
      DEBUG(v[s][t]);
      cnt = cnt * 10 + v[s][t];
    }
    ma = max(ma, cnt);
  }
  return ma;
}

signed main() {
  cin >> n;
  s.resize(n);
  for (auto i = 0; i < n; i++) {
    cin >> s[i];
    for (auto j = 0; j < n; j++) {
      v[i][j] = s[i][j] - '0';
    }
  }

  int ma = -1;
  for (auto i = 0; i < n; i++) {
    for (auto j = 0; j < n; j++) {
      ma = max(ma, calculateMax(i, j));
    }
  }

  cout << ma << endl;
  return 0;
}
