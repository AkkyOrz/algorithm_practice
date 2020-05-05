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

signed main()
{
    cin >> s;

    REP(i, 3){
        if(s[i+1] == s[i]) {
            cout << "Bad" << endl;
            return 0;
        }
    }
    cout << "Good"<< endl;
    return 0;

}