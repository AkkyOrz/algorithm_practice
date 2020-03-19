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

int n, m;

VI k;
VI s;
VI p;


bool isOK(int bit){
    REP(i, m){
        if (__builtin_popcount(bit & s[i]) % 2 != p[i]) return false;
    }
    return true;
}

signed main()
{
    cin >> n >> m;
    REP(i, m){
        int a;
        cin >> a;
        k.push_back(a);
        int mask = 0;
        REP(i, a){
            int b;
            cin >> b;
            mask |= (1<<(b-1));
        }
        s.push_back(mask);
    }
    REP(i, m){
        int a;
        cin >> a;
        p.push_back(a);
    }

    int cnt = 0;
    REP(bit, 1<<n){
        if (isOK(bit)) cnt++; 
    }
    cout << cnt << endl;
    return 0;
}