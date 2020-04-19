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
VI a(100100);
VI cnt(100010,0);

signed main()
{
    cin >> n;
    a.resize(n-1);
    cnt.resize(n);
    REP(i, n-1){
        cin >> a[i];
    }


    REP(i,n-1){
        cnt[a[i]-1]++;
    }

    REP(i, cnt.size()){
        cout << cnt[i] << endl;
    }
    return 0;
}