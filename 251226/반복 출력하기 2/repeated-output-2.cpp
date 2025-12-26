#include <iostream>

using namespace std;

int N;

void Printhello(int n) {
    if(n == 0) {
        return;
    }
    Printhello(n-1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;

    // Please write your code here.
    Printhello(N);
    return 0;
}