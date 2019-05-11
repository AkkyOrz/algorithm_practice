#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;

int main(){
    cin >> s;

    int cnt = 700;
    if (s[0] == 'o') cnt += 100;
    if (s[1] == 'o') cnt += 100;
    if (s[2] == 'o') cnt += 100;

    cout << cnt << endl;
}