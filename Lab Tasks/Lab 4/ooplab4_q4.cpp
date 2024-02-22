/*
Name: Arwa Feroze
ID: 23k-0022
*/
#include <iostream>
using namespace std;

class Office{

        string location;
        int capacity;
        string furniture[3];

    public:

     //member initialization
        Office(string address = "", int limit = 0, string furn1 = " ", string furn2 = " ", string furn3 = " ") : location(address), capacity(limit), furniture{furn1, furn2, furn3}{};
        

        int getCapacity(){
            return capacity;
        }

        string* getFurniture(){
            return furniture;
        }

        string getLocation(){
            return location;
        }

        void display()
		{
			cout<<"-------------------------------------------------"<<endl;
			cout<<"Location: "<<location<<endl;
			cout<<"Seating capacity: "<<capacity<<endl;
			cout<<"Furniture: "<<endl;
			for(int i =0; i<3; i++)
			{
				cout<<furniture[i]<<endl;
			}
			cout<<"-------------------------------------------------"<<endl;
		}
    };//end class

    int main(){

       
        Office o1("los angeles", 65, "desk", "table", "chair");

        Office o2("melbourne", 23);

        Office o3("new york");

        string* furnArray = o1.getFurniture();
        cout<<"Office 1 Furniture: "<<endl;
        for (int i = 0; i<3; i++){
            cout<<furnArray[i]<<endl;
        }

        o1.display();
        o2.display();
        o3.display();

    }//end main