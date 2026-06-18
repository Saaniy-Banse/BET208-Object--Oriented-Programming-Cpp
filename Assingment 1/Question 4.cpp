#include <iostream>

using namespace std;
int main()
{
    string hello = "Hello";
    string userinput;
    cout << "Enter a word here: " << endl;
    cin >>userinput;
    if(userinput == hello)
    {cout << "Hello" << endl;}
    else
    {
        cout << "Goodbye" << endl;
    }

        return 0;
}
