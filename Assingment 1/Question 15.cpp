#include <iostream>

using namespace std;
int main()
{
    double num1 = 2.1;
    double num2 = 3.4;

    double largerof = (num1>num2) ? num1 : num2;

    cout << "The larger of the 2 is: " << largerof << endl;

    return 0;
}
