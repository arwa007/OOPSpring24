/*
Name: Arwa Feroze
ID: 23k-0022
Lab 6 Task 3
*/

#include <iostream>
using namespace std;

class appointment{

    string appt_type;
    static int appts;
    static float earnings;
    
    public:

    appointment(string appt_type, float serviceCost)
     {
            this->appt_type = appt_type;
            appts++;
            earnings += serviceCost;

    }

    void changeAppointment(string appt_type){

        this->appt_type = appt_type;
    }

    static float calculateAverageCost(){

        if (appts == 0)
            return 0;
        float average = earnings/appts;
        return average;
    }
};

int appointment::appts = 0;
float appointment::earnings = 0;

int main(){

    appointment a1("Hair cut", 25.0);
    appointment a2("Mani Pedi", 50.5);
    appointment a3("Facial", 10);

    cout <<"The average cost of an appoinment is $" << appointment::calculateAverageCost() << "." << endl;

    return 0;

}