#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int N, Y;
int yen[3] = {10000, 5000, 1000};



int main(int argc, char const *argv[]) {
    cin >> N >> Y;

    for (int x = 0; x <= N; x++){
        for (int y = 0; y <= N - x; y++){
            int z = N - x - y;
            if (yen[0]*x + yen[1]*y + yen[2]*z == Y){
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}
