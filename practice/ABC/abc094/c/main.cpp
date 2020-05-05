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


int n;
VI v(200010);
VI a(200010);

signed main()
{
    cin >> n;
    v.resize(n);
    a.resize(n);
    REP(i, n){
        cin >> v[i];
        a[i] = v[i];
    }

    sort(ALL(v));

    int left = v[n/2-1];
    int right = v[n/2];

    REP(i, n){
        if (a[i] <= left) {
            cout << right << endl;
        } else {
            cout << left <<endl;
        }
    }
}