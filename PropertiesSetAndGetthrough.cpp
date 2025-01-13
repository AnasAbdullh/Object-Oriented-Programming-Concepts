#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string firstName; // متغير خاص (private)

public:
    // تعريف الخاصية باستخدام __declspec
    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;

    // دالة getter لإرجاع قيمة firstName
    string GetFirstName() const {
        return firstName;
    }

    // دالة setter لتعيين قيمة لـ firstName
    void SetFirstName(string name) {
        firstName = name;
    }
};

int main() {
    Person person;

    // تعيين قيمة للخاصية FirstName (سيتم استدعاء SetFirstName)
    person.FirstName = "Anas";

    // قراءة قيمة الخاصية FirstName (سيتم استدعاء GetFirstName)
    cout << "First Name: " << person.FirstName << endl;

    return 0;
}