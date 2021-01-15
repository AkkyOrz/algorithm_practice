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

string s;
signed main() {
  cin >> s;
  bool flag = false;
  if (s.length() == 1) {
    if (s == "8") {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
    return 0;
  }
  if (s.length() == 2) {
    if (stoi(s) % 8 == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
    reverse(ALL(s));
    if (stoi(s) % 8 == 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
    return 0;
  }

  VI bucket(10, 0);
  for (auto c : s) {
    bucket[c - '0']++;
  }

  for (int i = 112; i < 1000; i += 8) {
    auto c = bucket;
    for (auto x : to_string(i)) {
      c[x - '0']--;
    }
    if (all_of(ALL(c), [](int x) { return x >= 0; })) {
      flag = true;
    }
  }
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
