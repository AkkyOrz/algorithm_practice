#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int n, m;
int a[10000], b[10000], c[10000];
int dist[100][100];
int const INF = 1000000000;

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a[i] >> b[i] >> c[i];
        a[i]--; b[i]--;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
    for (int i = 0; i < m; i++){
        dist[a[i]][b[i]] = min(dist[a[i]][b[i]], c[i]);
        dist[b[i]][a[i]] = min(dist[b[i]][a[i]], c[i]);
    }

    for (int k = 0; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0;j < n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    int res = m;
    for (int i = 0; i < m; i++){
        bool check = false;
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                if (dist[j][k] == dist[j][a[i]] + c[i] + dist[b[i]][k]){
                    check = true;
                    break;
                }
            }
            if(check) break;
        }
        if (check) res--;
    }

    cout << res << endl;
}
