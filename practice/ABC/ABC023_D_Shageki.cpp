#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#define MOD 1000000007
#define INF (1ll<<60)
#define MAX 100005
typedef long long ll;
using namespace std;

int n;
ll h[MAX], s[MAX];
ll cnt[MAX];

bool check(ll x){
    for (int i = 0; i < n; i++){
        if (x < h[i]) return false;
        cnt[i] = (x - h[i]) / s[i];
    }
    sort(cnt, cnt+n);
    for (int i = 0; i < n; i++){
        if (cnt[i] < i) return false;
    }
    return true;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> h[i] >> s[i];
    }

    ll l = 0, r = INF;
    while(r - l > 1){
        ll m = (r + l)/2;
        if (check(m)) r = m;
        else l = m;
    }
    cout << r << endl;
    return 0;
}
