/*********************************************************************
** Author: Zach Colbert
** Date: 30 November 2017
** Description: Library class
*********************************************************************/

/*********************************************************************
** Includes
*********************************************************************/

#include "Library.hpp"



/*********************************************************************
** Description:
*********************************************************************/
Library::Library()
{
    // Initialize the relative date of the library
    currentDate = 0;

}


/*********************************************************************
** Description:
*********************************************************************/
void Library::addBook(Book* newBook)
{
    // vector::push_back will add Book* to the end of the vector
    holdings.push_back(newBook);
}


/*********************************************************************
** Description:
*********************************************************************/
void Library::addPatron(Patron* newPatron)
{
    // vector::push_back will add Patron* to the end of the vector
    members.push_back(newPatron);
}


/*********************************************************************
** Description:
*********************************************************************/
std::string Library::checkOutBook(std::string pID, std::string bID)
{
    // if the specified Book is not in the Library, return "book not found"

    Book* chkBook = getBook(bID);

    if (chkBook == nullptr)
    {
        return "book not found";
    }

    // if the specified Patron is not in the Library, return "patron not found"

    Patron* chkPatron = getPatron(pID);

    if(chkPatron == nullptr)
    {
        return "patron not found";
    }

    // if the specified Book is already checked out, return "book already checked out"
    if ((*chkBook).getCheckedOutBy() != nullptr)
    {
        return "book already checked out";
    }

    // if the specified Book is on hold by another Patron, return "book on hold by other patron"
    if ((*chkBook).getRequestedBy() != nullptr)
    {
        return "book on hold by other patron";
    }

    // otherwise update the Book's checkedOutBy, dateCheckedOut and Location; if the Book was on hold for this Patron, update requestedBy; update the Patron's checkedOutBooks; return "check out successful"
    (*chkBook).setCheckedOutBy(chkPatron);
    (*chkBook).setDateCheckedOut(currentDate);
    (*chkBook).setLocation(CHECKED_OUT);

    if ((*chkBook).getRequestedBy() == (*chkBook).getCheckedOutBy())
    {
        (*chkBook).setRequestedBy(nullptr);
    }

    (*chkPatron).addBook(chkBook);

    return "check out successful";

}


/*********************************************************************
** Description:
*********************************************************************/
std::string Library::returnBook(std::string bID)
{
    // if the specified Book is not in the Library, return "book not found"
    Book* chkBook = getBook(bID);

    if (chkBook == nullptr)
    {
        return "book not found";
    }

    // if the Book is not checked out, return "book already in library"
    if ((*chkBook).getCheckedOutBy() == nullptr)
    {
        return "book already in library";
    }

    // update the Patron's checkedOutBooks; update the Book's location depending on whether another Patron has requested it; update the Book's checkedOutBy; return "return successful"
    (*(*chkBook).getCheckedOutBy()).removeBook(chkBook);
    
    // If the book is not on hold, location goes to ON_SHELF
    if ((*chkBook).getRequestedBy() == nullptr)
    {
        (*chkBook).setLocation(ON_SHELF);
    }
    // Otherwise, it is on hold and goes to ON_HOLD_SHELF
    else
    {
        (*chkBook).setLocation(ON_HOLD_SHELF);
    }

    (*chkBook).setCheckedOutBy(nullptr);

    return "return successful";

}


/*********************************************************************
** Description:
*********************************************************************/
std::string Library::requestBook(std::string pID, std::string bID)
{
    // if the specified Book is not in the Library, return "book not found"
    Book* chkBook = getBook(bID);

    if (chkBook == nullptr)
    {
        return "book not found";
    }

    // if the specified Patron is not in the Library, return "patron not found"
    Patron* chkPatron = getPatron(pID);

    if (chkPatron == nullptr)
    {
        return "patron not found";
    }

    // if the specified Book is already requested, return "book already on hold"
    if ((*chkBook).getRequestedBy() != nullptr)
    {
        return "book already on hold";
    }

    // update the Book's requestedBy; if the Book is on the shelf, update its location to on hold; return "request successful"
    (*chkBook).setRequestedBy(chkPatron);
    
    if ((*chkBook).getLocation() == ON_SHELF)
    {
        (*chkBook).setLocation(ON_HOLD_SHELF);
    }

}


/*********************************************************************
** Description:
*********************************************************************/
std::string Library::payFine(std::string pID, double payment)
{
    // takes as a parameter the amount that is being paid (not the negative of that amount)
    if (payment < 0)
    {
        return "invalid payment amount";
    }

    // if the specified Patron is not in the Library, return "patron not found"
    Patron* chkPatron = getPatron(pID);

    if (chkPatron == nullptr)
    {
        return "patron not found";
    }

    // use amendFine to update the Patron's fine; return "payment successful"
    (*chkPatron).amendFine(-1.0 * payment);

    return "payment successful";

}


/*********************************************************************
** Description:
*********************************************************************/
void Library::incrementCurrentDate()
{
    currentDate++;

    // For each patron of the library
    for (Patron* chkPatron : members)
    {
        // For each of the patron's checked out books
        for (Book* chkBook : (*chkPatron).getCheckedOutBooks())
        {
            // If the book is overdue
            if (currentDate - (*chkBook).getDateCheckedOut() > 21)
            {
                // Add a 10 cent fine
                (*chkPatron).amendFine(0.1);
            }
        }
    }
}


// Description
Patron* Library::getPatron(std::string pID)
{
    bool patronFound = false;
    int patronIndex = -1;

    for (Patron* chkPatron : members)
    {
        patronIndex++;
        if ((*chkPatron).getIdNum() == pID)
        {
            patronFound = true;
            break;
        }
    }

    if (patronFound == false)
    {
        return nullptr;
    }
    else
    {
        return members[patronIndex];
    }
}


// Description
Book* Library::getBook(std::string bID)
{
    bool bookFound = false;
    int bookIndex = -1;

    for (Book* chkBook : holdings)
    {
        bookIndex++;
        if ((*chkBook).getIdCode() == bID)
        {
            bookFound = true;
            break;
        }
    }

    if (bookFound == false)
    {
        return nullptr;
    }
    else
    {
        return holdings[bookIndex];
    }
}