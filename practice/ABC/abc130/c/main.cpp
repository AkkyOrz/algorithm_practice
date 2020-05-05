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
#define DEBUG(x) cerr << #x << ": " << x << '\n

int w, h;
int x, y;

signed main()
{
    cin >> w >> h;
    cin >> x >> y;

    double res = (w*h) / 2.0;
    cout << res << " ";

    if ((double)w / 2.0 == (double)x  && (double)h / 2.0 == (double)y){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}