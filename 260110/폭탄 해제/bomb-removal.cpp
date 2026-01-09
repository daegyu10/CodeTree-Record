#include <iostream>
using namespace std;

class Bomb {
    public:
        string code;
        char color;
        int second;
        Bomb(string code, char color, int second) {
            this->code = code;
            this->color = color;
            this->second = second;
        }
        Bomb() {}
};

int main() {
    // Please write your code here.
    string a;
    char b;
    int c;
    cin >> a >> b >> c;
    Bomb bomb1 = Bomb(a,b,c);
    cout << "code : " << bomb1.code << endl;
    cout << "color : " << bomb1.color << endl;
    cout << "second : " << bomb1.second;
    return 0;
}