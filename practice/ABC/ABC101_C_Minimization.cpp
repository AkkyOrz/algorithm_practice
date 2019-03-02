#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int n, k;
vector<int> v(100010);

int main(){
    cin >> n >> k;
    v.resize(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << (n-1 + k - 1 - 1)/(k-1) << endl;
    
}