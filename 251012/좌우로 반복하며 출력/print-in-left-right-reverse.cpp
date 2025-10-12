#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    int array[a][a];
    

    for(int i = 0; i < a; i++) {
        if(i % 2 != 0) {
            int count = a;
            for(int j = 0; j < a; j++) {
                cout << count;
                count--;
            }
            } else {
            int count = 1;
                for(int j = 0; j < a; j++) {
                    cout << count;
                    count++;
                }
         }
         cout << "\n";
        }
        
        return 0;

    }