#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;

int main(){
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int sum = 0;

    for (int i = 0; i < n-1; i++){
        sum += v[i];
    }

    sum += v[n-1] / 2;

    cout << sum << endl;
}