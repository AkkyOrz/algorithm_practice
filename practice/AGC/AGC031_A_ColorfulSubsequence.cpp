#include <bits/stdc++.h>
using namespace std;


const int mod = 1e9+7;
typedef long long ll;

int n;
string s;

int cnt[26] = {0};

int main(){
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++){
        cnt[s[i] - 'a']++;
    }

    ll res = 1;
    for (int i = 0; i < 26; i++){
        if (cnt[i] > 0){
            res *= (cnt[i] + 1);
            res %= mod;
        }
    }
    cout << res - 1 << endl;
}