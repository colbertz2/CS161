// TEST MAIN FILE FOR THE LIBRARY, PATRON, and BOOK CLASSES

// Includes
#include "Library.hpp"
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

void printBookInfo(Book*);
void printPatronInfo(Patron*);
void printInfo(string pID, string bID, Library lib);

int main()
{
    // Given test code
    Book b1("123", "War and Peace", "Tolstoy");
    Book b2("234", "Moby Dick", "Melville");
    Book b3("345", "Phantom Tollbooth", "Juster");

    // Zach test code
    // Book* bookShelf[] = {&b1, &b2, &b3};
    // for (Book* chkBook : bookShelf)
    // {
    //     printBookInfo(chkBook);
    // }

    // Given
    Patron p1("abc", "Felicity");
    Patron p2("bcd", "Waldo");

    // Test
    // Patron *bookClub[] = {&p1, &p2};
    // for (Patron* chkPatron : bookClub)
    // {
    //     printPatronInfo(chkPatron);
    // }

    // Given
    Library lib;
    lib.addBook(&b1);
    lib.addBook(&b2);
    lib.addBook(&b3);
    lib.addPatron(&p1);
    lib.addPatron(&p2);

    cout << lib.checkOutBook("abc", "123") << endl;

    printInfo("abc", "123", lib);

    lib.incrementCurrentDate();

    cout << lib.requestBook("bcd", "123") << endl;

    printInfo("abc", "123", lib);

    for (int i = 0; i < 21; i++)
    {
        lib.incrementCurrentDate();
    }

    cout << lib.returnBook("123") << endl;
    cout << lib.checkOutBook("abc", "123") << endl;
    cout << lib.checkOutBook("bcd", "123") << endl;

    printInfo("abc", "123", lib);

    lib.incrementCurrentDate();

    cout << lib.payFine("abc", 0.2) << endl;

    printInfo("abc", "123", lib);

    // Test
    // for (Book* chkBook : bookShelf)
    // {
    //     printBookInfo(lib.getBook((*chkBook).getIdCode()));
    // }

    // for (Patron* chkPatron : bookClub)
    // {
    //     printPatronInfo(lib.getPatron((*chkPatron).getIdNum()));
    // }

    // printInfo("bcd", "234", lib);

    // lib.checkOutBook("bcd", "234");

    // printInfo("bcd", "234", lib);

    // for (int i=0; i<7; i++)
    // {
    //     lib.incrementCurrentDate();
    // }

    // printInfo("bcd", "234", lib);

    // lib.checkOutBook("bcd", "123");
    // lib.checkOutBook("abc", "345");

    // // printInfo("bcd", "234", lib);
    // // printInfo("bcd", "123", lib);
    // // printInfo("abc", "345", lib);

    // for (int i=0; i<24; i++)
    // {
    //     lib.incrementCurrentDate();
    // }

    // printInfo("bcd", "234", lib);

    // lib.payFine("bcd", 0.4);
    // double p1Fine = p1.getFineAmount();
    // double p2Fine = p2.getFineAmount();

    return 0;
}

void printBookInfo(Book* chkBook)
{
    cout << "\n" << endl;
    cout << "--Checkout Length: " << (*chkBook).getCheckOutLength() << endl;
    cout << "--ID Code: " << (*chkBook).getIdCode() << endl;
    cout << "--Title: " << (*chkBook).getTitle() << endl;
    cout << "--Author: " << (*chkBook).getAuthor() << endl;
    cout << "--Location: ";
    // cout << (*chkBook).getLocation();
    switch ((*chkBook).getLocation())
    {
        case 0:
            cout << "ON_SHELF";
            break;
        
        case 1:
            cout << "ON_HOLD_SHELF";
            break;

        case 2:
            cout << "CHECKED_OUT";
            break;
    }
    cout << endl;

    if ((*chkBook).getCheckedOutBy() != nullptr)
    {
        cout << "--Checked Out By: " << (*(*chkBook).getCheckedOutBy()).getName() << endl;
    }

    if ((*chkBook).getRequestedBy() != nullptr)
    {
        cout << "--Requested By: " << (*(*chkBook).getRequestedBy()).getName() << endl;
    }

    if ((*chkBook).getCheckedOutBy() != nullptr)
    {
        cout << "--Date Checked Out: " << (*chkBook).getDateCheckedOut() << endl;
    }

    cout << "\n" << endl;
}

void printPatronInfo(Patron* chkPatron)
{
    cout << "\n" << endl;
    cout << "--ID Number: " << (*chkPatron).getIdNum() << endl;
    cout << "--Name: " << (*chkPatron).getName() << endl;
    cout << "--Fines: " << (*chkPatron).getFineAmount() << endl;
    cout << "--Checked Out Books: ";
    for (Book* chkBook : (*chkPatron).getCheckedOutBooks())
    {
        cout << (*chkBook).getIdCode() << ", ";
    }
    cout << "\n" << endl;
}

void printInfo(string pID, string bID, Library lib)
{
    printPatronInfo(lib.getPatron(pID));
    printBookInfo(lib.getBook(bID));
}