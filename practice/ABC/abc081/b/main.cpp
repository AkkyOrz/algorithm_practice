#include <iostream>
#include <vector>
using namespace std;


void shift(vector<int> A){
    int t = 0;
    while (true){
        for (int i = 0; i < A.size(); i++){
            if (A[i] % 2 == 0){
                A[i] /= 2;
            } else {
                cout << t << endl;
                return;
            }
        }
        t++;
    }
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    shift(A);
}
