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

int n, k;

VI v(10010);
VI sum(10010);

signed main()
{
    cin >> n >> k;
    v.resize(n);
    sum.resize(n+1);
    REP(i, n){
        cin >> v[i];
    }

    sum[0] = 0;
    REP(i, n){
        sum[i+1] = sum[i] + v[i];
    }

    int res = 0LL;

    /* 区間の左端 left で場合分け */
    int left = 0;
    int right = 0;

    while (left < n) {
        int cnt = sum[right] - sum[left];
         // [left, right) の総和が x 以下となる最大の right を求める
        /* sum に a[right] を加えても大丈夫なら right を動かす */
        while (right < n && cnt + v[right] < k) {
            cnt += v[right];
            ++right;
        }
        //DEBUG(right);
        /* break した状態で right は条件を満たす最大 */
        res += (n - right);

        left++;
    }
    cout << res << endl;
    return 0;
}