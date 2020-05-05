#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
using namespace std;

int main(){
    int N;
    cin >> N;
    if (N <= 999){
        cout << "ABC" << endl;
    } else {
        N -= 999;
        cout << "ABD" << endl;
    }
    return 0;
}
