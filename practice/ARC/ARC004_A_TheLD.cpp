#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
#include <string>
#include <cmath>

using namespace std;

int main(){
    int N;
    int point[100][2];
    double max_distance = -1.0;
    double dist;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> point[i][0] >> point[i][1];
    }
    for (int i = 0; i < N; i++){
        for (int j = i; j < N; j++){
            int dx = point[i][0] - point[j][0];
            int dy = point[i][1] - point[j][1];
            dist = sqrt(dx*dx + dy*dy);
            if (dist > max_distance) max_distance = dist;
        }
    }
    cout << max_distance << endl;
}
