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
VI a(1999);
signed main()
{
    cin >> n >> m;
    a.resize(n);
    REP(i, n){
        cin >> a[i];
    }

    sort(ALL(a));
    reverse(ALL(a));

    int sum = accumulate(ALL(a), 0);

    if (a[m-1] * 4 * m >= sum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}