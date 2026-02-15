#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string input;
    cin >> input;

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(input[i] == 'C' && input[j] == 'O' && input[k] == 'W') {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}