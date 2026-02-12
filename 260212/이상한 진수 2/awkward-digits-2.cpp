#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    cin >> input;

    if(input.size() == 1) {
        input = '0';
    } else {
        for(int i = 0; i < (int)input.size(); i++) {
            if(input[i] == '0') {
                input[i] = '1';
                break;
            }

            if(i == (int)input.size() - 1 && input[i] == '1') {
                input[i] = '0';
                break;
            }
        }
    }
    
    int answer = 0;

    for(int i = 0; i < (int)input.size(); i++) {
        int number = (input[i] - '0');
        answer = answer * 2 + number;
    }

    cout << answer;
    return 0;
}