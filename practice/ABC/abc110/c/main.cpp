#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;

int m[26], r[26];

int main(){
    for (int i = 0; i < 26; i++){
        m[i] = -1;
        r[i] = -1;
    } 

    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++){
        int s_i = s[i] - 'a';
        int t_i = t[i] - 'a';
        if (m[s_i] != -1 || r[t_i] != -1){
            if (m[s_i] != t_i || r[t_i] != s_i){
                cout << "No" << endl;
                return 0;
            }
        } else {
            m[s_i] = t_i;
            r[t_i] = s_i;
        }
    }

    cout << "Yes" << endl;
}