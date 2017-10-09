#include <iostream>

using namespace std;

int main()
{
    int myInt = 4;

    string myName = "Colbertz" + to_string(myInt);

    cout << myName << endl;
}