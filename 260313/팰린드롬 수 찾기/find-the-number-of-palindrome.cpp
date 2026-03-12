#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int total_count = 0;
    for(int i = a; i <= b; i++) {
        int count = 0;
        int temp = i;
        int arr[8] = {};

        while(temp > 0) {
            arr[count] = temp % 10;
            temp = temp / 10;
            count++;
        }

        bool same = true;
        for(int j = 0; j < count/2; j++) {
            if(arr[j] != arr[count-j-1]) {
                same = false;
            }
        }

        if(same == true) {
            total_count++;
        }
    }

    cout << total_count;
    return 0;
}