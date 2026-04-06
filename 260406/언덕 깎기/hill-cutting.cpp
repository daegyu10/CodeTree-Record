#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};

    int max_h = 0;
    int min_h = 100;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        max_h = max(max_h, arr[i]);
        min_h = min(min_h, arr[i]);
    }

    for(int x = 1; x <= 100; x++) {
        int mod_max_h = max_h - x;
        int mod_min_h = min_h + x;

        int diff = mod_max_h - mod_min_h;
        if(diff <= 17) {
            cout << (x*x) + (x*x);
            return 0;
        }
    }
    return 0;
}