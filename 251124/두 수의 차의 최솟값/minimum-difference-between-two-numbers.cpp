#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int min;
    int cal;

    int num;
    cin >> num;
    int arr[num];

    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < num-1; i++) {
        cal = arr[i+1] - arr[i];
        if(i == 0) {
            min = cal;
        }

        if(min > cal) {
            min = cal;
        }
    }

    cout << min;
    return 0;
}