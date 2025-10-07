#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;

    cin >> a;
    int array[a];

    for(int i = 0; i < a; i++) {
        cin >> array[i];
        
        array[i] = array[i]*array[i];
        cout << array[i] << " ";
    }

    
    
    return 0;
}