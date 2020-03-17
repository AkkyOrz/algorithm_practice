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

int m;
VP sign;

int n;
set<PII> s;

bool isOK(int dx, int dy){
    REP(i, m){
        if (s.find(make_pair(sign[i].first + dx, sign[i].second + dy)) == s.end()) return false;
    }
    return true;
}


signed main()
{
    cin >> m;
    REP(i, m){
        PII a;
        cin >> a.first >> a.second;
        sign.push_back(a);
    }
    cin >> n;
    REP(i, n){
        PII a;
        cin >> a.first >> a.second;

        s.insert(a);
    }

    sort(ALL(sign));

    for (auto const &x : s){
        int dx = x.first - sign[0].first;
        int dy = x.second - sign[0].second; 
        if (isOK(dx, dy)) cout << dx << " " << dy << endl;
    }
    return 0;
}