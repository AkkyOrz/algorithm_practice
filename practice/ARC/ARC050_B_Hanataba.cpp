#include <iostream>
#include <algorithm>

#define INF 1000000000000000000

using namespace std;

long long r, b;
int x, y;

bool C(long long K){
    //if (r < K || b < K) return false;
    long long num = (long long)((r-K)/(x-1)) + (long long)((b-K)/(y-1));
    return num >= K;
}

int main(){
    cin >> r >> b;
    cin >> x >> y;

    long long lb = 0, ub = INF;


    for (int i = 0; i < 10000; i++){
        long long mid = (lb + ub) / 2;
        if (C(mid)){
            lb = mid;
        } else {
            ub = mid;
        }
        if (lb == ub) break;
    }
    cout << lb << endl;
}
