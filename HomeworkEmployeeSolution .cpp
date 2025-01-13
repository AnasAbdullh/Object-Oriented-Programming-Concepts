#include <iostream>
#include <string>
using namespace std;
class clsEmployee
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    double  _Salary;
    string _Department;
    string _Phone;
    

public:

    clsEmployee(int ID,string FisrtName,string LastName,string Email,string Phone,string Title ,double  Salary ,string Department) {
        _ID = ID;
        _FirstName = FisrtName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
        _Department = Department;
        _Salary = Salary;
        _Title = Title;
    }

    int ID() {
        return _ID;
    }

    void setFirstName(string firstName) {
        _FirstName = firstName;
    }

    string FirstName() {
      return   _FirstName ;
    }

    void setLastName(string LastName) {
        _LastName = LastName;
    }

    string LastName() {
        return _LastName;
    }

    void setEmail(string Email) {
        _Email = Email;
    }

    string Email() {
        return _Email ;
    }

    void setPhone(string Phone) {
        _Phone = Phone;
    }

    string Phone() {
        string _Phone;
    }
    
    void setTitle(string Title) {
      _Title = Title;
    }

    string Title() {
        return _Title;
    }
    
    void setSalary(double  salary) {
      _Salary = salary;
    }
    
    double Salary() {
      return _Salary;
    }
    
    void setDeparment(string Deparment) {
      _Department = Deparment;
    }
    
    string Department() {
      return _Department;
    }
    
    string FullName() {
      return (_FirstName + " " + _LastName);
    }
    

    void Print() {
        cout << "\n";
        cout << "Info" << endl;

        cout << "___________________________" << endl;

        cout << "ID         :" << _ID << endl;
        cout << "FirstName  :" << _FirstName << endl;
        cout << "LastName   :" << _LastName << endl;
        cout << "Email      :" << _Email << endl;
        cout << "Phone      :" << _Phone << endl;
        cout << "full Name  :" << FullName() << endl;
        cout << "\n";

        cout << "___________________________" << endl;
        
    }
    
    void SendEmail(string Subject,string Message) {
        cout << "The following message sent successfully to email: " << _Email << endl;
        cout << "Subject :" << Subject << endl;
        cout << "Body :" << Message << endl;
        cout << "\n";

    }

    void SendSMS(string SMS) {
        cout << "The following SMS sent successfully to phone: " << _Phone << endl;
        cout << SMS << endl;
    }

};

int main()
{
    clsEmployee Employee(10,"Anas","Abdallah","anasabdlhaod@gmail.com","77476232","Aden",50000,"CS");
    Employee.Print();

    Employee.SendEmail("Hi","How are you?");
    Employee.SendSMS("How are you ?");

    system("read");


    return 0;
}