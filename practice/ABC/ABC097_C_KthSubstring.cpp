#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
int k;

vector<string> v;

int main(){
    cin >> s;
    cin >> k;

    for (int i = 0; i < s.size(); i++){
        for (int j = 1; j <= k; j++){
            if (i+j > s.size()) continue;
            //cout << s.substr(i, j) << endl;
            v.push_back(s.substr(i, j));
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());  //unique関数は初めて知った。

    cout << v[k-1] << endl;
}