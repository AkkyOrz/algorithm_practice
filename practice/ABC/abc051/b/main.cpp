#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>
#include <cmath>

using namespace std;

int main(){
    int K,S;
    int res = 0;

    cin >> K >> S;

    for (int x = 0; x <= K; x++){
        for (int y = x; y <= K; y++){
            for (int z = y; z <= K; z++){
                int total = x + y + z;
                if (total == S){
                    if (x == y && y == z){
                        res += 1;
                    } else if (x == y || y == z || z == x){
                        res += 3;
                    } else {
                        res += 6;
                    }
                }
            }
        }
    }
    cout << res << endl;
}
