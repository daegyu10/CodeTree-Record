#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[10];
    int a, b;
    int sum = 0;

    cin >> a >> b;

    array[0] = a;
    array[1] = b;

    for(int i = 2; i < 10; i++) {
        array[i] = (array[i-2]+array[i-1])%10;
    }
    for(int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    return 0;
}