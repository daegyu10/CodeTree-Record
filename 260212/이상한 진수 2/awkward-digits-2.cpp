#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    cin >> input;

    for(int i = 0; i < (int)input.size(); i++) {
        if(input[i] == '0') {
            input[i] = '1';
            break;
        }
    }

    int n = (int)input.size();
    int answer = 0;

    for(int i = 0; i < n; i++) {
        int number = (input[i] - '0');
        answer = answer * 2 + number;
    }

    cout << answer;
    return 0;
}