#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <queue>

#define MOD 1000000007
#define INF (1ll<<60)
typedef long long ll;
using namespace std;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int r, c;
int s_x, s_y;
int g_x, g_y;
int dist[50][50];
string maze[50];
bool reached[50][50];
queue<int> now_x, now_y;

void bfs(int sx, int sy, int gx, int gy){
    now_x.push(sx);
    now_y.push(sy);
    dist[sx][sy] = 0;
    reached[sx][sy] = true;

    while(now_x.size() > 0){
        int x = now_x.front();
        now_x.pop();
        int y = now_y.front();
        now_y.pop();

        for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (!(nx >= 0 && nx < r && ny >= 0 && ny < c) || maze[nx][ny] == '#') continue;
            if (reached[nx][ny]) continue;
            reached[nx][ny] = true;
            now_x.push(nx);
            now_y.push(ny);
            dist[nx][ny] = dist[x][y] + 1;

        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    cout << dist[gy][gx] << endl;
}

int main(){
    cin >> r >> c >> s_y >> s_x >> g_y >> g_x;
    for (int i = 0; i < r; i++){
        cin >> maze[i];
    }
    s_x--;
    s_y--;
    g_x--;
    g_y--;

    bfs(s_x, s_y, g_x, g_y);
}
