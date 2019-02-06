#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
int a[10];

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    /*
    for (int i = 0; i < n; i++){
        cout << a[i] << ",";
    }
*/
    int sum = 0;
    for (int i = 0; i < n-1; i++){
        sum += a[i];
    }
    
    //cout << sum << "," << a[n-1] << endl;
    if (sum > a[n-1]){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}