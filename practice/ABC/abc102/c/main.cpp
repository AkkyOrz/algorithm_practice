#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
vector<int> a(200010);

int main(){
    cin >> n;
    a.resize(n);


    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        a[i] -= (i+1);
    }

    sort(a.begin(), a.end());

    ll res = 0;

    if (n % 2 == 1){        
        for (int i = 0; i < n; i++){
            res += abs(a[i] - a[n/2]);
        }
        cout << res << endl;
        return 0;
    } else {
        if (a[n/2 - 1] > 0){
            for (int i = 0; i < n; i++){
                res += abs(a[i] - a[n/2 - 1]);
            }
            cout << res << endl;
            return 0;
        }
        if (a[n/2] < 0){
            for (int i = 0; i < n; i++){
                res += abs(a[i] - a[n/2]);
            }
            cout << res << endl;
            return 0;
        }
        for (int i = 0; i < n; i++){
            res += abs(a[i]);
        }
        cout << res << endl;
        return 0;
    }
    
}