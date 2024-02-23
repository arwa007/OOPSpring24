/*
*Name: Arwa Feroze
*ID: 23k-0022
*/

#include <iostream>
using namespace std;

class smartphone{
    
    string brand;
    string model;
    int resol;
    int ram;
    int rom;
    int storage;

    public:

//getters/setters:

    string getBrand(){
        return brand;
    }

    void setBrand(string brand){
        this->brand = brand;
    }

    string getModel(){
        return model;
    }

    void setModel(string model){
        this->model = model;
    }

    int getResol(){
        return resol;
    }

    void setResol(int resol){
        this->resol = resol;
    }

    int getRam(){
        return ram;
    }

    void setRam(int ram){
        this->ram = ram;
    }
    int getRom(){
        return rom;
    }

    void setRom(int rom){
        this->rom = rom;
    }

    int getStorage(){
        return storage;
    }

    void setStorage(int storage){
        this->storage = storage;
    }

//Methods:

void makingCalls(string number){

    cout<<"Calling "<<number<<"..."<<endl;
}//end makingCalls

void sendingMsg(string number, string msg){

    cout<<"Messaging "<<number<<": "<<msg<<endl;
}//end sendingMsg

void connectWifi(string wifiName)
{
    cout<<"Connecting to Wifi "<<wifiName<<endl;
}//connectWifi

void browseNet(){

    cout<<"Browsing the Internet."<<endl;
}

};//end class

int main(){

    smartphone arwa;
    arwa.setBrand("Apple");
    arwa.setModel("X");
    arwa.setResol(1080);
    arwa.setRam(5);
    arwa.setRom(7);

    cout<<"Displaying SmartPhone attrubutes using Getters: "<<endl;
    cout<<"Brand: "<<arwa.getBrand()<<endl;
    cout<<"Model: "<<arwa.getModel()<<endl;
    cout<<"Resolution: "<<arwa.getResol()<<endl;
    cout<<"Ram: "<<arwa.getRam()<<endl;
    cout<<"Rom: "<<arwa.getRom()<<endl;

    arwa.makingCalls("03331234567");
    arwa.sendingMsg("03337654321", "Hey! How are you?");
    arwa.connectWifi("Fnajmee");
    arwa.browseNet();

    return 0;

}
