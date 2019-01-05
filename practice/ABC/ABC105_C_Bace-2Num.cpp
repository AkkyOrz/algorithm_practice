#include <iostream>
#include <cmath>
#include <bitset>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    string s = "";
    int rest;
    while (true){
        if (n < 0){
            int n_prev = n;
            rest = abs(n) % 2;
            s += '0' + rest;
            if (rest == 1){
                n /= 2;
                if (n != 0){
                    n -= 1;
                } else if (rest == 1){
                    s += '1';
                }
            } else {
                n /= 2;
            }
            n *= -1;
            /*
            if (n * -2 + rest != n_prev){
                cout << n << "   " <<  rest << endl;
            }
            */
        } else if (n > 0){
            int n_prev = n;
            rest = abs(n) % 2;
            s += '0' + rest;
            n /= 2;
            n *= -1;
            /*
            if (n * -2 + rest != n_prev){
                cout << n << "   " <<  rest << endl;
            }
            */
        } else {
            break;
        }
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}
