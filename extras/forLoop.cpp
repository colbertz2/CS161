#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int theCount;
    
    cout << "How many iterations?" << endl;
    cin >> theCount;
    
    for (int i = 0; i < theCount; i++)
    {
        cout << "The iteration is: " << i << endl;
    }

    return 0;
}