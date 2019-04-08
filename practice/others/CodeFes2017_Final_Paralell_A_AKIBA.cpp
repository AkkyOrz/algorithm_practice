#include <bits/stdc++.h>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;

string s;
vector<string> v;

int main(){
    cin >> s;

    for (int i = 0; i < (1<<4); i++){
        string a;
        if ((i << 0) & 1){
            a += 'A';
        }
        a += "KIH";
        if ((i >> 1) & 1){
            a += "A";
        } 
        a += "B";
        if ((i >> 2) & 1){
            a += "A";
        }
        a+= "R";
        if ((i >> 3) & 1){
            a += "A";
        }
        v.push_back(a);
    } 

    bool flag = false;
    for (int i = 0; i < v.size(); i++){
        if (v[i] == s) flag = true;
        //cout << v[i] << endl; 
    }

    if (flag){
        cout <<"YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}