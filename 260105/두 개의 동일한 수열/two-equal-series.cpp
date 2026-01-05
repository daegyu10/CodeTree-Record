#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    // Please write your code here.
    sort(a, a+n);
    sort(b, b+n);
    bool same = true;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            same = false;
            break;
        }
    }
    
    if(same) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}