/*
Name: Arwa Feroze
ID: 23K-0022
*/

#include <iostream>
using namespace std;

class Calendar{

   string months[12][31];
   int year;

    public:
    //Constructor:

    Calendar(int year){
        this->year = year; 
    }

    //Functions:

    void AddTask(string task, int date, int month){

        months[month][date] = task;

    }//end AddTask

     void DelTask(int day, int month){

        months[month][day] = "";

    }//end DelTask

    void DisplayTasks(){
        
        cout<<"For year: "<<this->year<<endl;;
        for (int i = 0; i<12; ++i){
            cout<<"Month: "<<i+1<<endl;
            for (int j = 0; j<31; ++j){
                cout<<"Day: "<<j+1<<endl;
                cout<<"Tasks: "<<months[i-1][j-1]<<endl;
            }//end for j
            cout<<endl;
        }//end for i

    }//end DisplayTasks

};//end class

int main(){

    Calendar year23 (2023);

    year23.AddTask("Do OOP lab tasks", 15, 2);
    year23.AddTask("Call Doctor", 3, 5);
    year23.AddTask("Dinner with parents", 30, 4);
    year23.DisplayTasks();
    year23.DelTask(3, 5);
    year23.DisplayTasks();

    return 0;


}//end main