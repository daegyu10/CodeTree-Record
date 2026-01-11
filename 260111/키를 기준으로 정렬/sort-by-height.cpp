#include <iostream>
#include <algorithm>
using namespace std;

class Info {
    public:
        string name;
        int length;
        int weight;

        Info(string name, int length, int weight) {
            this->name = name;
            this->length = length;
            this->weight = weight;
        }

        Info() {}
};

bool cmd(Info a, Info b) {
    return a.length < b.length;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Info infos[n];

    string name1;
    int length1, weight1;

    for(int i = 0; i < n; i++) {
        cin >> name1 >> length1 >> weight1;
        infos[i] = Info(name1, length1, weight1);
    }

    sort(infos, infos+n, cmd);

    for(int i = 0; i < n; i++) {
        cout << infos[i].name << " " << infos[i].length << " " << infos[i].weight << endl;
    }
    return 0;
}