#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
int n;


int main(){
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<ll> sum(n);
    sum[0] = a[0];
    for (int i = 1; i < n; i++){
        sum[i] = sum[i-1] + a[i];
    }
    for (int i = 0; i < n-1; i ++){
        if (sum[i]*2 < a[i+1]){
            cout << n-i-1 << endl;
            return 0;
        }
    }
    cout << n << endl;

}