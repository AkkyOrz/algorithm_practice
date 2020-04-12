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

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int n;
signed main()
{
    cin >> n;

    int res = 0;
    FOR(i,1, n+1){
        FOR(j, i, n+1){
            FOR(k, j, n+1){
                if (i != j && j != k && k != i){ 
                    res += 6 * gcd(i, gcd(j, k));
                } else if (i == j && j == k){
                    res += i;
                } else {
                    res += 3 * (gcd(i, gcd(j, k)));
                }
            }
        }
    }

    cout << res << endl;
    return 0;
}