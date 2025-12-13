#include <iostream>
using namespace std;

void Print10Star() {
        for(int i = 0; i < 10; i++) {
            cout << "*";
        }
        cout << endl;
    }

int main() {
    // Please write your code here.
    for(int i = 0; i < 5; i++) {
        Print10Star();
    }
    return 0;
}