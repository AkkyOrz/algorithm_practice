#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

int main(){
    int VV;
    int m;
    cin >> m;

    if (m < 100){
        VV = 0;
    } else if (m <= 5000){
        VV = m / 100.0;
    } else if (6000 <= m && m <= 30000){
        VV = m / 1000.0 + 50;
    } else if (35000 <= m && m <= 70000){
        VV =  (m / 1000.0 - 30) / 5 + 80;
    } else if (m > 70000){
        VV = 89;
    }

    cout << setfill('0') << right << setw(2) << VV << endl;

    return 0;
}
