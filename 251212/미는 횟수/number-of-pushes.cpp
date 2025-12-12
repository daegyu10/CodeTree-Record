#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str1;
    string str2;
    cin >> str1 >> str2;

    int count = 0;
    for(int i = 0; i < str1.length(); i++) {
        str1 = str1.substr(str1.length()-1, 1) + str1.substr(0, str1.length()-1);
        count++;
        if(str1 == str2) {
            cout << count;
            return 0;
        }
    }
    cout << "-1";

    return 0;
}