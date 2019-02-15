#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;

int main(){
    cin >> s;

    ll res = 0;
    res += 2 * (s.size()-1);
    for (int i = 1; i < s.size()-1; i++){
        if (s[i] == 'U'){
            res += (s.size()-i-1) * 1;
            res += i * 2;
        } else {
            res += (s.size()-i-1) * 2;
            res += i * 1;
        }
    }





    /*
    for (int i = 0 ; i < s.size()-1; i++){
        for (int j = i+1; j < s.size(); j++){
            if (s[i] == 'U'){
                res += 1;
            } else {
                res += 2;
            }

            if (s[j] == 'D'){
                res += 1;
            } else {
                res += 2;
            }
        }
    }
    */
    cout << res << endl;
}
