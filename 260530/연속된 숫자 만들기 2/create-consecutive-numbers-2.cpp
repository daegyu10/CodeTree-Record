#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int arr[3] = {};
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+3);
    int move = 0;
    while(true) {
        if(abs(arr[0] - arr[2]) == 2) {
            cout << move;
            return 0;
        } else {
            int diff1 = abs(arr[0] - arr[1]);
            int diff2 = abs(arr[1] - arr[2]);
            if(diff1 > diff2) {
                arr[0] = arr[2] - 1;
                sort(arr, arr+3);
                move++;

                if(abs(arr[0] - arr[2]) == 2) {
                    cout << move;
                    return 0;
                } else {
                    cout << move+1;
                    return 0;
                }
            } else if (diff1 < diff2){
                arr[2] = arr[0] + 1;
                sort(arr, arr+3);
                move++;

                if(abs(arr[0] - arr[2]) == 2) {
                    cout << move;
                    return 0;
                } else {
                    cout << move+1;
                    return 0;
                }
            }
        }
    }
    

    return 0;
}