#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int h, w;

int a[501][501];
int ans[1000000][5];

int main(){
    cin >> h >> w;
    for (int y = 1; y <= h; y++){
        for(int x = 1; x <= w; x++){
            cin >> a[x][y];
        }
    }

    int cnt_n = 0;
    int i = 0;
    for (int y = h; y >=1; y--){
        a[w-1][y] += a[w][y];
        ans[i][0] = y;
        ans[i][1] = w;
        ans[i][2] = y;
        ans[i][3] = w-1;
        ans[i][4] = a[w][y]; // 回数
        cnt_n += a[w][y];
        a[w][y] = 0;
        i++;
        for(int x = w-1; x >=1; x--){
            a[x][y] += a[x+1][y];
            ans[i][0] = y;
            ans[i][1] = x+1;
            ans[i][2] = y;
            ans[i][3] = x;
            ans[i][4] = a[x+1][y]; // 回数
            cnt_n += a[x+1][y];
            a[x+1][y] = 0;
            i++;
        }
        if (y == 1) break;
        a[1][y-1] += a[1][y];
        ans[i][0] = y;
        ans[i][1] = 1;
        ans[i][2] = y-1;
        ans[i][3] = 1;
        ans[i][4] = a[1][y]; // 回数
        cnt_n += a[1][y];
        a[1][y] = 0;
        i++;
    }
    int sum = a[1][1];
    cout << sum  << endl;

    bool check = true;
    for (int y = 1; y <= h; y++){
        if (a[1][y] >= 2*w){
            for (int x = 1; x < w; x++){
                ans[i][0] = y;
                ans[i][1] = x;
                ans[i][2] = y;
                ans[i][3] = x+1;
                ans[i][4] = 2*w - 2*x; // 回数
                cnt_n += 2*w - 2*x;
                a[x+1][y] = 2*w - 2*x;
                a[x][y] -= 2*w - 2*x;
                i++;
            }
        } else {
            for (int x = 1; x < w; x++){
                if (a[x][y] < 2) {
                    check = false;
                    break;
                }
                ans[i][0] = y;
                ans[i][1] = x;
                ans[i][2] = y;
                ans[i][3] = x+1;
                ans[i][4] = a[x][y] - 2; // 回数
                cnt_n += a[x][y] -2;
                a[x+1][y] = a[x][y] - 2;
                a[x][y] = 2;
                i++;

            }
        }
        if (y == h) break;
        ans[i][0] = y;
        ans[i][1] = 1;
        ans[i][2] = y+1;
        ans[i][3] = 1;
        ans[i][4] = a[1][y] - 2; // 回数
        cnt_n += a[1][y]-2;
        a[1][y+1] = a[1][y] - 2;
        a[1][y] = 2;
    }



    cout << cnt_n << endl;
    for (int j = 0; j < i; j++){
        for (int cnt = 0; cnt < ans[j][4]; cnt++){
            cout << ans[j][0] << " "<<  ans[j][1] << " "<< ans[j][2] <<" "<<  ans[j][3] <<" "<<  ans[j][4] << endl;
        }
    }

    for (int y = 1; y <= h; y++){
        for(int x = 1; x <= w-1; x++){
            cout << a[x][y];
        }
        cout << a[w][y] << endl;
    }

}
