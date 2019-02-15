#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1000000007;


/*
この橋の作り方からすると、必ず閉路は存在しない(N個の島からN-1個の橋を作るので、無駄なものは作れない)
つまり木構造
再起でかけると嬉しい

以下解説
自分(頂点i)が親の時、子ノードをc1, c2, ... とする

自分が白である時の子の求める値をg(v[i])
自分がどっちでもいいときの値はf(v[i])

自分が白なら子ノードの要求個数f(c1)*f(c2)*...となる
自分が黒ならg(c1)*g(c2)*...
*/


vector<vector<int>> v(100010);

ll f[100010], g[100010];

int n;


void dfs(int prev, int x){
    for (int i = 0; i < v[x].size(); i++){
        if (v[x][i] != prev){
            dfs(x, v[x][i]);
        }
    }

    f[x] = 1LL;
    g[x] = 1LL;

    for (int i = 0; i < v[x].size(); i++){
        if (v[x][i] != prev){
            g[x] *= f[v[x][i]];
            g[x] %= MOD;
            f[x] *= g[v[x][i]];
            f[x] %= MOD;
        }
    }
    
    f[x] += g[x];
    f[x] %= MOD;
}


int main(){
    cin >> n;

    v.resize(n);

    for (int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(-1, 0);

    cout << f[0] << endl;

}