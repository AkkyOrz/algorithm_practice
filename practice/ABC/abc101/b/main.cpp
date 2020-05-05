#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int S(int x){
    int dsum = 0;

    while (x>0){
        dsum += (x%10);
        x /= 10;
    }

    return dsum;
}

int main(){
    int x;

    cin >> x;

    int dsum = S(x);

    if (x%dsum == 0){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

}