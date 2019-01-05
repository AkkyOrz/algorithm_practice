#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;

ll x[100000];
ll index_zero;
ll n, k;

ll cnt(ll l){
    ll a = 0, b = 0;
    ll r = l + k - 1;
    if (x[r] > 0)a = x[r];
    else a = 0;
    if (x[l] < 0) b = -x[l];
    else b = 0;
    if (a > b){
        return a + 2*b;
    } else {
        return 2*a + b;
    }
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }

    index_zero = lower_bound(x, x+n, 0) - x - 1;
    //cout << index_zero-1 << endl;
    ll l = 0, r = 0;
    for (; l + k <= index_zero; l++);
    long long res = INF;
    for (ll i = l; i + k <= n; i++){
        //cout << "cnt(" << i << ") = " << cnt(i) << endl;
        res = min(res, cnt(i));
    }
    cout << res << endl;
}
