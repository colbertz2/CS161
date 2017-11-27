/*********************************************************************
** Author: Zach Colbert
** Date: 30 November 2017
** Description: Book class
*********************************************************************/

/*********************************************************************
** Includes
*********************************************************************/

#include "Book.hpp"
#include <string>


/*********************************************************************
** Description: 
*********************************************************************/
Book::Book(std::string idc, std::string t, std::string a)
{
    // Set idCode (no set function given, so do it manually)
    idCode = idc;

    // Set title
    title = t;

    // Set author
    author = a;

}

// Accesses the GET_CHECKOUT_LENGTH const
int Book::getCheckOutLength()
{
    return CHECK_OUT_LENGTH;
}

// Accesses the idCode variable
std::string Book::getIdCode()
{
    return idCode;
}

// Accesses the title variable
std::string Book::getTitle()
{
    return title;
}

// Accesses the author variable
std::string Book::getAuthor()
{
    return author;
}

// Accesses the location variable
Locale Book::getLocation()
{
    return location;
}

// Sets the location variable
void Book::setLocation(Locale newLoc)
{
    location = newLoc;
}

// Accesses the checkedOutBy variable
Patron* Book::getCheckedOutBy()
{
    return checkedOutBy;
}

// Sets the checkedOutBy variable
void Book::setCheckedOutBy(Patron* newCheckout)
{
    checkedOutBy = newCheckout;
}

// Accesses the requestedBy variable
Patron* Book::getRequestedBy()
{
    return requestedBy;
}

// Sets the requestedBy variable
void Book::setRequestedBy(Patron* newRequest)
{
    requestedBy = newRequest;
}

// Accesses the dateCheckedOut variable
int Book::getDateCheckedOut()
{
    return dateCheckedOut;
}

// Sets the dateCheckedOut variable
void Book::setDateCheckedOut(int checkoutDate)
{
    dateCheckedOut = checkoutDate;
}