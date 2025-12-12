#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;

    while(true) {
        cin >> str;
        if(str == "END") {
            break;
        }

        for(int i = str.length()-1; i >= 0; i--) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}