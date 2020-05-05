#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;


// 3,5,7のみからなる数値を生成し、その数が753数かをチェックするbool関数を作成して考えればできそう...?

ll n;

bool check(ll x){
    string s = to_string(x);

    return (s.find('3') != string::npos && 
            s.find('5') != string::npos && 
            s.find('7') != string::npos);
}

int dfs(ll x){
    if (x > n){
        return 0;
    }

    ll res;
    if (check(x)){
        res = 1;
    } else {
        res = 0;
    }

    res += dfs(x*10 + 3);
    res += dfs(x*10 + 5);
    res += dfs(x*10 + 7);

    return res;
}

int main(){
    cin >> n;

    cout << dfs(0) << endl;
}