#include <iostream>
using namespace std;
#include <algorithm>

class Person {
    public:
        string name;
        int length;
        float weight;
        Person(string name, int length, float weight) {
            this->name = name;
            this->length = length;
            this->weight = weight;
        }

        Person() {}
};

bool cmd(Person a, Person b) {
    return a.name < b.name;
}

bool cmd2(Person a, Person b) {
    return a.length > b.length;
}

int main() {
    // Please write your code here.
    Person persons[5];

    for(int i = 0; i < 5; i++) {
        string name1;
        int a;
        float b;
        cin >> name1 >> a >> b;
        persons[i] = Person(name1,a,b);
    }

    cout << fixed;
    cout.precision(1);

    sort(persons, persons+5, cmd);
    cout << "name" << endl;
    for(int i =0; i < 5; i++) {
        cout << persons[i].name << " " << persons[i].length << " " << persons[i].weight << endl;
    }

    cout << endl;
    sort(persons, persons+5, cmd2);
    cout << "height" << endl;
    for(int i =0; i < 5; i++) {
        cout << persons[i].name << " " << persons[i].length << " " << persons[i].weight << endl;
    }

    return 0;
}