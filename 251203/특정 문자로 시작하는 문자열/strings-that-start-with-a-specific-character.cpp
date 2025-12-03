#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    string arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    char c;
    cin >> c;

    int count = 0;
    double total = 0;
    double avg = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i][0] == c) {
            count++;
            total += arr[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << count << " " << total/count;
    return 0;
}