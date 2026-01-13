#include <iostream>
using namespace std;
#include <algorithm>



int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n];
    int index[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        index[i] = arr[i];
    }

    sort(arr, arr+n);
    bool already_found[n] = {false};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(index[i] == arr[j] && already_found[j] == false) {
                cout << j+1 << " ";
                already_found[j] = true;
                break;
            }
        }
    }
    return 0;
}