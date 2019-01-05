#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>
#include <cmath>

using namespace std;

int main(){
    int R;
    cin >> R;
    if (0 <= R && R < 1200){
        cout << "ABC" << endl;
    } else if (R < 2800){
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }
}
