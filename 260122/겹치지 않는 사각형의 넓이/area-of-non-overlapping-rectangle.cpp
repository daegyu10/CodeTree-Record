#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2001][2001] = {}
    int index = 1000;

    for(int a = 0; a < 2; a++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++) {
            for(int j = y1; j < y2; j++) {
                arr[i+index][j+index] = 1;
            }
        }
    }

    for(int a = 0; a < 1; a++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++) {
            for(int j = y1; j < y2; j++) {
                arr[i+index][j+index] = 0;
            }
        }
    }

    int count = 0;
    for(int i = 0; i < 2001; i++) {
        for(int j = 0; j < 2001; j++) {
            if(arr[i][j] == 1) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}