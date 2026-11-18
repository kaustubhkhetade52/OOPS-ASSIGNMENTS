#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPersonDetails() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int roll_no;
    string course;

    void getStudentDetails() {
        cout << "Enter roll No: ";
        cin >> roll_no;

        cout << "Enter course: ";
        cin >> course;
    }

    void displayStudentDetails() {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Course: " << course << endl;
    }
};

class GraduateStudent : public Student {
public:
    string researchTopic;

    void getGraduateDetails() {
        cout << "Enter research topic: ";
        cin >> researchTopic;
    }

    void displayGraduateDetails() {
        displayPersonDetails();
        displayStudentDetails();
        cout << "Research Topic: " << researchTopic << endl;
    }
};

int main() {
    GraduateStudent gs;

    gs.getPersonDetails();
    gs.getStudentDetails();
    gs.getGraduateDetails();

    cout << "\n--- Graduate Student Details ---\n";
    gs.displayGraduateDetails();

    return 0;
}
