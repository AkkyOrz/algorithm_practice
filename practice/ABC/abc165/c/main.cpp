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

int n, m, q;

VVI v;

signed main() {
    cin >> n >> m >> q;

    REP(i, q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        VI tmp;
        tmp.push_back(a);
        tmp.push_back(b);
        tmp.push_back(c);
        tmp.push_back(d);
        v.push_back(tmp);
    }

    sort(ALL(v), [](VI a, VI b) {
        if (a[0] == b[0]) {
            return a[1] < b[1];
        }
        return a[0] < b[0];
    });

    for (auto vec : v) {
        cout << vec[0] << "," << vec[1] << "," << vec[2] << "," << vec[3] << endl;
    }

    VVI dp(n + 1, VI(m, 0));
    for (auto vec : v) {
    }

    return 0;
}
