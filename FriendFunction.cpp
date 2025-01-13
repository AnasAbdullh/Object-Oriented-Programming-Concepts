#include <iostream>
using namespace std;

class clsMyInfo {
private:
    string FullName = "John Doe";
    short Age = 20;
    string Department = "CS";

    // Declare MyInformation as a friend function
    friend void MyInformation(clsMyInfo Info);
};

// Define the friend function
void MyInformation(clsMyInfo Info) {
    // Access private members of clsMyInfo
    cout << "Full Name: " << Info.FullName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Department: " << Info.Department << endl;

    // Modify private members if needed (modification is local to this function)
    Info.Age = 63;
    cout << "Modified Age (local): " << Info.Age << endl;
}

int main() {
    clsMyInfo myInfo;  // Object of clsMyInfo

    // Call the friend function
    MyInformation(myInfo);

    return 0;
}