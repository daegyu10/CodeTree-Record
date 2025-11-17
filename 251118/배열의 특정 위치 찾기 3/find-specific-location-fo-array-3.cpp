#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int point;

    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            point = i;
            break;
        }
    }
    cout << arr[point -3]+arr[point -2]+arr[point -1];
    return 0;
}