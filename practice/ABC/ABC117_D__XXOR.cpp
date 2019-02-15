#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, k;
ll a[100010];

int main(){
    cin >> n >> k;

    int max_bit = 0;
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        if (a[i] >= (1 << max_bit)){
            
        }
    }

    ll x = 0;
    for (int i = 0; i < n; i ++){
        x ^= a[i];
    }

    int max_index = 1
    while ((max_index << 1) <= k){
        max_index = (max_index << 1);
    }
    
   
    
    while (x <= k){
        int temp;
        temp = x + (1 << max_index);
        if (temp > k) break;
        x += (1 << max_index);
        max_index++;
    }

    cout << x << endl;

    while (x > k){
        if (x & (1 << max_index)){
            x -= (1 << max_index);
        }
        max_index--;
        if (max_index == 0) break;
    }
    cout << x << endl;

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += (x^a[i]);
    }

    
    cout << sum << endl;
}