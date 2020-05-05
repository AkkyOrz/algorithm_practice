#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    string s;

    cin >> s;

    int year = stoi(s.substr(0,4));
    int month = stoi(s.substr(5,2));

    bool flag = true;
    if (year <= 2018){
        flag = false;
    } else if (year == 2019 && month <= 4){
        flag = false;
    }

    if (!flag) {
        cout << "Heisei" << endl;
    } else {
        cout << "TBD" << endl;
    }
    
}