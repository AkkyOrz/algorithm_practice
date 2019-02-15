#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    int a, b, c;

    cin >>  a >>b >> c;
    if (a == b && b == c){
        if (a % 2 == 0){
            cout << -1 << endl;
            return 0;
        } else {
            cout << 0 << endl;
            return 0;
        }
    }

    if (a%2 || b % 2 || c % 2){
        cout << 0 << endl;
        return 0;
    }

    int cnt = 0;

    while (!(a % 2 || b % 2 || c % 2)){
        int a_s = a / 2;
        int b_s = b / 2;
        int c_s = c / 2;
        a = b_s + c_s;
        b = c_s + a_s;
        c = a_s + c_s;
        cnt++;
    }
    cout << cnt << endl;
}