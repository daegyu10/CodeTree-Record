#include <iostream>
using namespace std;
#include <algorithm>

class Person {
    public:
        int length; 
        int weight;
        int num;
        Person(int length, int weight, int num) {
            this->length = length;
            this->weight = weight;
            this->num = num;
        }

        Person() {}
};

bool cmd(Person a, Person b) {
    if(a.length == b.length) {
        return a.weight > b.weight;
    }
    return a.length < b.length;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Person persons[n];
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        persons[i] = Person(a,b,i+1);
    }

    sort(persons, persons+n, cmd);

    for(int i = 0; i < n; i++) {
        cout << persons[i].length << " " << persons[i].weight << " " << persons[i].num << endl;
    }
    return 0;
}