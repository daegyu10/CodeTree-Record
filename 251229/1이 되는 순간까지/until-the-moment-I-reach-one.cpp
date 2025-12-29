#include <iostream>

using namespace std;

int count = 0;

int Divide(int n) {
    if(n == 1) {
        return count;
    }

    if(n % 2 == 0) {
        count++;
        return Divide(n/2);
    } else {
        count++;
        return Divide(n/3);
    }

}

int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << Divide(N);
    return 0;
}