#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int size;
    int target;
    int save;
    int count = 0;

    cin >> size >> target;

    for(int i = 0; i < size; i++) {
        cin >> save;
        if(save == target) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}