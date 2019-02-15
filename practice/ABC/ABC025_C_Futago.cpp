#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// ゼロサムゲームなので、相手の点数の最小化が利益の最大化になる。

int board[3][3];
const int ok = 1;
const int no = -1;

int sums = 0;

int b[2][3];
int c[3][2];

int calc_score(){
    int score = 0;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] == board[i+1][j]){
                score += b[i][j];
            } 
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if (board[i][j] == board[i][j+1]){
                score += c[i][j];
            } 
        }
    }

    return score;
}

int get_score(int n){

    if (n == 10){
        return calc_score();
    }

    int min_ = sums;
    int max_ = 0;

    int mark;
    if (n%2 == 1){
        mark = no;
    } else {
        mark = ok;
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] == 0){
                board[i][j] = mark;
                int s = get_score(n+1);
                min_ = min(min_, s);
                max_ = max(max_, s);
                board[i][j] = 0;
            }
        }
    }

    if (n%2 == 1){
        return max_;
    } else {
        return min_;
    }
}

int main(){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cin >> b[i][j];
            sums += b[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cin >> c[i][j];
            sums += c[i][j];
        }
    }

    int res = get_score(1);
    cout << res << endl;
    cout << sums - res << endl;
}