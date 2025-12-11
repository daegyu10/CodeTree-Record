#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str_a;
    string str_b;
    cin >> str_a >> str_b;

    string trans_a;
    string trans_b;
    for(int i = 0; i < str_a.length(); i++) {
        if('0' <= str_a[i] && str_a[i] <= '9') {
            trans_a += str_a[i];
        } else {
            break;
        }
    }

    for(int i = 0; i < str_b.length(); i++) {
        if('0' <= str_b[i] && str_b[i] <= '9') {
            trans_b += str_b[i];
        } else {
            break;
        }
    }

    cout << stoi(trans_a)+stoi(trans_b);
    
    return 0;
}