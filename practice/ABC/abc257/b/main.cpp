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

VI v;

int n, k, q;

signed main() {
  cin >> n >> k >> q;
  REP(i, k) {
    int a;
    cin >> a;
    v.push_back(a);
  }
  v.resize(k);

  REP(i, q) {
    int l;
    cin >> l;
    if (v[l - 1] >= n)
      continue;
    else {
      if (l == k) {
        v[l - 1]++;
      } else if (v[l - 1] + 1 == v[l]) {
        continue;
      } else {
        v[l - 1]++;
      }
    }
  }

  cout << v[0];
  FOR(i, 1, k) { cout << " " << v[i]; }
  cout << endl;

  return 0;
}
