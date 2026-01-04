#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b) / gcd(a,b);
}

int GetNum(int index) {
    if(index == n-1) {
        return arr[index];
    }

    return lcm(GetNum(index+1), arr[index]);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << GetNum(0);
    return 0;
}