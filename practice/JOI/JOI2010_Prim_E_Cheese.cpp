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

int h, w, n;
int s_x, s_y;
int g_x, g_y;
int dist[1000][1000];
string maze[1000];
bool reached[1000][1000];
queue<int> here_x, here_y;

void init(int nx, int ny){
    int now_dist = dist[ny][nx];
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            reached[i][j] = false;
            dist[i][j] = 0;
        }
    }
    reached[ny][nx] = true;
    dist[ny][nx] = now_dist;

    //here_x,yを初期化
    while(!here_x.empty()){
        here_x.pop();here_y.pop();
    }

    here_x.push(nx);
    here_y.push(ny);
}

void bfs(int sx, int sy){
    here_x.push(sx);
    here_y.push(sy);
    reached[sy][sx] = true;
    int revel = 1;

    while(here_x.size() > 0){
        int x = here_x.front(); here_x.pop();
        int y = here_y.front(); here_y.pop();

        for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (!(0 <= nx && nx < w && 0 <= ny && ny < h) || maze[ny][nx] == 'X') continue;
            if (reached[ny][nx]) continue;

            reached[ny][nx] = true;
            dist[ny][nx] = dist[y][x] + 1;
            here_x.push(nx);
            here_y.push(ny);
            if (maze[ny][nx] == to_string(revel)[0]){
                init(nx, ny);
                revel++;
                if (revel == n+1){
                    cout << dist[ny][nx] << endl;
                    return;
                }
                break;
            }

        }
    }
}


int main(){
    cin >> h >> w >> n;
    int sx, sy;
    for (int i = 0; i < h; i++){
        cin >> maze[i];
        if (maze[i].find('S') != std::string::npos){
            sx = maze[i].find('S');
            sy = i;
        }
    }

    bfs(sx, sy);

}
