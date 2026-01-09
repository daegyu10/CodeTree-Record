#include <iostream>
using namespace std;

class Level {
    public:
        string id;
        int level;

        Level(string id = "codetree", int level = 10) {
            this->id = id;
            this->level = level;
        }
};

int main() {
    // Please write your code here.
    string a;
    int b;
    cin >> a >> b;
    Level level1 = Level();
    Level level2 = Level(a,b);

    cout << "user " << level1.id << " lv " << level1.level << endl;
    cout << "user " << level2.id << " lv " << level2.level << endl;
    return 0;
}