#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int index_record = 0;
    int index = N;
    int count = 0;
    while(true) {
        count = 0;

        

        for(int i = 0; i < index; i++) {
            if(a[i] > count) {
                count = a[i];
                index_record = i;
            }
        }
        cout << index_record+1 << " ";
        index = index_record;
        if(index == 0) {
            return 0;
        }
    }
    

    return 0;
}
