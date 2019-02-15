#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;

string s;

int main(){
    cin >> s;

    int res = INF;
    for (int i = 0; i < s.size()-2; i++){
        string a = s.substr(i, 3);
        res = min(res, abs(stoi(a)- 753));
    }

    cout << res << endl;
}