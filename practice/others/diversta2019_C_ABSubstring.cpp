#include <bits/stdc++.h>
using namespace std;
#define ALL(x) (x).begin(), (x).end()
#define DEBUG(x) cerr << #x << ": " << x << '\n'
#define int long long

typedef long long ll;

vector<string> s(1010);
int n;

signed main(){
    cin >> n;
    s.resize(n);
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    int cnt = 0;
    int cnt_a = 0;
    int cnt_b = 0;
    int cnt_ba = 0;
    for (int i = 0; i < n; i++){
        if (s[i].front() == 'B') cnt_b++;
        if (s[i].back() == 'A') cnt_a++;
        if (s[i].front() == 'B' && s[i].back() == 'A') cnt_ba++;
        for (int j = 1; j < s[i].size(); j++){
            if (s[i][j-1] == 'A' && s[i][j] == 'B') {
                cnt++;
            }
        }
    }

    if (cnt_ba == cnt_a){
        if (cnt_ba == cnt_b){
            if (cnt_ba != 0){
                cnt += cnt_ba - 1;
            }
        } else {
            cnt += cnt_ba;
        }
    } else {
        if (cnt_ba == cnt_b){
            cnt += cnt_ba;
        } else {
            cnt += min(cnt_a, cnt_b);
        }
    }
    cout << cnt << endl;
}