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
    while (n != 0){
        if (n % 2 != 0){
            s = '1' + s;
            n--;
        } else {
            s = '0' + s;
        }
        n /= -2;
    }
    if (s == ""){
        s = "0";
    }
   
    cout << s << endl;
}