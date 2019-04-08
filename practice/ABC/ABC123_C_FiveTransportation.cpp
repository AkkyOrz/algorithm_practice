#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
vector<ll> v(5);

int main(){
    cin >> n;

    for (int i = 0; i < 5; i++ ){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    if (n % v[0] != 0){
        cout << (ll)(n / v[0]) + 5LL<< endl;
    } else {
        cout << (ll)(n/v[0]) + 4LL << endl;
    }
}