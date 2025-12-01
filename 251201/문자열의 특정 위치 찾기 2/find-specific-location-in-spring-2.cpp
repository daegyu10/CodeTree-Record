#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr[5] = { "apple", "banana", "grape", "blueberry", "orange" };
    char c;
    cin >> c;

    int count = 0;
    bool condition = false;

    for(int i = 0; i < 5; i++) {
        bool condition = false;
        if(arr[i][2] == c || arr[i][3] == c) {
            condition = true;
        }

        if(condition == true) {
            cout << arr[i] << endl;
            count++;
        }
    }
    cout << count;
    return 0;
}