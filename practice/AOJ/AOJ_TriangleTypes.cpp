#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    int tri[100][3];
    int cnt[4] = {0};

    while(true){
        vector<int> point(3);
        cin >> point[0] >> point[1] >> point[2];
        sort(point.begin(), point.end());
        int x = point[0];
        int y = point[1];
        int z = point[2];
        if (x+y <= z) break;
        cnt[0]++;
        if (x*x + y*y == z*z){
            cnt[1]++;
        } else if (x*x + y*y > z*z){
            cnt[2]++;
        } else {
            cnt[3]++;
        }
    }
    for (int i = 0; i < 3; i++){
        cout << cnt[i] << " ";
    }
    cout << cnt[3] << endl;
    return 0;
}
