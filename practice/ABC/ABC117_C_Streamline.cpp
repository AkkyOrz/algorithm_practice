#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m;
int x[100010];
int d[100010];

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> x[i];
    }

    sort(x, x+m);

    for (int i = 0; i < m-1; i++){
        d[i] = x[i+1] - x[i];
    }

    sort(d, d+m-1);

    
    int sum = 0;
    for (int i = 0; i < m-n; i++){
        sum += d[i];
    }

    cout << sum << endl;

}