#include <iostream>

using namespace std;
int main()
{
    int oddnum = 40;
    if (oddnum % 2 != 0 && oddnum % 3 == 0)
    {
        cout << "Is odd and divisible 3" << endl;
    }
    else
    {
        cout << "Does not meet both conditions" << endl;
    }
    return 0;
}
