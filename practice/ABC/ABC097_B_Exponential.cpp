#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int x;

int main(){
    cin >> x;
    int maxi = -1;
    if (x  <= 3){
        cout << 1 << endl;
        return 0;
    }
    
    for (int b = 2; b < x; b++){
        for (int p = 2; pow(b,p) <= x; p++){
            maxi = max(maxi, (int)pow(b,p));
        }
    }

    cout << maxi << endl;
}