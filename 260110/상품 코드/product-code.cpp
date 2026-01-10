#include <iostream>
using namespace std;

class Product {
    public:
        string name;
        int code;

        Product(string name, int code) {
            this->name = name;
            this->code = code;
        }

        Product() {}
};

int main() {
    // Please write your code here.
    string name1;
    int code1;

    Product product1 = Product();
    product1.name = "codetree";
    product1.code = 50;

    cin >> name1 >> code1;
    Product product2 = Product(name1, code1);
    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name;
    return 0;
}