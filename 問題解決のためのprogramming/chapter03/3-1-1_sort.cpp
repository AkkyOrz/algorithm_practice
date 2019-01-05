#include <algorithm>
#include <iostream>
using namespace std;
int A[5] = {3,5,1,2,4};
int main() {
    sort(A,A+5); // 半開区間 [l,r) で指定する．sort(&A[0], &A[5]) と同じ意味
    for (int i = 0; i < 5; i++){
        cout << A[i] ;
    }
    cout << endl;

}
