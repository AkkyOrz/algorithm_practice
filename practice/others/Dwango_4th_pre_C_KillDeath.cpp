#include <bits/stdc++.h>

const int N = 100;
const int MAX_SUM_KILL = 1000;
const ll mod = 1000000007;

long solve(const long *k1s, long N1, const long *k2s, long N2,
          const long comb[MAX_N + 1][MAX_SUM_KILL + 1]){
    // calculate total kills to distribute
    long K = 0;
    for (long i = 0; i < N1; i++){
        K += k1s[i];
    }

    // get number of blocks and the size of each
    long block_sizes[MAX_N] = {}, num_blocks = -1, cnt = 0;
    for (long i = 0; i < N2; i++) {
        if (i == 0 || k2s[i] != k2s[i - 1]){
            num_blocks++;
        }
        block_sizes[num_blocks]++;
    }
    num_blocks++;
    // printf("num_blocks = %ld\n", num_blocks);
    // for (long i = 0; i < num_blocks; i++) {
    //   printf("%ld\n", block_sizes[i]);
    // }

    // solve dp
    long dp[MAX_N + 1][MAX_SUM_KILL + 1] = {};
    dp[0][0] = 1;
    for (long i = 1; i <= num_blocks; i++)
    {
        const long block_size = block_sizes[i - 1];
        for (long j = 0; j <= K; j++)
        {
            long dpij = 0;
            for (long k = 0; k <= j; k++)
            {
                dpij += comb[block_size][k] * dp[i - 1][j - k] % NUM_MOD;
                dpij = dpij % NUM_MOD;
            }
            dp[i][j] = dpij;
            // printf("%ld ", dp[i][j]);
        }
        // printf("\n");
    }

    return dp[num_blocks][K];
}


int n, m;
int kill_a[100], kill_b[100];


int main(int argc, char *argv[]){
    // read inputs
    cin << n << m;

    for (long i = 0; i < n; i++){
        cin << kill_a[i];
    }
    for (long i = 0; i < m; i++){
        cin << kill_b[i];
    }

    ll comb[N+1][MAX_SUM_KILL + 1] = {};
    comb[0][0] = 1;
    for (long i = 1; i <= MAX_N; i++){
        for (long j = 0; j <= MAX_SUM_KILL; j++){
            comb[i][j] = (comb[i - 1][j] + (j >= i ? comb[i][j - i] : 0)) % mod;
        }
    }

    

    // solve
    printf("%ld\n", solve(kas, N, kbs, M, comb) * solve(kbs, M, kas, N, comb) % mod);

    return 0;
}
