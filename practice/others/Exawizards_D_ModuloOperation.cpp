#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;

ll n , x;

vector<int > v(1000);


int main(){
    cin >> n >> x;

    for (int i = 0 ;i < n; i++){
        cin >> v[i];
    }

    v.resize(n);

    sort(v.begin(),v.end());

    ll sum = 0;

    for (int i = n-1; i > n; i++){
        sum += (n * (x%v[i]) 
    }
}