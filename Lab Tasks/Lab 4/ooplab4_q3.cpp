/*
* Name: Arwa Feroze
* ID: 23k-0022
*/

#include <iostream>
#include <string>

using namespace std;

class WeekDays{
    string Days[7];
    int CurrentDay;
    
    public:
    WeekDays(){
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
    }
    WeekDays(int today){
            CurrentDay = today%7;
       
        for (int i = 0; i < CurrentDay; ++i) {
            string temp = Days[0]; 

            for (int j = 0; j < 6; ++j) {
                Days[j] = Days[j + 1];
            }
    
           Days[5] = temp; 
        }
	}
    string GetCurrentDay(){
            return Days[0];
        }
    
    string GetNextDay(){
        return Days[1];
    }

    string GetPreviousDay(){
        return Days[6];
    }

    string GetNthDay(int n){
        int nth = (n+CurrentDay)%7;
        return Days[nth];
    }

    };


int main(){

    WeekDays day1(4);

    cout<<"Current Day: "<<day1.GetCurrentDay()<<endl;
    cout<<"Next day: "<<day1.GetNextDay()<<endl;
    cout<<"Previous Day: "<<day1.GetPreviousDay()<<endl;
    cout<<"Nth Day from Today: "<<day1.GetNthDay(9)<<endl;

    return 0;
}


