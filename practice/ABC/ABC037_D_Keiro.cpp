#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int dp[1000][1000];
int a[1000][1000];

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
const int MOD = 1e9 + 7;

int h, w;

int dfs(int x, int y){
    if (dp[y][x] != 0){
        return dp[y][x];
    }

    bool check = true;
    ll res = 0;
    for (int temp = 0; temp < 4; temp++){
        int nx = x + dx[temp];
        int ny = y + dy[temp];
        if (0 <= nx && nx < w && 0 <= ny && ny < h){
            if (a[ny][nx] > a[y][x]){
                res += dfs(nx, ny);
                res %= MOD;
                check = false;
            }
        }
    }

    res++;

    dp[y][x] = res;

    return res;
}

int main(){
    cin >> h >> w;
    
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> a[i][j];
        }
    }

    int ans = 0;
    for (int y = 0; y < h; y++){
        for (int x = 0; x < w; x++){
            ans += dfs(x, y);
            ans %= MOD;
        }
    }

    cout << ans << endl;
    
}