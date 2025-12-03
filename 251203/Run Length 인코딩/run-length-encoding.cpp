#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    string str;
    int count = 1;
    
    str += A[0];
    if(A.length() == 1) {
        str += to_string(count);
    } else {
        for(int i = 0; i < A.length() - 1; i++) {
            if(A[i] == A[i+1]) {
                count++;
            } else if(A[i] != A[i+1]) {
                str += to_string(count);
                count = 1;
                str += A[i+1];
            }
            if(i == A.length() -2) {
             str += to_string(count);
            }
        }
    }
    

    cout << str.length() << endl << str;
    return 0;
}
