#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char word[6] = { 'L', 'E', 'B', 'R', 'O', 'S'};
    int index = -1;
    char input;
    cin >> input;

    for(int i = 0; i < 6; i++) {
        if(word[i] == input) {
            index = i;
        }
    }

    if(index == -1) {
        cout << "None";
    } else {
        cout << index;
    }
    return 0;
}