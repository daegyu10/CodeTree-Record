#include <iostream>
using namespace std;
#include <algorithm>

class Info {
    public:
        string name;
        string address;
        string location;

        Info(string name, string address, string location) {
            this->name = name;
            this->address = address;
            this->location = location;
        }

        Info() {}
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Info infos[n];
    string names[n];
    
    string a;
    string b;
    string c;

    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        infos[i] = Info(a, b, c);
        names[i] = a;
    }

    string save_name;
    sort(names, names+n);
    save_name = names[n-1];

    for(int i = 0; i < n; i++) {
        if(infos[i].name == save_name) {
            cout << "name " << infos[i].name << endl;
            cout << "addr " << infos[i].address << endl;
            cout << "city " << infos[i].location;
        }
    }
    
    return 0;
}