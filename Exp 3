#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    Student() {
        name = "Rishabh";
        cout << "Default Constructor" << endl;
    }

    Student(string n) {
        name = n;
        cout << "Parameterized Constructor" << endl;
    }

    Student(Student &s) {
        name = s.name;
        cout << "Copy Constructor" << endl;
    }

    ~Student() {
        cout << "Destructor" << endl;
    }
};

int main() {
    Student s1;
    cout << "Name " << s1.name << endl;

    Student s2("Kaustubh");
    cout << "Name " << s2.name << endl;

    Student s3(s2);
    cout << "Name " << s3.name << endl;

    Student s4(s1);
    cout << "Name " << s4.name << endl;

    return 0;
}
