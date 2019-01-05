#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;


char land[10][11];
bool reached[10][10];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y){
    if (x < 0 || x >= 10 || y < 0 || y >= 10 || land[x][y] == 'x'){
        return ;
    }
    if (reached[x][y]) {
        return;
    }
    reached[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        dfs(nx, ny);
    }
}

int main(){
    for (int i = 0; i < 10; i++){
        cin >> land[i];
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (land[i][j] == 'x'){
                land[i][j] = 'o';
                for (int x = 0; x  < 10; x++){
                    for (int y = 0; y < 10; y++){
                        reached[x][y] = false;
                        if (land[x][y] == 'x'){
                            reached[x][y] = true;
                        }
                    }
                }
                int island = 0;
                for (int x = 0; x < 10; x++){
                    for (int y = 0; y < 10; y++){
                        if (reached[x][y]) continue;
                        dfs(x, y);
                        island++;
                    }
                }
                if (island == 1){
                    cout << "YES" << endl;
                    return 0;
                }
                land[i][j] = 'x';
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
