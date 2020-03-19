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
VI a;
int q;
VI m;

bool isOK(int k, int i, int d){
    if (d == m[k]) return true;
    if (i == n) return false;
    return isOK(k, i+1, d + a[i]) || isOK(k, i+1, d);
}

signed main()
{
    cin >> n;
    REP(i, n){
        int x;
        cin >> x;
        a.push_back(x);
    }
    cin >> q;
    REP(i, q){
        int x;
        cin >> x;
        m.push_back(x);
    }

    REP(i, q){
        if (isOK(i, 0, 0)){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}