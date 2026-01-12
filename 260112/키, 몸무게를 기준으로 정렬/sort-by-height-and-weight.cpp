#include <iostream>
using namespace std;
#include <algorithm>

class Person {
    public:
        string name;
        int height;
        int weight;

        Person(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Person() {}
};

bool cmd(Person a, Person b) {
    if(a.height == b.height) {
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Person persons[n];
    for(int i = 0; i < n; i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        persons[i] = Person(name, height, weight);
    }

    sort(persons, persons+n, cmd);
    for(int i = 0; i < n; i++) {
        cout << persons[i].name << " " << persons[i].height << " " << persons[i].weight << endl;
    }
    return 0;
}