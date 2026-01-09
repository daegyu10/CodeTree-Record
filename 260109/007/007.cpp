#include <iostream>
using namespace std;

class Secret {
    public:
        string code;
        char location;
        int time;

        Secret(string code, char location, int time) {
            this->code = code;
            this->location = location;
            this->time = time;
        }
};

int main() {
    // Please write your code here.
    string a;
    char b;
    int c;
    cin >> a >> b >> c;
    Secret secret = Secret(a,b,c);
    cout << "secret code : " << secret.code << endl;
    cout << "meeting point : " << secret.location << endl;
    cout << "time : " << secret.time << endl;
    return 0;
}