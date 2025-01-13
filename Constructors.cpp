#include <iostream>
using namespace std;

class clsCaluclate
{
private :
    double _Result = 0;
    double _LastNumber  = 0;
    double _PreviousResult = 0;
    string _LastOperation = "clear";
    
    bool Is_Zero(int Number) {
      return (Number == 0);
    }
    
    

public :

    clsCaluclate(string Name) {
      
      cout << Name << endl;
    }

    void Add(double Number) {
        
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Number;
    }

    void Subtract(double Number) {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Number;
    }

    void Divide(double Number) {

        if(Is_Zero(Number)) {
            Number == 1;
        }
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Dividing";
        _Result /= Number;
    }

    void Multiply(double Number) {
         _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= Number;
    }
    
    void Clear() {
      
      _Result = 0;
      _LastNumber  = 0;
      _PreviousResult = 0;
      _LastOperation = "clear";
      
    }
    
    void CancelLastOperations() {
      
      _LastNumber = 0;
      _LastOperation = "Cancel last Operation";
      _Result = _PreviousResult;
    }

    void PrintResult() {
        cout << "result after " << _LastOperation << " " << _LastNumber << " is :" << _Result << endl;
    }

    double  GetFinallyResult() {
        return _Result;
    }

};

int main() {

    clsCaluclate Calculator("Anas");
    Calculator.Add(23);
    Calculator.PrintResult();
    Calculator.Subtract(20);
    Calculator.PrintResult();
    Calculator.CancelLastOperations();
    Calculator.PrintResult();
    
    

    return 0;
}
