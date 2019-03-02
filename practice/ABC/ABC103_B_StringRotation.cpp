#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> VI;

string s, t;

int cycle(int x){
    if (s.size() <= x){
        return x - s.size();
    } else {
        return x;
    }
}

int main(){
    cin >> s;
    cin >> t;

    for (int i = 0; i < s.size(); i++){
        bool flag = false;
        for (int j = 0; j < s.size(); j++){
            if (s[cycle(i+j)] != t[j]){
                flag = true;
            }
        }
        if (!flag){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}
