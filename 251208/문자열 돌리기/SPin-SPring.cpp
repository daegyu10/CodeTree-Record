#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int len = str.length();
    
    cout << str << endl;
    for(int i = 0; i < len; i++) {
        str = str.substr(len-1,1) + str.substr(0, len-1);
        cout << str << endl;
    }
    return 0;
}