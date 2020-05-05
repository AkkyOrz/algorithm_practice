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

int n;
int k;
VI cnt(100);

signed main() {
    cin >> n >> k;
    cnt.resize(n);
    REP(i, k) {
        int d;
        cin >> d;
        REP(j, d) {
            int p;
            cin >> p;
            cnt[p - 1]++;
        }
    }

    int res = 0;
    REP(i, n) {
        if (cnt[i] == 0) {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}
