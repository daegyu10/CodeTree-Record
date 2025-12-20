#include <iostream>

using namespace std;

bool IsOdd(int n) {
    bool exist = true;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            exist = false;
        }
    }
    return exist;
}

int Sumnum(int n) {
    int count = 0;
    while(n > 0) {
        count += n % 10;
        n /= 10;
    }
    
    return count;
}

int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    int count_n = 0;
    for(int i = a; i <= b; i++) {
        if(IsOdd(i)) {
            if(Sumnum(i) % 2 == 0) {
                count_n++;
            }
        }
    }
    cout << count_n;
    return 0;
}