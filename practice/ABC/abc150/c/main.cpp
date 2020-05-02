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
int p, q;
VI ps, qs;

signed main() {
    cin >> n;
    REP(i, n) {
        int a;
        cin >> a;
        p += a * pow(10, n - i - 1);
    }
    REP(i, n) {
        int a;
        cin >> a;
        q += a * pow(10, n - i - 1);
    }
    VI pi;
    VI qi;
    REP(i, n) { pi.push_back(i + 1); }
    REP(i, n) { qi.push_back(i + 1); }

    do {
        int a = 0;
        int b = 0;
        REP(i, n) {
            a += pow(10, i) * pi[i];
            b += pow(10, i) * qi[i];
        }
        ps.push_back(a);
        qs.push_back(b);
    } while (next_permutation(pi.begin(), pi.end()) && next_permutation(qi.begin(), qi.end()));

    sort(ALL(ps));
    sort(ALL(qs));

    auto x = lower_bound(ALL(ps), p) - ps.begin();
    auto y = lower_bound(ALL(qs), q) - qs.begin();

    cout << abs(x - y) << endl;
    return 0;
}