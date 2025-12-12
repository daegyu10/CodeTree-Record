#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[200];
    int count = 0;
    int idx = 0;

    while(true) {
        cin >> str[idx];
        if(str[idx] == "0") {
            break;
        }
        idx++;
    }
    cout << idx << endl;
    for(int i = 0; i < idx; i+=2) {
        cout << str[i] << endl;
    }
    return 0;
}