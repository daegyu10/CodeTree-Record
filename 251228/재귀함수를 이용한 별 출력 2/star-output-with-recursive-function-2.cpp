#include <iostream>

using namespace std;

void PrintStar(int n) {
    if(n == 0) {
        return;
    }

    for(int i = 1; i <= n; i++) {
        cout << "*" << " ";
    }
    cout << endl;

    PrintStar(n-1);

    for(int i = 1; i <= n; i++) {
        cout << "*" << " ";
    }
    cout << endl;
}

int n;

int main() {
    cin >> n;

    // Please write your code here.
    PrintStar(n);
    return 0;
}