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


int N,M;
const int N_MAX = 100000;
const int M_MAX = 20;
int r[N_MAX+1];
int sum[M_MAX+1][N_MAX+1];
int toy_num[M_MAX+1];
int dp[1<<M_MAX];


int main(){
    cin >> N >> M;
    for (int i = 1; i <= N; i++){
        cin >> r[i];
        r[i]--;
        toy_num[r[i]]++;
    }




    for (int j = 0; j < M; j++){
        for (int i = 1; i <= N; i++){
            sum[j][i] = sum[j][i-1] + (r[i] == j);
        }
    }

    // init dp
    dp[0] = 0;
    for (int i = 1; i < (1<<M); i++){
        dp[i] = N_MAX+1;
    }

    for (int S = 0; S < (1<<M); S++){
        int cnt = 0;
        for (int j = 0; j < M; j++){
            if (S & (1 << j)){
                cnt += toy_num[j];
            }
        }
        for (int j = 0; j < M; j++){
            if (S & (1 << j)) continue;
            int change_cost = (toy_num[j] - (sum[j][cnt+toy_num[j]] - sum[j][cnt]));// 区間cnt ~ cnt+toy_num[j]をjで埋めるために必要なjの個数
            dp[S | (1<<j)] = min(dp[S | (1<<j)], dp[S] + change_cost);
        }
    }

    cout << dp[(1<<M)-1] << endl;
}
