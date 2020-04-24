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

int x, y, a, b, c;
VI p(10010), q(10010), r(10010);

signed main()
{
    cin >> x >> y >> a >> b >> c;
    p.resize(a);
    q.resize(b);
    r.resize(c);
    REP(i, p.size()){
        cin >> p[i];
    }
    REP(i, q.size()){
        cin >> q[i];
    }
    REP(i, r.size()){
        cin >> r[i];
    }

    sort(ALL(p), [](int s, int t){ return s > t; });
    sort(ALL(q), [](int s, int t){ return s > t; });
    sort(ALL(r), [](int s, int t){ return s > t; });

    p.resize(x);
    q.resize(y);

    r.insert(r.end(),ALL(p));
    r.insert(r.end(),ALL(q));

    sort(ALL(r),  [](int s, int t){ return s > t; });

    int res = 0;
    REP(i, x+y){
        res += r[i];
    }

    cout << res << endl;
    return 0;
}