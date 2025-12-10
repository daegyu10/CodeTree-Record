#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int sum = 0;
    for(int i = 0; i < str.length(); i++) {
        if(isdigit(str[i])) {
            sum += str[i]-48;
        }
    }
    cout << sum;
    return 0;
}