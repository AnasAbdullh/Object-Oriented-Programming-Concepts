#include <iostream>
using namespace std;

class clsCaluclate
{
private :
    double _Number = 0;
    double _subNumber = 0;

    enum enCaluclate {enAdd = 1, enDivision = 2, enMultiplicat = 3, enSubtract = 4 };

    enCaluclate Type;
public :
    void Clear() {
        _Number = 0;
        _subNumber = 0;
    }

    void Add(double Number) {
        _subNumber = Number;
        Type = enAdd;
    }

    void Division(double Number) {

        if(Number == 0) {
            Number == 1;
        }
        _subNumber = Number;
        Type = enDivision;
    }

    void Multiplicat(double Number) {
        _subNumber = Number;
        Type = enMultiplicat;
    }

    void Subtract(double Number) {
        _subNumber = Number;
        Type = enSubtract;
    }

private :

    void GetSum() {

        _Number = (_Number + _subNumber);

    }

    void GetDivision() {

        _Number = (_Number / _subNumber);

    }

    void GetMultiplicat() {
        _Number =  (_Number * _subNumber);

    }

    void GetSubtract() {
        _Number =  (_Number - _subNumber);

    }
public :

    void PrintResult() {
        switch(Type) {
        case enAdd : {
            GetSum();
            cout << "Result After Adding " << _subNumber << " is: " << _Number << endl;
            break;
        }
        case enDivision : {
            GetDivision();
            cout << "Result After Division " << _subNumber << " is: " << _Number << endl;
            break;
        }
        case enMultiplicat : {
            GetMultiplicat();
            cout << "Result After Multiplicat " << _subNumber << " is: " << _Number << endl;
            break;
        }
        case enSubtract : {
            GetSubtract();
            cout << "Result After Subtract " << _subNumber << " is: " << _Number << endl;
            break;
        }
        }
    }

    void GetFinallyResult() {
        cout << "Result finally is :" << _Number << endl;
    }

};

int main() {

    clsCaluclate Calculator;
    Calculator.Add(10);
    Calculator.PrintResult();
    Calculator.Add(30);
    Calculator.PrintResult();
    Calculator.Division(2);
    Calculator.PrintResult();
    Calculator.Clear();
    Calculator.Add(10);
    Calculator.PrintResult();
    Calculator.GetFinallyResult();

    return 0;
}
