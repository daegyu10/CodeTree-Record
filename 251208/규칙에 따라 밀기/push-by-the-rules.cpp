#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    string com_str;
    cin >> str >> com_str;
    
    int len_1 = str.length();
    int len_2 = com_str.length();
    for(int i = 0; i < len_2; i++) {
        if(com_str[i] == 'L') {
            char first = str[0];
            for(int j = 0; j < len_1-1; j++) {
                str[j] = str[j+1];
            }
            str[len_1-1] = first;
        } else {
            char last = str[len_1-1];
            for(int j = len_1-1; j >= 1; j--) {
                str[j] = str[j-1];
            }
            str[0] = last;
        }
    }
    cout << str;
    return 0;
}