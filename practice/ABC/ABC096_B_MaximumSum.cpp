#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int K;
    cin >> K;
    sort(a,a+3);
    for (int i = 0; i < K; i++){
        a[2] *= 2;
    }
    cout << a[0] + a[1] + a[2] << endl;
}
