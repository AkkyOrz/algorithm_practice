#include <bits/stdc++.h>
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

int a[30000];
int b[30000];
int n;
int k;

bool check(ll p){
    int cnt = 0;
    for (int i = 0; i < n; i++){
        cnt += upper_bound(b, b+n, (ll)(p/a[i])) - b;
        // なぜ lowerじゃなくupper_bound()じゃなきゃいけないのか？
        // なぜcnt<=kじゃなく cnt < k なのか？
    }
    return cnt < k;
}


int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    ll left = 0;
    ll right = INF;
    while (right - left > 1){
        ll mid = (left + right)/2;
        if (check(mid)){
            left = mid;
        } else {
            right = mid;
        }

    }
    cout << right << endl;
}


/*
2 3
2 3
3 5

> 6, 9, 10, 15


*/
