#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    cin >> input;

    int answer = 0;
    int n = (int)input.size();
    for(int i = 0; i < n; i++) {
        input[i] = '0' + '1' - input[i];
        int number = 0;
        //i번째 자리를 1<->0을 바꾸고, 그걸 10진수로 바꿈. 즉, 모든 자리에서 하나만 바꿔보는 것.
        for(int j = 0; j < n; j++) {
            number = number * 2 + (input[j] - '0');
        }
        answer = max(answer, number);
        input[i] = '0' + '1' - input[i]; //1<->0 바꾼거 다시 원래대로 바꾸기.
    }
    cout << answer;
    return 0;
}

/*
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

*/