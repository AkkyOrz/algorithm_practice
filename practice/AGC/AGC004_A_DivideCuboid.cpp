#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll a[3];
int main(){
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+2);
    if (a[0] %2==0 || a[1] % 2==0 || a[2] % 2==0) {
                cout << 0 << endl;
    } else {

        cout << min(a[0]*a[1],min(a[1]*a[2],a[0]*a[2])) << endl;
    }
}
