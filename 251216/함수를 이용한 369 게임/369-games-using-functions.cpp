#include <iostream>

using namespace std;

bool Threemuldetect(int n) {
    string num = to_string(n);
    bool exist = false;
    for(int i = 0; i < num.length(); i++) {
        if(num[i] == '3' || num[i] == '6' || num[i] == '9') {
            exist = true;
        }
    }
    return exist;
}

bool Isthreemul(int n) {
    return n % 3 == 0 || Threemuldetect(n);
}

int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    int min;
    int max;
    if(a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    int count = 0;
    for(int i = min; i <= max; i++) {
        if(Isthreemul(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}