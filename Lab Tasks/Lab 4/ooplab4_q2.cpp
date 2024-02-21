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
    Book() : name(""), author(""), isbn(""), totalPages(1000), pagesRead(0) {}

    // Setter methods
    void setName(const string& newName) { name = newName; }
    void setAuthor(const string& newAuthor) { author = newAuthor; }
    void setIsbn(const string& newIsbn) { isbn = newIsbn; }
    void setTotalPages(int newTotalPages) { totalPages = newTotalPages; }

    // Method to update pages read
    void updatePagesRead(int pages) {
        pagesRead += pages;
        if (pagesRead <= totalPages)
            cout << "You have read " << pagesRead << " out of " << totalPages << " pages." << endl;
        if (pagesRead == totalPages) {
            cout << "You have finished the book." << endl;
        } else if (pagesRead > totalPages) {
            cout << "ERROR: There are only " << totalPages << " page(s) in the book." << endl;
        }
    }

    // Method to display book information
    void showBookInfo() {
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Total Pages: " << totalPages << endl;
        cout << "Pages Read: " << pagesRead << endl;
    }
};

int main() {
    Book defaultBook;
    defaultBook.showBookInfo();

    defaultBook.setName("Pride and Prejudice");
    defaultBook.setAuthor("Jane Austen");
    defaultBook.setIsbn("978-1612930343");
    defaultBook.setTotalPages(432);

    defaultBook.showBookInfo();

    defaultBook.updatePagesRead(50);
    defaultBook.updatePagesRead(430);
    defaultBook.updatePagesRead(1001);

    return 0;
}
