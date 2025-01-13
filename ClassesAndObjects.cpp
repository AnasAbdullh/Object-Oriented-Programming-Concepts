#include <iostream>
using namespace std;

class Anas {

public :

    void PrintName(const string & Name)
    {
        cout << Name << endl;
    }

    struct MyInfo
    {

        string Name;
        void  Print(const string & Name) {

            cout << Name << endl;
        }

    };

};

class Car
{

public:
    Anas MyAnas;
    Anas::MyInfo In;
    string Model;
    string Price;

};

int main() {

    Anas::MyInfo Info;
    Info.Print("Anas");
    Info.Name = "Anas";

    Anas anas;

    anas.PrintName(Info.Name);



    //  Car::Anas;

    Car car;
    car.Model = "Mar";
    car.MyAnas.PrintName("hhs");
    anas.PrintName(car.Model);
    car.In.Name = "Ahmed";
    cout << car.In.Name << endl;
    // Info.Print(car.In.Name);


    // system("pwd");

    system("cd ../.. && ls && cd compilers_root && ls && file * ");
    // system()


    return 0;
}
