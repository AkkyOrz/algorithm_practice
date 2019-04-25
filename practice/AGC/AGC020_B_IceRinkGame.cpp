#include <bits/stdc++.h>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;

ll k;
vector<ll> v(10010);

ll upper(ll x, ll a){
    if (x % a == 0){
        return x;
    } else {
        return x - x % a + a;
    }
}

ll downer(ll x, ll a){
    return x - x % a;
}

int main(){
    cin >> k;
    v.resize(k);

    for (ll i = 0; i < k; i++){
        cin >> v[i];
    }
    
    ll left= 2;
    ll right = 2;
    bool flag = true;
    for (ll i = k-1; i >= 0; i--){
        if (upper(left, v[i]) <= right && left <= downer(right, v[i])){
            left = upper(left, v[i]);
            right = downer(right, v[i]) + (v[i] - 1);
        } else {
            flag = false;
            break;
        }
        // cout << left << " " << right << endl;
    }

    if (flag){
        cout << left << " " << right << endl;
    } else {
        cout << -1 << endl;
    }

}