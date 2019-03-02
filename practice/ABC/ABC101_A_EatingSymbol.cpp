#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    string s;
    cin >> s;

    int res = 0;
    for (int i = 0; i < 4; i++){
        if (s[i] == '+') res ++;
        if (s[i] == '-') res--;
    }

    cout << res << endl;
}