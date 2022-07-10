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

int n, x;
VP pa;

signed main() {

  cin >> n >> x;
  REP(i, n) {
    int a;
    int b;
    cin >> a >> b;
    pa.push_back(make_pair(a, b));
  }

  int mi = INF;
  int sum = 0;
  REP(i, n) {
    // iまで初挑戦
    // 残りはiだけ全部やる
    if (i + 1 > x)
      break;
    sum += pa[i].first + pa[i].second;
    mi = min(mi, sum + pa[i].second * (x - i - 1));
  }
  cout << mi << endl;
  return 0;
}
