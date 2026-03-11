#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};
    int sink[n] = {};
    int max_height = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max_height) {
            max_height = arr[i];
        }
    }

    int max_count = 0;
    for(int h = 1; h <= max_height; h++) {
        for(int i = 0; i < n; i++) {
            if(arr[i] <= h) {
                sink[i] = 1;
            }
        }

        int count = 0;
        bool countable = false;
        for(int i = 0; i < n; i++) {
            if(sink[i] == 0 && countable == false) {
                countable = true;
                count++;
            }
            if(sink[i] == 1) {
                countable = false;
            }
        }
        max_count = max(count, max_count);
    }

    cout << max_count;
    return 0;
}