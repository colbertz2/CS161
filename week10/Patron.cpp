/*********************************************************************
** Author: Zach Colbert
** Date: 30 November 2017
** Description: Patron class
*********************************************************************/

/*********************************************************************
** Includes
*********************************************************************/

#include "Patron.hpp"


/*********************************************************************
** Description:
*********************************************************************/
Patron::Patron(std::string idn, std::string n)
{
    // Set patron ID number (manually, because we don't have a set function)
    idNum = idn;

    // Set patron name
    name = n;

    // Initialize fine amount to zero for new patrons
    fineAmount = 0.0;

}


// Description
std::string Patron::getIdNum()
{
    return idNum;
}


// Description
std::string Patron::getName()
{
    return name;
}


// Description
std::vector<Book*> Patron::getCheckedOutBooks()
{
    return checkedOutBooks;
}


/*********************************************************************
** Description:
*********************************************************************/
void Patron::addBook(Book* b)
{
    // Add (Book pointer) b to the end of the list of checkedOutBooks
    checkedOutBooks.push_back(b);
}


/*********************************************************************
** Description:
*********************************************************************/
void Patron::removeBook(Book* b)
{
    // Remove (Book pointer) b from the list of checkedOutBooks
    // Use vector::erase() for any element in the vector
    // vector::pop_back() only works for the last element
    int bookIndex = -1;
    
    for (Book* chkBook : checkedOutBooks)
    {
        bookIndex++;
        if (chkBook == b)
        {
            break;
        }
    }

    checkedOutBooks.erase(checkedOutBooks.begin() + bookIndex);

}


// Description
double Patron::getFineAmount()
{
    return fineAmount;
}


/*********************************************************************
** Description:
*********************************************************************/
void Patron::amendFine(double amount)
{
    // Add (or subtract, if it's negative) the given amount to the existing fine
    fineAmount += amount;

}