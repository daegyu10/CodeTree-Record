#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int matrix1[a][b];
    int matrix2[a][b];

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin >> matrix1[i][j];
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(matrix1[i][j] == matrix2[i][j]) {
                cout << 0 << " ";
            } else if(matrix1[i][j] != matrix2[i][j]) {
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}