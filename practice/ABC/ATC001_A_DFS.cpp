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

int h, w;
char way[500][500];
bool reached[500][500];


void dfs(int x, int y){
    if (x < 0 || x >= h || y < 0 || y >= w || way[x][y] == '#'){
        return ;
    }
    if (reached[x][y]) return;

    reached[x][y] = true;
    
    dfs(x, y+1);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x-1, y);
}

int main(){
    cin >> h >> w;
    int s_x, s_y;
    int g_x, g_y;
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> way[i][j];
            if (way[i][j] == 's'){
                s_x = i;
                s_y = j;
            }
            if (way[i][j] == 'g'){
                g_x = i;
                g_y = j;
            }
        }
    }

    dfs(s_x, s_y);

    if (reached[g_x][g_y]){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}
