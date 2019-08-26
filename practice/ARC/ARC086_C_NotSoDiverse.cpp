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
int k;

VI v;
map<int, int> mp;


signed main()
{
    cin >> n >> k;
    int temp;
    REP(i, n){
        cin >> temp;
        if (mp[temp] != 0){ 
            mp[temp]++; 
        }else {
            mp[temp] = 1;
        }
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++){
        v.push_back(itr-> second);
    }

    sort(ALL(v));

    int res = 0;
    int cnt = 0;

    if (v.size() > k){
        for (int i = 0; i < v.size() - k; i++){
            res += v[i];
        }
    }
    cout << res << endl;

    return 0;
}