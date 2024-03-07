/*
Name: Arwa Feroze
ID: 23k-0022
Lab 5 Task 1
*/
#include <iostream>
using namespace std;

class square{
    float sideLength;
    float area;
    static float allAreas;
    
    public:
    square(float sideLength){
        this->sideLength = sideLength;
    }

    void calculateArea(){
        area = sideLength*sideLength;
        allAreas += area;
    }

    float getSideLength(){
        return sideLength;
    }

    float getArea(){
        return area; 
    }

    float getAllAreas(){
        return allAreas;
    }

    void setArea(float area){
        this->area= area;
    }

    void setSidelength(float sideLength){
        this->sideLength = sideLength;
    }

    void setAllAreas(float allAreas){
        this->allAreas = allAreas;
    }
};

float square::allAreas = 0;

int main(){
    square square1(12.3);
    square square2(5.7);
    square square3(64.92);

    square1.calculateArea();
    cout<<"Square 1: \nArea: "<<square1.getArea()<<"\nAll Areas: "<<square1.getAllAreas()<<endl;

    square2.calculateArea();
    cout<<"Square 2: \nArea: "<<square2.getArea()<<"\nAll Areas: "<<square2.getAllAreas()<<endl;

    square3.calculateArea();
    cout<<"Square 3: \nArea: "<<square3.getArea()<<"\nAll Areas: "<<square3.getAllAreas()<<endl;
}