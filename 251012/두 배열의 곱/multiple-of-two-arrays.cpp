#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int matrix1[3][3];
    int matrix2[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix1[i][j] * matrix2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}