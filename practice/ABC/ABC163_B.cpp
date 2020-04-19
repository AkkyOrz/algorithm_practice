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

int n, m;
VI a(100100);

signed main()
{
    cin >> n >> m;

    REP(i, m){
        cin >> a[i];
    }
    a.resize(m);

    int sum = accumulate(ALL(a), 0);

    if (n < sum){
        cout << -1 << endl;
    } else {
        cout << n - sum << endl;
    }


    return 0;
}