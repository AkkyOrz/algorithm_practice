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

int d, n, m;
VI s(100010);
VI v(10010);

signed main()
{
    cin >> d >> n >> m;
    s[0] = 0;
    REP(i, n-1) {
        cin >> s[i+1];
    }
    REP(i, m) {
        cin >> v[i];
    }

    s.resize(n);
    v.resize(m);

    sort(ALL(s));
    sort(ALL(v));
    
    
    return 0;
}