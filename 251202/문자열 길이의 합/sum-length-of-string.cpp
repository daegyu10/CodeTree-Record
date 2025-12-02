#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    string arr[a];
    int count = 0;
    int a_count = 0;
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
        count += arr[i].length();
        if(arr[i][0] == 'a') {
            a_count++;
        }
    }

    cout << count << " " << a_count;

    return 0;
}