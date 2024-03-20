/*
Name: Arwa Feroze
ID: 23k-0022
Lab 6 Task 5
*/

#include <iostream>
#include <string>
using namespace std;

class course{

    string ccode;
    string cname;
    int hrs;

    public:

    //constructor/member initializer
    course(string name, string code, int hours) : cname(name), ccode(code), hrs(hours){}

    string getCCode(){
        return ccode;
    }

    string getCName(){
        return cname;
    }

    int getHrs(){
        return hrs;
    }
};

class student{
    course *courses[10];
    int currentCourses = 0;
    string sID;
    string sname;

    public:
    student(string name, string ID) : sID(ID), sname(name){}

    void enroll(course& c) {
        if (currentCourses < 10) {
            courses[currentCourses++] = &c;
        }
        else {
            cout << "Cannot enroll more courses. Maximum limit reached." << endl;
        }
    }

    void drop(course &c){

    bool courseFound = false;

    for (int i = 0; i < currentCourses; i++){

        if (courses[i]->getCCode() == c.getCCode()){
            for (int j = i; j < currentCourses - 1; j++){
                courses[j] = courses[j + 1];
            }

            cout << "Course removed successfully." << endl;
            courseFound = true;
            currentCourses--;
            break;
        }
    }

    if (!courseFound) {
        cout << "Unable to remove course." << endl;
    }
}

    
    int getCredHrs(){

        int totalHrs = 0;
        for (int i = 0; i < currentCourses; ++i){
            totalHrs += courses[i]->getHrs();
        }

        return totalHrs;
    }

    void printEnrolled(){
        cout << "Current Courses: " << endl;

        for (int i = 0; i<currentCourses; ++i){
            cout << "Course " << i+1 << " : " << endl;
            cout << courses[i]->getCCode() << " | " << courses[i]->getCName() << " | Credit Hours: " << courses[i]->getHrs() << endl;
        }
    }

};

int main(){

    course c1("EW Th", "Sl1003", 2);
    course c2("OOP Th", "CS0004", 3);
    course c3("DLD Th", "EE3762", 3);

    student s1("Arwa Feroze", "23K-0022");
    s1.enroll(c1); 
    s1.enroll(c2);
    s1.enroll(c3);

    cout <<"After enrolling all courses and before dropping any: " << endl;
    s1.printEnrolled();
    cout << "Total Credit Hours: " << s1.getCredHrs() << endl;

    s1.drop(c1);

    cout << "After dropping 1 course: " << endl;
    s1.printEnrolled();
    cout << "Total Credit Hours: " << s1.getCredHrs() << endl;

    return 0;


}
