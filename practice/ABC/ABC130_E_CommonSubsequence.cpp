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

const int MOD = 1e9 + 7;

int n, m;
VI s(2100), t(2100);

signed main()
{
    cin >> n >> m;
    s.resize(n);
    t.resize(m);
    REP(i, n){
        cin >> s[i];
    }
    REP(i, n){
        cin >> t[i];
    }
    

    return 0;
}