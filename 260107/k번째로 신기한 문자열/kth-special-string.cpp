#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    int k;
    string a;
    string b;
    string arr[100];

    cin >> n >> k;
    cin >> a;
    bool same = true;
    int count = 0;

    for(int i = 0; i < n; i++) {
        cin >> b;
        same = true;
        for(int j = 0; j < a.length(); j++) {
            if(a[j] != b[j]) {
                same = false;
            }
        }

        if(same) {
            arr[count] = b;
            count++;
        }
    }

    sort(arr, arr+count);
    cout << arr[k-1];
    return 0;
}