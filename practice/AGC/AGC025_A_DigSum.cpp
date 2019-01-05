#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;

int dig_sum(int a){
    int sum = 0;
    while (a > 0){
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main(){
    cin >> n;
    int min_s = 123456789;
    for (int i = 1; i <= n/2; i++){
        int a = i;
        int b = n-i;
        min_s = min(min_s, dig_sum(a)+dig_sum(b));
    }
    cout << min_s << endl;
}
