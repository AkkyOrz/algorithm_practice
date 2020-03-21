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


int r, c;
vector<vector<bool>> a;

signed main()
{
    cin >> r >> c;
    REP(i, r){
        vector<bool> b;
        REP(j, c){
            int t;
            cin >> t;
            b.push_back(bool(t));
        }
        a.push_back(b);
    }
    int res = 0;

    REP(i, 1<<r){
        auto vec(a);
        REP(j, r){
            if (i & (1<<j)){
                vec[j].flip();
            }
        }
        int cnt = 0;
        REP(j, c){
            int cnt_col = 0;
            REP(k, r){
                cnt_col += (int)(vec[k][j]);
            }
            cnt_col = max(cnt_col, r - cnt_col);
            cnt += cnt_col;
        }
        res = max(res, cnt);
    }
    cout << res << endl;

    return 0;
}