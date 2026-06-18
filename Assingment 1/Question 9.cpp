#include <iostream>

using namespace std;
int main()
{
    // The Assignment operator (=) stores a value or data inside a variable whilst Equality operator (==) compares two values to see which is true(1) or false(0)
    // Example of assignment operator
    string day = "Monday";
    cout << day << " is the beginning of the week when people go to work." << endl;
    cout << "But students hate " << day << endl;



    //Example of Equality operator
    int num = 60;
    if(60 == 60)
    {
        cout << "Yes it is." << endl;
    }
    else
    {
        cout << "It is not." << endl;
    }

    return 0;
}
