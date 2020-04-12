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

vector<string> s;
int k;
signed main()
{
    cin >> k;

    vector<string> tmp1;
    FOR(i, 1, 10){
        tmp1.push_back(to_string(i));
        s.push_back(to_string(i));
    }

    while(s.size() <= k){
        vector<string> tmp2;
        REP(i, tmp1.size()){
            string t = tmp1[i];
            REP(i, 3){
                int tail = (int)(t.back() - '0') + i - 1;
                if (!(0 <= tail && tail <= 9)) continue;
                tmp2.push_back(t + to_string(tail));
            }
        }
        s.insert(s.end(), ALL(tmp2));
        swap(tmp1, tmp2);
    }

    // REP(i, s.size()){
    //     cout << s[i] << endl;
    // }
    cout << s[k-1] << endl;
    return 0;
}