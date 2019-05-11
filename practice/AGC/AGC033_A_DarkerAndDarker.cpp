#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF (1ll << 59)


bool is_reached[1010][1010];

char maze[1010][1010];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int height, width;
int cnt = 0;

void dfs(int x, int y){
    if (!(0 <= x && x < width && 0 <= y && y < height)) return;
    if (is_reached[y][x] == true)
    
    for (int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (maze[ny][nx] == '.') is_reached[ny][nx] = true;
    }

    cnt++;
}


int main(){
    cin >> height >> width;

    for (int y = 0; y < height; y++){
        for (int x = 0; x < width; x++){
            cin >> maze[y][x];
            if (maze[y][x] == '#') {
                is_reached[y][x] = true; 
            } else {
                is_reached[y][x] = false;
            }
        }
    }




}