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

const int INF = numeric_limits<int>::max();

int n;
VI a, b;

int culc(int start, int goal){
    int cnt = 0;
    REP(i, a.size()){
        cnt += (abs(start - a[i]) + abs(b[i] - a[i]) + abs(goal - b[i]));
    }
    return cnt;
}


signed main()
{
    cin >> n;
    REP(i, n){
        int x, y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    int res = INF;

    REP(i, n){
        REP(j, n){
            res = min(res, culc(a[i], b[j]));
        }
    }

    cout << res << endl;

    return 0;
}