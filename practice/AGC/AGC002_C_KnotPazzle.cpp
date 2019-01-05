#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int n, L;
int a[100000];


int main(){
    cin >> n >> L;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool check = false;
    int index = -1;

    for (int i = 0; i < n-1; i++){
        if (a[i+1] + a[i] >= L){
            check = true;
            index = i;
            break;
        }
    }

    if (check){
        cout << "Possible" << endl;
        for (int i = 1; i <= index; i++){
            cout << i << endl;
        }
        for (int i = n-1; i > index; i--){
            cout << i << endl;
        }

    } else {
        cout << "Impossible" << endl;
    }
}
