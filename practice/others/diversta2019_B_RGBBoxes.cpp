#include <bits/stdc++.h>
using namespace std;
#define ALL(x) (x).begin(), (x).end()
#define DEBUG(x) cerr << #x << ": " << x << '\n'
#define int long long

typedef long long ll;

int r, g, b, n;

signed main(){
    cin >> r >> g >> b >> n;

    int cnt = 0;

    for (int x = 0; x <= n/r+1; x++){
        for (int y = 0; y <= n/g + 1; y++){
            if ((n - (r * x + g * y)) % b == 0 && ((n - (r * x + g * y)) / b) >= 0) cnt++;
        }
    }

    cout << cnt << endl;
}