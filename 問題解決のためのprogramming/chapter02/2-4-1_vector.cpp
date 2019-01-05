#include <vector>
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){


    int N = 20;
    std::vector<int> v(N, 1);
    cout << v[1] << v[2] << endl;

    array<int,50> Array = {};
    Array[100] = 1;
    cout << Array[100] << endl;


    /*for (auto e:Array) cout << e << endl;*/



    array<int,7> A = {3,5,1,2,4,6,0};
    sort(A.begin(),A.end());
    reverse(A.begin(), A.end());
    sort(A.begin(), A.end());
    rotate(A.begin(), A.begin()+3, A.begin()+7);
    for (int i = 0; &A[i] != A.end(); i++)
        cout << A[i] << " ";
    cout << endl;

    array<int, 4> array = {1,1,2,3};
    do {
        for (int i = 0; &array[i] != array.end(); i++)
            cout << array[i] << " ";
        cout << endl;
    } while (next_permutation(array.begin(), array.end()));
}
