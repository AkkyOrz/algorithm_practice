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
VP v(50);

map<PII, int> mp;


signed main()
{
    cin >> n;

    REP(i, n){
        cin >> v[i].first >> v[i].second;
    }
    v.resize(n);

    int cnt = -1LL;
    REP(i, n){
        REP(j, n){
            int dx = v[i].first - v[j].first;
            int dy = v[i].second - v[j].second;
            if (dx == 0 && dy == 0) continue;
            mp[make_pair(dx, dy)]++;
            cnt = max(cnt, mp[make_pair(dx, dy)]);
        }
    }
    // if (n == 1){
    //     cout << 1 << endl;
    // } else {
        cout << n - cnt << endl;
    //}
    return 0;
}