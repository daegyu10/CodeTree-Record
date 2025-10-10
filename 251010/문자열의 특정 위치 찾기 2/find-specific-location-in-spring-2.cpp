#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a = "apple";
    string b = "banana";
    string c = "grape";
    string d = "blueberry";
    string e = "orange";

    char char1;
    int count = 0;

    cin >> char1;

    for(int i = 0; i < a.length(); i++) {
        if(a[2] == char1 || a[3] == char1) {
            count++;
            cout << a << "\n";
            break;
        }
    }

    for(int i = 0; i < b.length(); i++) {
        if(b[2] == char1 || b[3] == char1) {
            count++;
            cout << b << "\n";
            break;
        }
    }

    for(int i = 0; i < c.length(); i++) {
        if(c[2] == char1 || c[3] == char1) {
            count++;
            cout << c << "\n";
            break;
        }
    }

    for(int i = 0; i < d.length(); i++) {
        if(d[2] == char1 || d[3] == char1) {
            count++;
            cout << d << "\n";
            break;
        }
    }

    for(int i = 0; i < e.length(); i++) {
        if(e[2] == char1 || e[3] == char1) {
            count++;
            cout << e << "\n";
            break;
        }
    }

    cout << count;
    
    return 0;
}