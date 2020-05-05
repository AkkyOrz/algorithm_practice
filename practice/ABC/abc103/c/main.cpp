#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>
#include <cmath>

using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return a * b / gcd(a,b);
}

int main(){
    int N;
    int a[3000];
    int max = 0;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    int f = 0;
    for (int j = 0; j < N; j++){
        f += a[j] - 1;
    }
    cout << f << endl;
}
