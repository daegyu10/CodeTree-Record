#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int component;
    int query_num;
    cin >> component >> query_num;

    int query_type;
    int print_a;

    int find_b;

    int arr[component];
    for(int i = 0; i < component; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < query_num; i++) {
        cin >> query_type;
        if(query_type == 1) {
            cin >> print_a;
            cout << arr[print_a-1] << endl;
        } else if(query_type == 2) {
            cin >> find_b;
            int index = 0;

            for(int i = 0; i < component; i++) {
                if(arr[i] == find_b) {
                    index = i+1;
                    break;
                }
            }
            cout << index << endl;
        } else if(query_type == 3) {
            int start_c;
            int end_c;

            cin >> start_c >> end_c;
            for(int i = start_c-1; i <= end_c-1; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}