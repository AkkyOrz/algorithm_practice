#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
ll k;

int main(){
    cin >> s;
    cin >> k;
    bool check = false;
    int index = -1;

    for (int i = 0; i < s.size(); i++){
        if (s[i] != '1' &&  i < k){
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << 1 << endl;
}