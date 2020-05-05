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
#define DEBUG(x) cerr << #x << 

int n, x;
VI v(101);

signed main()
{
    cin >> n >> x;

    REP(i, n){
        cin >> v[i];
    }

    int d = 0;
    REP(i, n){
        d += v[i];
        if (d <= x) continue;
        cout << i+1 << endl;
        return 0;
    }
    cout << n+1 << endl;
    return 0;
}
