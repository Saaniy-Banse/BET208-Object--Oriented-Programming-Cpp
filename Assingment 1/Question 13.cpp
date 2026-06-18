#include <iostream>

using namespace std;
int main()
{
    int w = 90;
    int x = 103;

    cout << "Before swap, w is: " << w << endl;
    cout << "Before swap, x is: " << x << endl;

    w = w ^ x;
    x = w ^ x;
    w = w ^ x;

    cout << "After swap, w is: " << w << endl;
    cout << "After swap, x is: " << x << endl;

    return 0;
}
