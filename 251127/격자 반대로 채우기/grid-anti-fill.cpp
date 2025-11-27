#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    int arr[a][a] = {};
    int arrow = 1; //처음 시작은 1. 아래->위. 0:위->아래. 숫자 상관없이 왔다갔다.
    int count = 1;

    for(int i = a-1; i >= 0; i--) {
        if(arrow == 1) {
            for(int j = a-1; j >= 0; j--) {
                arr[j][i] = count;
                count++;
            }
            arrow = 0;
        } else {
            for(int j = 0; j < a; j++) {
                arr[j][i] = count;
                count++;
            }
            arrow = 1;
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}