#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <iostream>
using namespace std;

class LibraryBook
{
private:
    int bookID;
    string title;
    string author;
    string borrowerName;
    int daysBorrowed;
    bool borrowed;

public:
    LibraryBook();
    LibraryBook(int id, string t, string a);
    ~LibraryBook();

    void setBookID(int id);
    void setTitle(string t);
    void setAuthor(string a);
    void setBorrowerName(string name);
    void setDaysBorrowed(int days);
    void setBorrowed(bool status);

    int getBookID();
    string getTitle();
    string getAuthor();
    string getBorrowerName();
    int getDaysBorrowed();
    bool getBorrowed();

    void borrowBook(string name, int days);
    void returnBook();
    double calculateFine();
    void displayBook();
};

#endif