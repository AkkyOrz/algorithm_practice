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


vector<int> G[101];
bool reached[101];


int n, m;
int res = 0;

bool check(){
    for (int i = 0; i < n; i++){
        if (!reached[i]) return false;
    }
    return true;
}

bool dfs(int now, int prev){
    //if (now <= 0 || now > n) return;
    if (reached[now]) {
        return false;
    }
    reached[now] = true;

    bool ret = true;
    for (int i = 0; i < G[now].size(); i++){
        if (G[now][i] == prev) continue;
        ret &= dfs(G[now][i], now);
    }
    return ret;

/*
    これはだめ。
    本来ならば最後まで結果がどうなるかがわからないのに、これは途中でreturnしてる
    つまり、最初に調べた枝が閉路か否かを判断してしまう。
    例えば
6 6
1 2
2 3
3 4
2 5
5 6
2 6
1
    みたいなのは無理。
*/
/*
    for (int i = 0; i < G[now].size(); i++){
        if (G[now][i] == prev) continue;
        return dfs(G[now][i], now);
    }
    return true;
*/
}

int main(){
    cin >> n >> m;
    int u, v;
    for (int i = 1; i <= m; i++){
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for (int i = 1; i <= n; i++){
        if(!reached[i]){
            if (dfs(i, -1)) res++;
        }
    }

    cout << res << endl;

}
