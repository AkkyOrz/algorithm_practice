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
VP p;
map<PII, int> mp;

signed main() {
  cin >> n;
  REP(i, n) {
    int a, b;
    cin >> a >> b;
    int g = gcd(a, b);
    a /= g;
    b /= g;
    p.push_back(make_pair(a, b));
    if (mp.count(make_pair(a, b))) {
      mp[make_pair(a, b)] = 1;
    } else {
      mp[make_pair(a, b)]++;
    }
  }
  sort(ALL(p));

  return 0;
}
