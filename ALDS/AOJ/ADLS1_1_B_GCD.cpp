#include <iostream>
using namespace std;

int gcd(int x, int y){
    if (x < y){
        int temp = x;
        x = y;
        y = temp;
    }
    if (x % y == 0){
        return y;
    } else {
        return gcd(y, x%y);
    }
}

int main(int argc, char const *argv[]) {
    int x,y;
    cin >> x >> y;
    cout << gcd(x,y) << endl;
    return 0;
}
