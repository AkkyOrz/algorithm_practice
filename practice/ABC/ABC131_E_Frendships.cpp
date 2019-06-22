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

signed main()
{
    cin >> n >> k;

    if ((n-2)*(n-1)/2  < k){
        cout << -1 << endl;
        return 0;
    }
    int index = 0;
    FOR(i, 2, n){
        // DEBUG((i-1)*(i-2)/ 2);
        if ((i-1)*(i-2) / 2 > k) break;
        index = i;
    }
    // DEBUG(index);

    FOR(i, 2, index+1){
        cout << 1 << " " << i << endl;
    }

    int cnt = (index-1)*(index-2)/2;
    // DEBUG(cnt);
    if (cnt != k){
    FOR(i, 2, index+1){
        if (cnt == k) {
            break;
        }
        cout << i << " " << index+1 << endl;
        cnt++;
    }
    index++;
    }
    FOR(i, index+1, n+1 ){
        FOR(j, 1, n+1){
            if (i <= j) continue;
            cout << i << " " << j << endl;
        }
    }


    return 0;
}