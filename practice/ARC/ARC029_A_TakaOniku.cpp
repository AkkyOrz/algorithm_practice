#include <iostream>

using namespace std;

int main(){
    int n;
    int t[4];

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t[i];
    }
    int res = 100000;

    for (int bit = 0; bit < (1 << (n-1)); bit++){
        int t_a = 0;
        int t_b = 0;
        for (int i = 0; i < n; i++){
            if (bit & (1 << i)){
                t_a += t[i];
            } else {
                t_b += t[i];
            }
        }
        int fin_time = max(t_a, t_b);
        res = min(res, fin_time);
    }
    cout << res << endl;
}
