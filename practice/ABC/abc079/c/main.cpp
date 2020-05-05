#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();

    for (int bit = 0; bit < 1<<(n-1); bit++){
        // cout << setfill('0') << bitset<3>(bit) << endl;
        int sum = s[0] - '0';
        /* +-を挿入した文字列tを作成する。*/
        for (int i = 1; i < n; i++){
            if (bit & (1 << (i-1))){
                sum += s[i] - '0';
            } else {
                sum -= s[i] - '0';
            }
        }
        if (sum == 7){
            string t;
            for (int i = 0; i < n-1; i++){
                t += s[i];
                if (bit & (1 << i)){
                    t += '+';
                } else {
                    t += '-';
                }
            }
            t += s[n-1];
            t += '=';
            t += to_string(sum);
            cout << t << endl;
            return 0;
        }
    }
}
