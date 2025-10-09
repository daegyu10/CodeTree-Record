#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    int array[a];
    for (int i = 0; i < a; i++) {
        cin >> array[i];
    }

    for(int i = a-1; i >= 0; i--) {
        if(array[i] % 2 == 0) {
            cout << array[i] << " ";
        }
    }
    return 0;
}