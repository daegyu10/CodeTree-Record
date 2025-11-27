#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    int count = 0;
    cin >> count;
    
    int arr[count][count] = {};
    int num = 1;
    for(int i = 0; i < count; i++) {
        for(int j = 0; j < count; j++) {
            arr[j][i] = num;
            num++;
        }
    }

    for(int i = 0; i < count; i++) {
        for(int j = 0; j < count; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    
}