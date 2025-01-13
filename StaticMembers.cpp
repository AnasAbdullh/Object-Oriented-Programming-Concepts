#include <iostream>
using namespace std;
class clsAddress
{
  
public : 

  static int Counter  ;
  clsAddress() {
    Counter++;
    cout << "Anas" << endl;
  }
  
  ~clsAddress() {
    cout << "gmail" << endl;
  }
  
  void anas () const {
    cout << "ggg" << endl;
  }
 // void Cpp() const {cout << "V" << endl;}

};

void fun() { 
  
  clsAddress  Add ;
 
}

int clsAddress::Counter = 0;

int main()
{
   // fun();
  // cout << "-hhgb" << endl;
  clsAddress  Add ;
  
  // cout << "Hgsgs" << endl;
  Add.anas();
  cout << Add.Counter << endl;
  Add.anas();
  cout << Add.Counter << endl;
  clsAddress  Add2;
  Add2.anas();
  cout << Add.Counter << endl;
   
   // system("read");
  return 0;
}
