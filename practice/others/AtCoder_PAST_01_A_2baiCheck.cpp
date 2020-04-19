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

string s;

signed main()
{
    cin >> s;

    bool flag = false;
    REP(i, 3){
        if (!('0' <= s[i] && s[i] <= '9')) flag = true; 
    }

    if (flag){
        cout << "error" << endl;
    } else {
        cout << stoi(s) * 2 << endl;
    }

    return 0;
}