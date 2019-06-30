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

int n, l;

signed main()
{
    cin >> n >> l;

    int sum = 0;

    FOR(i, l, n+l){
        sum += i;
    }
    // DEBUG(sum);
    if (l < 0){
        if (n > -l){
            sum -= 0; 
        } else {
            sum -= n+l-1;
        }
    } else {
        sum -= l;
    }
    cout << sum << endl;

    return 0;
}