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
string s;
set<string> dict; 

VI left_num(30001), right_num(30001);

signed main()
{
    cin >> n;
    cin >> s;
    left_num.resize(n);
    right_num.resize(n);

    // 中央より右側と左側でどの数字が存在するのかを管理するbitを初期化する．
    for (int i = 1; i < n - 1; i++ ){
        left_num[i] = left_num[i-1] | (1 << (s[i-1] - '0'));
        // cout << bitset<8>(left_num[i]) << endl;
    }
    
    for (int i = n-2; i > 0; i--){
        right_num[i] = right_num[i+1] | (1 << (s[i+1] - '0'));
        // cout << bitset<8>(right_num[i]) << endl;
    }

    for (int i = 1; i < n-1; i++){
        for (int digit_l = 0; digit_l < 10; digit_l++){
            if (!(left_num[i] & (1<<digit_l))) continue; 
            for (int digit_r = 0; digit_r < 10; digit_r++){
                if (!(right_num[i] & (1<<digit_r))) continue; 
                auto r = dict.insert(to_string(digit_l) + s[i] + to_string(digit_r));
                // cout << to_string(digit_l) + s[i] + to_string(digit_r) << "; \t" << r.second << endl;
            }
        }
    }

    // for(auto itr = dict.begin(); itr != dict.end(); ++itr) {
    //     cout << *itr << endl;      // イテレータの指す先のデータを表示
    // }
    cout << dict.size() << endl;

    return 0;
}