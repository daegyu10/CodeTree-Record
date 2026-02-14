#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    cin >> input;

    int n = (int) input.size();
    int count = 0;
    for(int i = 0; i < n-2; i++) {
        for(int j = 2; j < n-1; j++) {
            if(input[i] == '(' && input[i+1] == '(' && input[j] == ')' && input[j+1] == ')') {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}