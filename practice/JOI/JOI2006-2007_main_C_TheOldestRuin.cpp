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
VP p;
bool bitmap[5001][5001];

/*
10
9 4
4 3
1 1
4 2
2 4
5 8
4 0
5 3
0 5
5 2
*/

// bool check(int mid, PII key){
//     if (p[mid].first == key.first) {
//         return key.second <= p[mid].second ;
//     }
//     return  key.first < p[mid].first ;
// }

// int binary_search(PII key){
//     int left = -1;
//     int right = (int)p.size();

//     while (right - left > 1){
//         int mid = left + (right - left)/2;
//         if (check(mid, key)) right = mid;
//         else left = mid;
//     }

//     return right;
// }

bool isOK(int i, int j){
    auto p1 = make_pair(p[i].first, p[i].second);
    auto p2 = make_pair(p[j].first, p[j].second);
    auto p3 = make_pair(p[j].first + p[j].second - p[i].second, 
                        p[j].second - p[j].first + p[i].first);
    auto p4 = make_pair(p[i].first + p[j].second - p[i].second, 
                        p[i].second - p[j].first + p[i].first);

    // auto v3 = *lower_bound(ALL(p), p3);
    // auto v4 = *lower_bound(ALL(p), p4);
    // int i3 = binary_search(p3);
    // int i4 = binary_search(p4);
    // 本来はbinserchをしてupperとlowerの差が0であることによってtrue,falseを返すべきだった
    // auto v3 = make_pair(p[i4]);
    // auto v4 = make_pair(p[i4]);

    // cout << "i:" << i << "\t" << "j:" << j << endl;
    // DEBUGP(p1);
    // DEBUGP(p2);
    // // DEBUGP(p[i3]);
    // DEBUGP(p3);
    // // DEBUGP(p[i4]);
    // DEBUGP(p4);
    // cout << endl;
    
    if (!(0 <= p3.first && p3.first <=5000 && 0 <= p3.second && p3.second <= 5000)) return false;
    if (!(0 <= p4.first && p4.first <=5000 && 0 <= p4.second && p4.second <= 5000)) return false;
    return bitmap[p3.first][p3.second] && bitmap[p4.first][p4.second];
}

int calc(int i, int j){
    return pow(p[j].first - p[i].first, 2) + pow(p[j].second - p[i].second, 2);
}

signed main()
{
    cin >> n;

    REP(i, n){
        PII a;
        cin >> a.first >> a.second;
        bitmap[a.first][a.second] = true;
        p.push_back(a);
    }
    
    p.resize(n);

    sort(ALL(p), [](pair<int, int> s, pair<int, int> t) {{
        if (s.first != t.first){
            return s.first <= t.first;
        } else {
            s.second < t.second;
        }}
    });

    // REP(i, p.size()){
    //     cout << p[i].first << p[i].second << endl;
    // }
    // cout << endl;

    int res = 0;
    int cnt = 0;
    REP(i, n){
        FOR(j, i+1, n){
            if (isOK(i, j)){
                res = max(res, calc(i, j));
                // cout << i << ": " << j << endl;
                // cnt++;
            }
        }
    }
    // DEBUG(cnt);
    cout << res << endl;


    return 0;
}