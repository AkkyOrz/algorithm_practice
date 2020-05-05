#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    string S;
    cin >> S;
    bool keys[3] = {false, false, true};
    if (S[0] == 'A') keys[0] = true;

    int cnt = 0;
    for (int i = 2; i < S.length()-1; i++){
        if (S[i] == 'C') {
            cnt++;
        }
    }
    if (cnt == 1) keys[1] = true;

    for (int i = 1; i < S.length(); i++){
        if ('A' <= S[i] && S[i] <= 'Z'){
            if (S[i] == 'C' && 2 <= i && i < S.length()-1) continue;
            keys[2] = false;
        }
    }

    if (keys[0] && keys[1] && keys[2]){
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }

    return 0;
}
