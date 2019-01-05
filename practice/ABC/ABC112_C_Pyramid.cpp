#include <bits/stdc++.h>

using namespace std;

int n;
int x[101], y[101], h[101];

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
    }
    for (int i = 0; i <= 100; i++){
        for (int j = 0; j <= 100; j++){
            // (i,j)に頂点があると考える。
            int H = abs(x[0]-i) + abs(y[0]-j)+h[0];
            bool check = true;
            for (int k = 0; k < n; k++){
                int H_next = abs(x[k]-i) + abs(y[k]-j) + h[k];
                if (H != H_next) {
                    check = false;
                    break;
                }
            }
            if (check){
                cout << i <<" " << j << " " << H << endl;
                
            }
        }
    }
}
