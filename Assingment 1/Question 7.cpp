#include <iostream>
#include <string>

using namespace std;
int main()
{
    string userinput;
    cout << "Enter a word: " << endl;
    getline(cin, userinput);
    if(userinput.find('a') != string::npos)
    {
        cout << "Contains 'a'" << endl;
    }
    else
    {
        cout << "Does not contain 'a'" << endl;
    }
    return 0;
}
