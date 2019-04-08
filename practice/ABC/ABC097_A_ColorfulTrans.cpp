#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a, b, c, d;

int main(){
    cin >> a >> b >> c >> d;

    if (abs(b - a) <= d && abs(c - b) <= d){
        cout << "Yes" << endl;
    } else if (abs(c - a) <= d){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}