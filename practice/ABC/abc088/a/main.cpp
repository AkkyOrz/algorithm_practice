#include <iostream>
using namespace std;

int main(){
    int N,A;
    cin >> N;
    cin >> A;
    if ((N % 500) <= A){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
