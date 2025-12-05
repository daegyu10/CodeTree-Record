#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    char c;
    cin >> str >> c;

    int index = -1;

    for(int i = 0; i < str.length(); i++) {
        if(str.find(c) != string::npos) {
            index = str.find(c);
        }
    }

    if(index == -1) {
        cout << "No";
    } else {
        cout << index;
    }
    return 0;
}