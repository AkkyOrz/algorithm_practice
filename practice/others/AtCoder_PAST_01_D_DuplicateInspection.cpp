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

int n; 
VI v(200100);
signed main()
{
    cin >> n;
    REP(i, n){
        int a;
        cin >> a;
        v[a]++;
    }
    v.resize(n);

    int x = -1; 
    int y = -1;
    FOR(i,1, n+1){
        if (v[i] == 0){
            x = i;
        }
        if (v[i] == 2){
            y = i;
        }
    }

    if (x == y && y == -1){
        cout << "Correct" << endl;
    } else {
        cout << y << " " << x << endl;
    }

    return 0;
}