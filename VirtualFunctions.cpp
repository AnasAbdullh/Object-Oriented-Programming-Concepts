#include <iostream>
using namespace std;

class Base {
public:
    virtual void BaseFunction() {
        cout << "Function in Base Class" << endl;
    }
};

class clsDerived : public Base {
public:
    void BaseFunction() {
        cout << "Function in Derived Class" << endl;
    }
};



int main() {


    Base * base = new clsDerived;
    base ->BaseFunction();


    return 0;
}
