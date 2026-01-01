#include <iostream>

using namespace std;

int n;
int count = 0;

int Count(int n) {
    if(n == 1) {
         return count;
    }
    if(n % 2 == 0) {
        count++;
        return Count(n/2);
    } else {
        count++;
        return Count(n*3+1);
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    cout << Count(n);
    return 0;
}