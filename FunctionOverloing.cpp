#include <iostream>
#include <string>
using namespace std;
class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Phone;
    string _Email;
    string _Subject;


public:
    clsPerson() {}

    clsPerson(int ID,string FisrtName,string LastName,string Email,string Phone) {
        _ID = ID;
        _FirstName = FisrtName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
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


    void Print() {
        cout << "\n";
        cout << "Info" << endl;

        cout << "___________________________" << endl;

        cout << "ID         :" << _ID << endl;
        cout << "FirstName  :" << _FirstName << endl;
        cout << "LastName   :" << _LastName << endl;
        cout << "Email      :" << _Email << endl;
        cout << "Phone      :" << _Phone << endl;
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

class clsEmployee : public clsPerson
{
private:

    string _Title;
    double  _Salary;
    string _Department;

public :

    clsEmployee(int ID,string FisrtName,string LastName,string Email,string Phone,string title,string Deparment,double Salary)
        : clsPerson(ID,FisrtName,LastName,Email,Phone) {

        _Title = title;
        _Salary = Salary;
        _Department = Deparment;

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

    void Print() {

        clsPerson::Print();

        cout << "Title      :" <<  _Title << endl;
        cout << "Department :" << _Department<< endl;
        cout << "Salay      :" << _Salary << endl;

    }


};

int main()
{

    clsEmployee Employee(30,"Anas","Abdallah","Anas@gma","774762326","Aden","CS",20000);
    Employee.Print();


    /*clsPerson Person1(10,"Anas","Abdallah","anasabdlhaod@gmail.com","77476232");
    Person1.Print();

    Person1.SendEmail("Hi","How are you?");
    Person1.SendSMS("How are you ?");*/

    system("read");


    return 0;
}
