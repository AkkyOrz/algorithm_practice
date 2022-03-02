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
VI a(100010);

bool check(int index, int key) { return (a[index] > key + index); }

signed main() {
  cin >> n >> q;
  a.resize(n);
  REP(i, n) { cin >> a[i]; }

  REP(i, q) {
    int k;
    cin >> k;

    int ng = -1;
    int ok = a.size();

    while (abs(ok - ng) > 1) {
      int mid = (ok + ng) / 2;
      if (check(mid, k)) {
        ok = mid;
      } else {
        ng = mid;
      }
    }
    DEBUG(ok);
    cout << k + ok << endl;
  }
  return 0;
}
