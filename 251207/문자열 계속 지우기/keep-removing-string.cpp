#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    // Please write your code here.
    bool not_exist = false;
    int len_a = A.length();
    int len_b = B.length();

    while(not_exist != true) {
        bool found = false;
        for(int i = 0; i < len_a; i++) {
            if(A.substr(i,len_b) == B) {
                A.erase(i,len_b);
                len_a -= len_b;
                found = true;
            }
        }
        if(found == false) {
            break;
        }
    }

    cout << A;
    return 0;
}
