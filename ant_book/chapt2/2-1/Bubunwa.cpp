#include <iostream>
using namespace std;

//入力
int a[4] = {1, 2, 4, 7};
int n = 4, k = 13;

//iまででsumを作り、残りi以降を調べる
bool dfs(int i, int sum){
    //n子すべて決め終わったら、sumとkが等しいかを返す
    if (i == n) return sum == k;

    //a[i]を使わない場合
    if (dfs(i + 1, sum)) return true;

    //a[i]を使う場合
    if (dfs(i + 1, sum + a[i])) return true;

    //kが作れないのでfalse
    return false;
}


void solve(){
    if (dfs(0, 0)) printf("YES\n");
    else printf("NO\n");
}

int main(){
    solve();
    return 0;
}
