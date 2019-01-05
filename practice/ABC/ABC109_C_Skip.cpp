#include <bits/stdc++.h>

#include <iostream>
#include <limits>
#include <numeric>
#include <type_traits>
using namespace std;

typedef long long ll;


int N;
int X;
int x[100000];

int gcd(int a, int b){
    if(a < b) gcd(b, a);
    int r;
    while ((r=a%b)) {
        a = b;
        b = r;
    }
    return b;
}


int main(){
    cin >> N >> X;
    for (int i = 0; i < N; i++){
        cin >> x[i];
    }
    for (int i = 0; i < N; i++){
        if (x[i] - X > 0){
            x[i] = x[i] - X;
        } else {
            x[i] = X - x[i];
        }
    }
    int g = x[0];
    for (int i = 1; i < N; i++){
        g = gcd(g, x[i]);
    }
    cout << g << endl;
}
