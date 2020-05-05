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

int n;
string s;
signed main()
{
    cin >> n; 
    cin >> s;

    map<char, int> mp;
    REP(i, n){
        mp[s[i]]++;
    }

    int cnt = 1;
    int col = 0;
    for (auto m : mp){
        cnt *= m.second;
        col++;
    }
    if (col != 3){
        cout << "0" << endl;
        return 0;
    }

    REP(i, n){
        REP(j, n){
            int a, b, c;
            a = i;
            b = i + j;
            c = i + 2*j;
            if (c >= n) break;
            if (s[a] != s[b] && s[b] != s[c] && s[c] != s[a]) cnt--;
        }
    }

    cout << cnt << endl;

    return 0;
}