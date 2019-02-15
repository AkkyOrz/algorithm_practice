#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, a, b;

int main(){
    cin >> n >> a >> b;

    if (n < 1){
        cout << 0 << endl;
    } else if (n == 1){
        if (a != b){
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    } else {
        if (a > b){
            cout << 0 << endl;
        } else {
            // 分割数の話かと思ったけど、合計になりうる数のみをカウントすればよい
            cout << (b-a)*(n-2) + 1 << endl;
        }
    }
}