#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[201][201] = {}; //최대 크기 200x200.
    int index = 100; //offset
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                arr[j+index][k+index] = 1;
            }
        }
    }

    int count = 0;
    for(int i = 0; i < 201; i++) {
        for(int j = 0; j < 201; j++) {
            if(arr[i][j] == 1) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}