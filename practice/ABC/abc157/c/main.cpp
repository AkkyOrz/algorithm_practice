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
VP v(5);

signed main() {
    cin >> n >> m;

    v.resize(m);
    REP(i, n) {
        cin >> v[i].first >> v[i].second;
    }

    FOR(i, pow(10, n - 1), pow(10, n)) {
        string s = to_string(i);
        bool flag = true;
        for (auto pa : v) {
            if (s[pa.first - 1] != pa.second + '0') {
                flag = false;
            }
        }
        if (flag) {
            cout << s << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
