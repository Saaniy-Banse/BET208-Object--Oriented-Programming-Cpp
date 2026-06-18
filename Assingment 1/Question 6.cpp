#include <iostream>
#include <cctype>


using namespace std;
int main()
{
    char alphabet;
    cout << "Enter a Character: ";
    cin >> alphabet;
    if(alphabet >= 'A' && alphabet <= 'Z' && isupper(static_cast<unsigned char>(alphabet)))
    {
        cout << "Uppercase letter" <<endl;
    }
    else
    {
        cout << "Not Uppercase letter" <<endl;
    }

    return 0;
}
