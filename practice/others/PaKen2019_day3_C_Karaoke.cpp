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

int n, m;
VVI a(101);

signed main()
{
    cin >> n >> m;
    REP(i, n){
        REP(j, m){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    a.resize(n);

    int res = -1LL;
    int score = 0LL;
    REP(i, m){
        FOR(j, i+1, m){
            REP(k, n){
                score += max(a[k][i], a[k][j]);
            }
            res = max(res, score);
            score = 0LL;
        }
    }
    cout << res << endl;

    return 0;
}