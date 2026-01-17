#include <iostream>
using namespace std;
#include <string>

int main() {
    // Please write your code here.
    string input;
    cin >> input;
    int num = 0;

    //cout << input.length() << endl;

    for(int i = 0; i < input.length(); i++) {
        num = num * 2 + (input[i] - '0');
    }

    cout << num;
    return 0;
}