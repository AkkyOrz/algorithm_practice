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
PII s, t;
VP p;
VI r;

// double distance(PII a, PII b) {
//   return sqrt((a.first - b.first) * (a.first - b.first) +
//               (a.second - b.second) * (a.second - b.second));
// }

int distance2(PII a, PII b) {
  return (a.first - b.first) * (a.first - b.first) +
         (a.second - b.second) * (a.second - b.second);
}
// p0: 円0の中心
// p1: 円1の中心
// r0: 円0の半径
// r1: 円1の半径
// 円0と円1が重なるかどうかを判定する
bool isCross(PII p0, int r0, PII p1, int r1) {
  // double d = distance(p0, p1);
  // return (abs(r1 - r0) <= d && d <= r1 + r0);

  int d2 = distance2(p0, p1);
  return (abs(r1 - r0) * abs(r1 - r0) <= d2 && d2 <= (r1 + r0) * (r1 + r0));
}

signed main() {
  cin >> n;
  cin >> s.first >> s.second;
  cin >> t.first >> t.second;

  p.resize(n);
  r.resize(n);
  REP(i, n) { cin >> p[i].first >> p[i].second >> r[i]; }

  dsu uf(n);

  VI start;
  VI end;
  // 始点s, tがどの円に属しているか
  REP(i, n) {
    if (distance2(s, p[i]) == r[i] * r[i]) {
      start.push_back(i);
    }
    if (distance2(t, p[i]) == r[i] * r[i]) {
      end.push_back(i);
    }
  }

  // 半径r, 中心pの円が交わるかどうか判定する
  REP(i, n) {
    REP(j, n) {
      if (isCross(p[i], r[i], p[j], r[j])) {
        uf.merge(i, j);
        uf.merge(j, i);
      }
    }
  }
  for (int i : start) {
    for (int j : end) {
      if (uf.same(i, j)) {
        printAns(true);
        return 0;
      }
    }
  }
  printAns(false);

  return 0;
}
