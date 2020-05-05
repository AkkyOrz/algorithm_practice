// @prefix atcoder
// @description atcoder template

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
VI h(100010);
VI ma(100010, 0);

signed main() {
    cin >> n >> m;
    h.resize(n);
    ma.resize(n);
    REP(i, n) {
        cin >> h[i];
    }

    REP(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        ma[a] = max(ma[a], h[b]);
        ma[b] = max(ma[b], h[a]);
    }

    int res = 0;
    REP(i, n) {
        DEBUGP(make_pair(h[i], ma[i]));
        if (h[i] > ma[i])
            res++;
    }

    cout << res << endl;
    return 0;
}
