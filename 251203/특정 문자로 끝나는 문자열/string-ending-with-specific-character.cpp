#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr[10];
    char c;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cin >> c;

    bool exist = false;

    for(int i = 0; i < 10; i++) {
        int num = arr[i].length() -1;
        if(arr[i][num] == c) {
            exist = true;
            cout << arr[i] << endl;
        }
    }

    if(exist == false) {
        cout << "None";
    }
    return 0;
}