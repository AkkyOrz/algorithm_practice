#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1 << 30;

int n;
int s[10];

int main(){
    cin >> n;

    for (int i = 1; i < 10; i++){
        s[i] = i * 111;
    }

    for (int i = 1; i < 10; i++){
        if (n <= s[i]){
            cout << s[i] << endl;
            return 0;
        }
    }

}
