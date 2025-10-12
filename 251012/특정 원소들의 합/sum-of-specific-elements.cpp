#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[4][4];
    int count = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> array[i][j];
            if(i == 0 && j == 0) {
                count += array[i][j];
            }

            if(i == 1 && j < 2) {
                count += array[i][j];
            }

            if(i == 2 && j < 3) {
                count += array[i][j];
            }

            if(i == 3) {
                count += array[i][j];
            }
        }
    }

    cout << count;
    return 0;
}