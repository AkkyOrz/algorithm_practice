#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    bool res = false;
    for (int c = 1; c <= 3; c++){
        if (a * b * c % 2 == 1) res = true;
    }
    if (res) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
