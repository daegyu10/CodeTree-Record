#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    int array[a][a];

    //00 10 20 30
    //31 21 11 01
    //02 12 22 32
    //33 23 13 03

    for(int i = 0; i < a; i++) {
        if(i % 2 == 0) {
            int count = 1;
            for(int j = 0; j < a; j++) {
                array[j][i] = count;
                count++;
            }
        } else {
            int count = 1;
            for(int j = a-1; j >= 0; j--) {
                array[j][i] = count;
                count++;
            }
        }
    }
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            cout << array[i][j];
        }
        cout << "\n";
    }
    return 0;
}