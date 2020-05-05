#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
string s;

int main(){
    cin >> n;
    cin >> s;
    int left = 0;
    int cnt_0 = 0;
    int cnt_1 = 0;
    while(left < s.size()){
        for (int j = left; s[j] != ')' && j < s.size(); j++){
            cnt_0++;
            left++;
        }
        for (int j = left; s[j] != '(' && j < s.size(); j++){
            cnt_1++;
            left++;
        }
        if (cnt_0 - cnt_1 > 0) {
            cnt_0 = cnt_0 - cnt_1;
            cnt_1 = 0;
            int cnt = cnt_0;
            for (int i = 0; i < cnt; i++){
                s = s + ')';
                // cnt_0,1に関する何か
            }
        } else {
            cnt_1 = cnt_1 - cnt_0;
            cnt_0 = 0;
            //
            for (int i = 0; i < cnt_1 - cnt_0; i++){
                s = '(' + s;
                left++;
                //
            }
        }
        cout << s << endl;
    }
    cout << s << endl;
}
