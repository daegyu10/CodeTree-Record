#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    int count = 0;

    for(int i = 0; i < 10; i++) {
        cin >> str;
        count += str.length();
    }

    cout << count;
    return 0;
}