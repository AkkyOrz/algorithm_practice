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

VI s;

signed main()
{
    string p;
    cin >> p;
    REP(i, 4){
        s.push_back(p[i]-'A');
    }
    sort(ALL(s));

    if (s[0] == s[1] && s[1] != s[2] && s[2] == s[3]){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}