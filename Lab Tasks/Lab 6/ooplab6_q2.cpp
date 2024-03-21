/*
Name: Arwa Feroze
ID: 23k-0022
Lab 6 Task 1
*/

#include <iostream>
#include <string>
using namespace std;

class image{

    int width;
    int height;
    int *data;

    public:
    //para cons
    image(int width, int height, int provData[]) : width(width), height(height) {
        
        data = new int[width*height];

        for(int i = 0; i < width*height; ++i)
            data[i] = provData[i];
        
    }

    //copy cons
    image(image& source){
        width = source.width;
        height = source.height;

        data = new int[width*height];

        for(int i = 0; i < width*height; ++i)
            data[i] = source.data[i];
    }        
        
        ~image(){
            delete [] data;
        }

        void display(){
            cout << "\nImage Data: " << endl;
            cout << "Width: " << width << "| Height: " << height <<endl;
            cout << "Pixel Data: " << endl;
            
            for(int i = 0; i < width*height; ++i)
                cout << "Pixel " << i+1 << ": " << data[i] << endl;
        }

        void updateData(){
            for(int i = 0; i < width*height; ++i){
                if (data[i] <= 0 ){
                    data[i] = rand() %255 +1;
                }
            }

            cout << "Data Updated Successfully!" << endl;
        }
    
};

int main(){

    int sampleData[6] = {230, 12, 354, 23, 1200, 4387};

    image m1(2, 3, sampleData);
    image m2(m1);

    cout << "Object 1: " << endl;
    m1.display();

    cout << "\nObject 2(Copied): " << endl;
    m2.display();

    cout << "\nDisplay after Update: " << endl;
    
    cout << "\nObject 1: " << endl;
     m1.updateData();
    m1.display();

    cout << "\nObject 2(Copied): " << endl;
    m2.updateData();
    m2.display();

    return 0;
}