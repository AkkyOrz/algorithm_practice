// @prefix atcoder
// @description atcoder template

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
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

int n;
VP x;
VI p;

bool check(int mid) {
  vector<vector<vector<int>>> dp(n,
                                 vector<vector<int>>(n, vector<int>(n, INF)));
  // Floyd–Warshall Algorithm

  REP(k, n) {
    REP(i, n) {
      REP(j, n) {
        dp[i][j][k] = double(abs(x[i].first - x[j].first) +
                             abs(x[i].second - x[j].second)) /
                      p[j];
      }
    }
  }

  REP(k, n) {
    REP(i, n) {
      REP(j, n) { dp[i][j][k] = min(dp[i][j][k], dp[i][k][k] + dp[k][j][k]); }
    }
  }
  int min_dist = INF;
  REP(i, n) {
    int ma = 0;
    REP(j, n) {
      REP(k, n) { ma = max(ma, dp[i][j][k]); }
    }
    min_dist = min(min_dist, ma);
  }
  return (mid >= min_dist);
}

signed main() {
  cin >> n;

  x.resize(n);
  p.resize(n);
  REP(i, n) {
    cin >> x[i].first >> x[i].second;
    cin >> p[i];
  }

  int ok = -1;
  int ng = INF;

  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if (check(mid)) {
      ok = mid;
    } else {
      ng = mid;
    }
  }
  cout << ok << endl;

  return 0;
}
