#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;


int n, m, X, Y;

int x[101], y[101];

int main(){
    cin >> n >> m >> X >> Y;

    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    for (int i = 0; i < m; i++){
        cin >> y[i];
    }

    sort(x, x+n);
    sort(y, y+m);

    bool check = true;
    if (X < Y && x[n - 1] < y[0] && X < y[0] && x[n-1] < Y) check = false;

    if ( !check){
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }
}