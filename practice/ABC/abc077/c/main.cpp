#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    long long sum = 0;
    long long j, k;
    for (int i = 0; i < n; i++){
        j = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        k = n-(upper_bound(c.begin(), c.end(), b[i]) - c.begin()) ;
        sum += j*k;
    }
    cout << sum << endl;
}
