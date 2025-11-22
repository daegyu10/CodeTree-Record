#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_length;
    int b_length;
    cin >> a_length >> b_length;

    int arr1[a_length];
    int arr2[b_length];

    for(int i = 0; i < a_length; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < b_length; i++) {
        cin >> arr2[i];
    }

    for(int i = 0; i < a_length; i++) {
        if(arr2[0] == arr1[i]) {
            for(int j = 0; j < b_length; j++) {
                if(j == b_length-1 && arr2[j] == arr1[i+j]) {
                    cout << "Yes";
                    return 0;
                }
                if(arr2[j] == arr1[i+j]) {
                    continue;
                } else {
                    cout << "No";
                    return 0;
                }
            }
        } else if(i == a_length-1 && arr2[0] != arr1[i]) {
            cout << "No";
            return 0;
        }
    }
    return 0;
}