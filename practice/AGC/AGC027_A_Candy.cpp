#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, x;


int main(){
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int cnt = 0;
    for (int i = 0; i < n-1; i++){
        if (a[i] <= x){
            x -= a[i];
            cnt++;
        } else {
            break;
        }
    }
    if (x == a[n-1]){
        cnt++;
    }

    cout << cnt << endl;
}
