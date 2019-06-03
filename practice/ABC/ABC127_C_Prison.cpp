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


VI l(10010);
VI r(10010);

int n, m;
signed main()
{
      cin >> n >> m;
      l.resize(m);
      r.resize(m);
      REP(i, m){
          cin >> l[i] >> r[i];
      }  
      sort(ALL(l));
      sort(ALL(r));

      cout << max(min(n, r.front() - l.back() + 1), 0LL) << endl;
}