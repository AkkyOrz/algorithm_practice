#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;
ll x[1010], y[1010], h[1010];

vector<ll> v(3);

/*
4
2 3 5
2 1 5
1 2 5
3 2 5

>> 0 0 5
*/

int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> x[i] >> y[i] >> h[i];
        // もしh[i] が 0 だった場合、他の式にエラーが起こることを考えられなかった。
        // 有効なものを利用したい。
        if (h[i] > 0){
            v[0] = x[i];
            v[1] = y[i];
            v[2] = h[i];
        }
    }
    for (int i = 0; i <= 100; i++){
        for (int j = 0; j <= 100; j++){
            // (i,j)に頂点があると考える。

            ll H = abs(v[0] - i) + abs(v[1] - j) + v[2];
            H = max(H, 0LL);
                    
            bool check = true;
            for (int k = 0; k < n; k++){
                ll H_next = max(H - abs(x[k]-i) - abs(y[k]-j), 0LL);
                if (H_next != h[k]){
                    check = false;
                }
            }
            if (check){
                cout << i <<" " << j << " " << H << endl;
            }
        }
    }
}
