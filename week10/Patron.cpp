/*********************************************************************
** Author: Zach Colbert
** Date: 30 November 2017
** Description: Patron class
*********************************************************************/

/*********************************************************************
** Includes
*********************************************************************/

#include "Patron.hpp"
#include <string>


/*********************************************************************
** Description:
*********************************************************************/
Patron::Patron(std::string idn, std::string n)
{

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


// Description
void Patron::addBook(Book* b)
{

}


// Description
void Patron::removeBook(Book* b)
{

}


// Description
double Patron::getFineAmount()
{
    return fineAmount;
}


// Description
void Patron::amendFine(double amount)
{

}