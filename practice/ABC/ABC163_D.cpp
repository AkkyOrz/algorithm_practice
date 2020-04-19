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

const int MOD = 1000000007;

int n, k;

signed main()
{
    cin >> n >> k;

    int res = 0;
    FOR(i, k, n+2){//how many choose
        int ma=0, mi=0;
        mi = ((0 + i-1)%MOD) * i / 2;
        ma = (n + n-i+1) * i / 2;
        res = (res + ma - mi + 1) % MOD;
    }

    cout << res << endl;

    return 0;
}