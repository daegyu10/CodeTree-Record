#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[4][4];
    

    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            cin >> array[i][j];
            count += array[i][j];
        }
        cout << count << "\n";
    }
    return 0;
}