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


int h, w;
string maze[50];
int dist[50][50];
bool reached[50][50];
queue<int> here_x,here_y;

int bfs(int sx, int sy){
    here_x.push(sx);
    here_y.push(sy);
    reached[0][0] = true;
    while(!here_x.empty()){
        int x = here_x.front(); here_x.pop();
        int y = here_y.front(); here_y.pop();
        for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (!(0 <= nx && nx < w && 0 <= ny && ny < h) || maze[ny][nx] == '#') continue;
            if (reached[ny][nx]) continue;

            reached[ny][nx] = true;
            here_x.push(nx);
            here_y.push(ny);
            dist[ny][nx] = dist[y][x] + 1;
        }
    }
    return dist[h-1][w-1];
}



int main(){
    cin >> h >> w;
    int cnt = 0;
    for (int i = 0; i < h; i++){
        cin >> maze[i];
        for (int j = 0; j < w; j++){
            if (maze[i][j] == '.'){
                cnt++;
            }
        }
    }

    int lowest = bfs(0,0);
    if (reached[h-1][w-1]){
        cout << cnt - lowest -1 << endl;
    } else{
        cout << -1 << endl;
    }


}
