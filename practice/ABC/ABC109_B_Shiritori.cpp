#include <bits/stdc++.h>
#include <string.h>
using namespace std;

typedef long long ll;

char str[11][11];

int n;

int main(){
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> str[i];
    }

    bool res = true;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            if (strcmp(str[i],str[j]) == 0){
                res = false;

                break;
            }
        }
    }

    for (int i = 0; i < n-1; i++){
        if (str[i][strlen(str[i]) -1] != str[i+1][0]){

            res = false;
        }
    }

    if (res){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
