#include <iostream>

using namespace std;

void Numsqr(int n) {
    int count = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(count > 9) {
                count = 1;
            }
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int N;

int main() {
    cin >> N;

    // Please write your code here.
    Numsqr(N);
    return 0;
}