/*
Name: Arwa Feroze
ID: 23k-0022
Lab 5 Task 5
*/

#include <iostream>
#include <string>
using namespace std;

class engine{
    public:
    string model;
    int year;

    engine(string model, int year){
        this->model = model;
        this->year = year;
    }
};

class wheels{
    public:
    int size;
    wheels(int size){
        this->size = size;
    }
};

class steering{
    public:
    int smoothness;

    steering(int smoothness = 0){
        this->smoothness = smoothness;
    }
};

class headlights{
    public:
    int brightness;
    string model;

    headlights(int brightness = 0, string model = ""){
        this->brightness = brightness;
        this->model = model;
    }
};

class car{
    string model;
    int id;
    engine *e;
    wheels *w;
    steering s;
    headlights h;

    public:
    car(string model, int id, engine *e, wheels *w, int steeringSmoothness, int lightsBrightness, string lightsModel){

        this->model = model;
        this->id = id;
        this->e = e;
        this->w = w;
        s.smoothness = steeringSmoothness;
        h.brightness = lightsBrightness;
        h.model = lightsModel;

    }

    void displayCar(){
        cout << "Car Model: " << model << endl;
        cout << "Car id: " << id << endl;
        cout << "Engine Model: " << e->model << endl;
        cout << "Engine Year: " << e->year << endl;
        cout << "Wheel Size: " << w->size << endl;
        cout << "Steering Smoothness Level:  " << s.smoothness << endl;
        cout << "Headlights Model: " << h.model <<endl;
        cout << "Headlights Brightness Level: " << h.brightness <<endl;
    }

};

int main(){

    engine e("newestX", 2000);
    wheels w(10);
    car firstcar("Corolla", 534, &e, &w, 5, 10, "RGB");

    firstcar.displayCar();

    return 0;
}


