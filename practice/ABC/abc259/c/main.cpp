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

string s, t;
signed main() {

  cin >> s;
  cin >> t;

  vector<pair<char, int>> s_cnt(200010, {0, 0}); // sの文字とその出現回数
  vector<pair<char, int>> t_cnt(200010, {0, 0}); // tの文字とその出現回数

  bool flag = true;

  int pair_cnt = 0;
  REP(i, s.length()) {
    pair<char, int> p;
    p.first = s[i];
    p.second = 1;
    int si = 0;
    while (i + si < s.length() && s[i + si] == p.first) {
      p.second++;
      si++;
    }
    p.second--;
    i += si - 1;
    s_cnt[pair_cnt] = p;
    pair_cnt++;
  }
  s_cnt.resize(pair_cnt);

  pair_cnt = 0;
  REP(i, t.length()) {
    pair<char, int> p;
    p.first = t[i];
    p.second = 1;
    int ti = 0;
    while (i + ti < t.length() && t[i + ti] == p.first) {
      p.second++;
      ti++;
    }
    p.second--;
    i += ti - 1;
    t_cnt[pair_cnt] = p;
    pair_cnt++;
  }
  t_cnt.resize(pair_cnt);

  if (s_cnt.size() != t_cnt.size()) {
    flag = false;
  } else {
    REP(i, s_cnt.size()) {
      if (s_cnt[i].first != t_cnt[i].first) {
        flag = false;
      } else if (s_cnt[i].second != t_cnt[i].second) {
        if (s_cnt[i].second > t_cnt[i].second) {
          flag = false;
        } else if (s_cnt[i].second < 2) {
          flag = false;
        }
      }
    }
  }

  printAns(flag);
  return 0;
}
