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

int n, x, y;

VI res(10000,0);
signed main()
{
    cin >> n >> x >> y;
    x--;y--;;

    res.resize(n);
    
    REP(i, n){
        FOR(j, i+1, n){
            int a =  min(j-i, abs(x-i) + 1 + abs(j-y));
            res[a]++;
        }
    }
    FOR(i, 1, res.size()){
        cout << res[i] << endl;
    }
    return 0;
}