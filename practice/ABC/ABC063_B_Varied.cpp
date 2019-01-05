#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++){
        for (int j = i+1; j < S.length(); j++){
            if (S[i] == S[j]) {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;

    return 0;
}
