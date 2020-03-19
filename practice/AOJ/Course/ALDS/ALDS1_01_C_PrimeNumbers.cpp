#include <iostream>
#include <math.h>
#define N 10000
using namespace std;

bool is_prime(int x){
    if (x < 1) {
        return false;
    } else {
        int sq = (int)(sqrt(x));
        for (int i = 2; i <= sq; i++){
            if (x%i == 0) return false;
        }
        return true;
    }
}

int main(int argc, char const *argv[]) {
    int n;
    int x;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (is_prime(x)){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
