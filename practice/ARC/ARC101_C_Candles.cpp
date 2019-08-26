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

const int INF = 1LL << 62;

int n, k;
VI v(100010);

signed main()
{
    cin >> n >> k;
    REP(i, n){
        cin >> v[i];
    }
    v.resize(n);

    int res = INF;
    if (n - k == 0){
        int r = abs(v[0]) + abs(v[k-1] - v[0]);
        int l = abs(v[k-1]) + abs(v[k-1] - v[0]);
        res = min(res, min(r, l));
    } else {
    FOR(i, 0, n - k+1){
        int left = v[i];
        int right = v[i+k-1];
        int r = abs(left) + abs(left - right);
        int l = abs(right) + abs(left - right);
        res = min(res, min(r, l));
    }
    }

    cout << res << endl;
    return 0;
}