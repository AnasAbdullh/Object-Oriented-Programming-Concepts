#include <iostream>
using namespace std;

class SumNumber
{
private :
    int _ID = 5;
    int _NumberOne;
    int _NumberTwo;

public :

    int ID() {

        return _ID;
    }

    // set Number 1
    void setNumberOne(int Number1) {

        _NumberOne = Number1;
    }
    // set Number 2
    void setNumberTwo(int Number2) {

        _NumberTwo = Number2;
    }
    // Get Number 1
    int GetNumberOne() {

        return _NumberOne;
    }
    // Get Number 2
    int GetNumberTwo() {

        return _NumberTwo;
    }

    void Sum() {
        cout << _NumberOne + _NumberTwo << endl;
    }

};

int main()
{
    SumNumber Number;
    Number.setNumberOne(4);
    Number.setNumberTwo(5);

    Number.Sum();

    cout << Number.GetNumberOne() << endl;
    cout << Number.GetNumberTwo() << endl;
    cout << Number.ID() << endl;

    return 0;
}
