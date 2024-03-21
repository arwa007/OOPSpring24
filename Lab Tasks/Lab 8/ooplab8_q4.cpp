/*
Name: Arwa Feroze
ID: 23k-0022
Lab 8 Task 4
*/

#include <iostream>
#include <string>
using namespace std;

class person{

    protected:
    int age;
    string name;

    public:
    person(int age, string name) : age(age), name(name) {}

    void displayPerson(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person {

    protected:
    string sID;
    int gLevel;

    public:
    student(string name, int age, string sID, int gLevel) : person(age, name), sID(sID), gLevel(gLevel) {}

    void displayStudent(){
        cout << "\nStudent Details: " << endl;
        displayPerson();
        cout << "Student ID: " << sID << endl;
        cout << "Grade Level: " << gLevel << endl;
    }

};

class teacher : public person{

    protected:
    string subject;
    int room;

    public:
    teacher(string name, int age, string sub, int room) : person(age, name), subject(sub), room(room) {} 
    
    void displayTeacher(){
        cout << "\nTeacher Details: " << endl;
        displayPerson();
        cout <<"\nSubject: " << subject <<endl;
        cout <<"\nRoom Number: " << room << endl;
    }

};

class grad : public student, public teacher {

    protected:
    int months;

    public:
    grad(string name, int age, string sID, int gLevel, string sub, int room, int months) : student(name, age, sID, gLevel), teacher(name, age, sub, room), months(months) {}
    
    void displayGrad(){

        cout << "\nGraduate: " << endl;

        displayStudent();
        displayTeacher();

        cout << "Months of Internship: " << months << endl;
    }
};

int main (){

    grad g1("Muneer", 21, "20k-0001", 3, "Programming Fundamentals", 5, 6);

    g1.displayGrad();

    return 0;
}
