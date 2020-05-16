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
VI a(100);
VI col(8, 0);

signed main() {
    cin >> n;
    a.resize(n);
    REP(i, n) {
        cin >> a[i];
    }
    sort(ALL(a));
    int res = 0;
    int wild = 0;
    REP(i, n) {
        if (a[i] >= 3200) {
            wild++;
        } else {
            col[a[i] / 400]++;
        }
    }

    for (auto c : col) {
        if (c > 0) {
            res++;
        }
    }

    int mi, ma;
    mi = max(res, 1LL);
    ma = res + wild;
    cout << mi << " " << ma << endl;
    return 0;
}
