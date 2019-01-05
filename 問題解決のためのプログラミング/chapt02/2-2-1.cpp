#include <iostream>
using namespace std;

int main(){
    int empier_num;
    int temp;

    while (cin >> empier_num && empier_num != 0){
        int sum = 0;
        int min = 10000, max = -10000;
        for (int i = 0; i < empier_num; i++){
            cin >> temp;
            sum += temp;
            if (max < temp) max = temp;
            if (min > temp) min = temp;
        }
        sum -= (min + max);

        int ave;
        ave = sum / (empier_num - 2);
        cout << ave << endl;
    }
}
