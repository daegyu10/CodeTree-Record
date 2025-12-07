#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int len = str.length();
    int num;

    while(true) {
        if(len == 1) {
            break;
        }
        cin >> num;
        if(num <= len) {
            str.erase(num,1);
            cout << str << endl;
            len--;
        } else {
            str.erase(len-1,1);
            cout << str << endl;
            len--;
        }
    }
    return 0;
}