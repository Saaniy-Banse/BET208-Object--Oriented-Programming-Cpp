#include <iostream>

using namespace std;
int main()
{
    int wnum;
    cout << "Enter a number: " << endl;
    cin >> wnum;
    if(wnum % 2 != 0)
    {
        cout << "Odd Number" << endl;
    }
    else
    {
        cout << "Even Number" << endl;
    }
    return 0;
}
