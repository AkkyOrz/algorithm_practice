#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
string s;

int main(){
    cin >> n ;
    cin >> s;

    int blue = 0;
    int red = 0;
    for (int i =0 ; i< n; i++){
        if (s[i] == 'R' ){
            red++;
        }  else{
            blue++;
        }
    }

    if (red > blue){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}