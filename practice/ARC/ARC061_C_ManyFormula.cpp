#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){
    string s;
    ll res = 0;

    cin >> s;

    for (ll i = 0; i < (1LL << s.size()-1); i++){
        ll sum = 0;
        string t = s;
        int left = 0;
        //cout << bitset<4>(i) << "\t:" ;
        for (int j = 0; j < s.size()-1; j++){
            if (i & (1<<j)){
                //cout << t.substr(0, j-left+1) << ", ";
                sum += stoll(t.substr(0, j - left+1));
                t = t.substr(j-left+1, t.size()-j+left);
                //cout << t <<  ", ";
                left = j+1;
            }
        }
        //cout << t << endl;
        sum += stoll(t);
        res += sum;
    }
    cout << res << endl;
}