#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cake = 4;
    int donuts = 7;

    for (int i = 0; i <= (100/cake); i++){
        for (int j = 0; j <= (100/donuts); j++){
            if (i*cake + j*donuts == n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
