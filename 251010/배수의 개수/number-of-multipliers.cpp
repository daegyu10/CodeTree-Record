#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[10];
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    for(int i = 0; i < 10; i++) {
        if (array[i] % 3 == 0) {
            count1 += 1;
        } 
        
        if (array[i] % 5 == 0) {
            count2 += 1;
        }
    }

    cout << count1 << " " << count2;
    return 0;
}