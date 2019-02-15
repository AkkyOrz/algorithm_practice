#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;

map<char, char> m;

int main(){
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++){
        map<char, char>:: iterator  ite;
        ite = m.find(s[i]);
        if (ite == m.end()){
            m.insert(make_pair(s[i], t[i]));
            m.insert(make_pair(t[i], s[i]));
            
        } else if (ite -> second != t[i]){  // もしすでにその文字列が存在
            cout << s[i] << i << t[i] << endl;
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}