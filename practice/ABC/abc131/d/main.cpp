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

VP v(20010);

signed main()
{
    cin >>  n;
    v.resize(n);
    REP(i, n){
        cin >> v[i].first >> v[i].second;
    }

    sort(ALL(v), [](PII a, PII b){
        return a.second < b.second;
    });

    // REP(i, n){
    //     // DEBUG(v[i].first);
    //     DEBUG(v[i].second);
    // }

    int now = 0;
    REP(i, n){
        if (now + v[i].first > v[i].second){
            cout << "No" << endl;
            return 0;
        }

        now += v[i].first;
    }
    cout << "Yes" << endl;
    return 0;
}