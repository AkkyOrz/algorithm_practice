#include <iostream>
#include <algorithm>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
using namespace std;

int main(){
    int A, B, C;
    int X;
    int cnt = 0;
    int num[3];
    cin >> A >> B >> C >> X;
    for (int a = 0; a <= A; a++){
        for (int b = 0; b <= B; b++){
            for (int c = 0; c <= C; c++){
                int sum = 500*a + 100*b + 50*c;
                if (sum == X){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}
