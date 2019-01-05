#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <queue>

#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;

int n, m;
int x[100000];


bool check(ll k){
    ll here = -1;
    ll l, r;
    for (int i = 0; i < m; i++){
        l = max(x[i] - here - 1,(ll)0);
        if(k - l < 0) return false;
        r = max((k-l)/2,k-2*l);
        here = x[i] + r;
    }
    return here >= n-1;
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> x[i];
        x[i]--;
    }

    ll left = -1;
    ll right = 2*n;

    while (right - left > 1){
        ll mid = (right + left) / 2;
        // cout << "mid " << mid << endl;
        if (check(mid)){
            right = mid;
        } else {
            left = mid;
        }

    }
    cout << right << endl;
}
