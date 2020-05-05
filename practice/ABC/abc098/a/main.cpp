#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a, b;

int x[3];

int main(){
    cin >> a >> b;

    x[0] = a+b;
    x[1] = a-b;
    x[2] = a*b;

    sort(x, x+3);

    cout << x[2] << endl;
}