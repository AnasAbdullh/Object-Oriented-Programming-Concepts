#include <iostream>
using namespace std;

class Base {
public:
    void BaseFunction() {
        cout << "Function in Base Class" << endl;
    }
};

class clsDerived : public Base {
public:
    void DerivedFunction() {
        cout << "Function in Derived Class" << endl;
    }
};

int main() {


    Base * base = new clsDerived;

    base ->BaseFunction();

    clsDerived * Derived = new Base;


    return 0;
}