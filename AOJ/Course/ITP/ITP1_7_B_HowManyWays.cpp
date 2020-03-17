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

VI n, x;
int cnt = 0;
signed main()
{
    REP(i, 10000){
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        n.push_back(a);
        x.push_back(b);
    }

    REP(times, n.size()){
        FOR(i, 1, x[times]){
            FOR(j, i+1, x[times] - i){
                if (x[times] - i - j > j && x[times] - i - j <= n[times]) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}