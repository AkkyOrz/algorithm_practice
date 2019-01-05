#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 998244353;

int a, b;

int main(){
    cin >> a >> b;
    if (a > 0) {
        cout << "Positive" << endl;
    } else if (a == 0){
        cout << "Zero" << endl;
    } else if (b >= 0) {
        cout << "Zero" << endl;
    } else {
        if ((b - a)%2 == 0){
            cout << "Positive" <<endl;
        } else {
            cout << "Negative" << endl;
        }
    }
}
