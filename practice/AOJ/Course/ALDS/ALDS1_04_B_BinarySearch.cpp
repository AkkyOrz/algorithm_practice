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

int n, q;
VI s(100010), t(50010);

signed main()
{
    cin >> n;
    REP(i, n){
        cin >> s[i];
    }
    cin >> q;
    REP(i, q){
        cin >> t[i];
    }

    s.resize(n);
    VI::iterator ite = unique(ALL(s));
    s.resize(distance(s.begin(), ite));
    t.resize(q);

    int res = 0;
    REP(i, q){
        if (lower_bound(ALL(s), t[i]) != s.end()){
            res += (upper_bound(ALL(s), t[i]) - lower_bound(ALL(s), t[i]));
        } else if (lower_bound(ALL(s), t[i]) == s.end() && upper_bound(ALL(s), t[i]) == s.begin()) {
            res += 1;
        }
    }

    cout << res << endl;
    return 0;
}