#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
int a[100010];

int gcd(int a, int b){
    if (a % b == 0){
        return b;
    } else{
        return gcd(b, a%b);
    }
}


//gcd()を計算。
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int GCD = gcd(a[0], a[1]);

    for (int i = 1; i < n; i++){
        GCD = gcd(GCD, a[i]);
    }
    cout << GCD << endl;
}