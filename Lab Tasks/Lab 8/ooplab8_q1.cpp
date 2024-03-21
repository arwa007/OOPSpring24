/*
Name: Arwa Feroze
ID: 23k-0022
Lab 6 Task 1
*/

#include <iostream>
#include <string>
using namespace std;

class book{
    string title;
    string author;
    string publisher;

    public:
    book(string title, string author, string publisher) : title(title), author(author), publisher(publisher) {}

    void displayBook(){
        cout <<"\nBook Details: " << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class fictionBook : protected book{
    string genre;
    string protagonist;
    
    public:
    fictionBook (string title, string author, string publisher, string genre, string protagonist) : book(title, author, publisher), genre(genre), protagonist(protagonist){}
    
    void displayFiction(){
        displayBook();
        cout << "Type: Fiction" << endl;
        cout << "Genre: " << genre << endl;
        cout << "Protagonist: " << protagonist << endl;
    }
};

int main(){

    fictionBook book1("Harry Potter", "J.K.Rowling", "Penguin", "Fantsasy", "Harry Potter");
    book1.displayFiction();
    
    return 0;
}
