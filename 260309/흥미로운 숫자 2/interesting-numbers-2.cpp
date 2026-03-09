#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int count = 0;
    for(int i = a; i <= b; i++) {
        int arr[10] = {};
        int len = i;
        while(len > 0) {
            int num = len%10;
            arr[num]++;
            len = len / 10;
        }

        int num_count = 0;
        int num_over = 0;
        for(int j = 0; j < 10; j++) {
            if(arr[j] != 0) {
                num_count++;
            }
            if(arr[j] > 1) {
                num_over++;
            }
        }

        if(num_count == 2 && num_over == 1) {
            count++;
        }
    }

    cout << count;
    return 0;
}