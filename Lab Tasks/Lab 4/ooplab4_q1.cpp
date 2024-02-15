/*
* Name: Arwa Feroze
* ID: 23k-0022
*/

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string name;
    string author;
    string isbn;
    int totalPages;
    int pagesRead;

public:
    // Default constructor
    Book() : name(""), author(""), isbn(""), totalPages(0), pagesRead(0) {}

    // Parameterized constructor
    Book(string name, string author, string isbn, int totalPages)
        : name(name), author(author), isbn(isbn), totalPages(totalPages), pagesRead(0) {}

    // Method to update pages read
    void updatePagesRead(int pages) {
        pagesRead += pages;
        if (pagesRead <= totalPages)
        cout << "You have read " << pagesRead << " out of " << totalPages << " pages." << endl;
        if (pagesRead == totalPages) {
            cout << "You have finished the book." << endl;
        }else if (pagesRead > totalPages){
        	cout << "ERROR: There are only "<< totalPages <<" page(s) in the book."<< endl;
		}
    }
        

};

int main() {

    Book defaultBook;
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", "978-0743273565", 180);
    myBook.updatePagesRead(50); // Update pages read
    myBook.updatePagesRead(30); // Update pages read to finish the book
    myBook.updatePagesRead(101); //update pages read > total pages

    return 0;
}

