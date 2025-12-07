#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    // Please write your code here.
    
    while(true) {
        if(A.find(B) != string::npos) {
            A.erase(A.find(B), B.length());
        } else {
            break;
        }
    }

    cout << A;
    return 0;
}
