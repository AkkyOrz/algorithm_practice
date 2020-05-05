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

int n, m, x;
VI v(1000);

signed main()
{
    cin >> n >> m >> x;
    v.resize(m);
    REP(i, m){
        cin >> v[i];
    }

    int index = (int)(lower_bound(ALL(v), x) - v.begin());
    cout << min(m-index, index) << endl;
}