#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int matrix[3][3];
    int a;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a;
            matrix[i][j] = a*3;
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}