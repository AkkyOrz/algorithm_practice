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

int n, k;
VP v;
signed main() {
    cin >> n >> k;
    k--;

    REP(i, n) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(ALL(v), [](PII x, PII y) {
        return x.first < y.first;
    });

    int now = 0;
    FOR(i, 0, n) {
        if (now <= k && k < v[i].second + now) {
            cout << v[i].first << endl;
            return 0;
        }
        now += v[i].second;
    }
    return 0;
}
