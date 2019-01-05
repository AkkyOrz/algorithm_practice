#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < 3; i++){
        if ((s%(int)pow(10,i+1)) / (int)pow(10,i) == 1){
            cnt++;
        }
    }
    cout << cnt << endl;
}


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int counter = 0;
    if (s[0] == '1') ++counter;
    if (s[1] == '1') ++counter;
    if (s[2] == '1') ++counter;
    cout << counter << endl;
}
*/
