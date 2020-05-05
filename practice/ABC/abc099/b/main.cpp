#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
using namespace std;

int main(int argc, char const *argv[]) {
    int a,b;
    cin >> a >> b;
    int sub = b - a;
    int sum = 0;
    for (int i = 1; i < sub; i++){
        sum += i;
    }
    cout << sum - a << endl;
    return 0;
}
