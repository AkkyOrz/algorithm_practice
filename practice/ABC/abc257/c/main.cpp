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
string s;
VI w;

VP p;

signed main() {
  cin >> n;
  cin >> s;
  w.resize(n);
  REP(i, n) { cin >> w[i]; }

  p.resize(n);
  REP(i, n) {
    p[i].first = s[i] - '0';
    p[i].second = w[i];
  }

  sort(ALL(p), [](const PII &a, const PII &b) { return a.second < b.second; });

  VI sum(n + 1, 0); // i までの大人の数

  REP(i, n) { sum[i + 1] = sum[i] + p[i].first; }

  int ma = n - sum[n]; // 全員子供
  REP(i, n) {
    int cnt = 0;
    if (i > 0 && p[i - 1].second == p[i].second) // 体重が同じ場合は境界を設定できないためskip
      continue;
    // i までの子供の数を計算
    cnt += (i - (sum[i]));

    // i 以降の大人の数を計算
    cnt += (sum[n] - sum[i]);
    ma = max(ma, cnt);
  }

  cout << ma << endl;

  return 0;
}
