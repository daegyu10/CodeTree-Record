#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str_a;
    string str_b;
    cin >> str_a >> str_b;
    
    int a = stoi(str_a+str_b);
    int b = stoi(str_b+str_a);

    cout << a+b;
    return 0;
}