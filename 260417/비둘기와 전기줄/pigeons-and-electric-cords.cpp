#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[11] = {};
    bool first[11] = {};
    cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(first[a] == false) {
            arr[a] = b;
            first[a] = true;
        } else if(first[a] == true){
            if(arr[a] != b) {
                count++;
                arr[a] = b;
            }
        }
    }

    cout << count;
    return 0;
}