#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n; 
int h[100];

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    int res = h[0];

    for (int i = 1; i < n; i++){
        if (h[i] > h[i-1] > 0){
            res += h[i] - h[i-1];
        }
    }
    cout << res << endl;
}
