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
VP point;

signed main()
{
    cin >> n;
    REP(i, n){
        int x, y;
        cin >> x >> y;
        point.push_back(make_pair(x, y));
    }


    long double sum = 0;
    
    VI v;
    REP(i, n){
        v.push_back(i);
    }

    do {
        FOR(i, 1, n){
            sum += sqrt(pow(point[v[i]].first - point[v[i-1]].first, 2) + pow(point[v[i]].second - point[v[i-1]].second, 2) );
        }
    } while (next_permutation(v.begin(), v.end()));

    int cnt = 1;
    FOR(i,1,n+1){
        cnt *= i;
    }

    cout << fixed << setprecision(10) <<  (long double) (sum) / (long double)(cnt) << endl;
    return 0;
}