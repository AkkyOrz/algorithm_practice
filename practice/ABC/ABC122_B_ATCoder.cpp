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

string s;

bool check(char c){
    return c == 'A' || c == 'T' || c == 'G' || c == 'C';
}

signed main()
{
    cin >> s;
    int res = 0;

    REP(i, s.size()){
        if (!check(s[i])) continue;
        res = max(res, 1LL);
        FOR(j, i+1, s.size()){
            if (!check(s[j])) break;
            res = max(res, j - i + 1);
        }
    }

    cout << res << endl;
    return 0;
}