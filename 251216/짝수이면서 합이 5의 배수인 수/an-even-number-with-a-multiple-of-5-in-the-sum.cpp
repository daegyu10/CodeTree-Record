#include <iostream>

using namespace std;

int n;

string Counter(int n) {
    if((n % 2 == 0) && (((n%10)+(n/10)) % 5 == 0)) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    cout << Counter(n);
    return 0;
}