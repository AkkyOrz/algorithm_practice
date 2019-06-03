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


int n, m;
VI a(10010);
VP p(10010);

signed main()
{
    cin >> n >> m;
    a.resize(n);

    REP(i, n){
        cin >> a[i];
    }
    sort(ALL(a));

    p.resize(m);
    REP(i, m){
        cin >> p[i].first >> p[i].second;
    }

    sort(ALL(p),[](PII a, PII b) { return a.second > b.second; });
    
    int index = 0;

    // 2分探索で、p[i].second以下になるものを探す。
    // だんだんheadを右にずらす

    /*
    REP(i, m){
        REP(j, p[i].first){
            if (a[index] < p[i].second) {
                a[index] = p[i].second;
                //DEBUG(a[index]);
                index++;
                if (index >= n) break;
            }
        }
        if (index >= n)break;
    }*/

    int sum = 0;

    REP(i, m){
        int x = lower_bound(a.begin()+index, a.end(), p[i].second) - (a.begin()+index);
        //DEBUG(x);
        //DEBUG(index);
        if (x < p[i].first){// もうこれ以上変化しない
            sum += x * p[i].second;
            index += x;
            break;
        } else {
            sum += p[i].second * p[i].first;
            index += p[i].first;
        }
    }

    FOR(i, index, n){
        sum += a[i];  
    }

    cout << sum << endl;
}