#include <iostream>
#include <string>

using namespace std;
int main()
{
    int level = 10;
    string result = (level >= 9) ? "Empty" : "Not Empty";
    cout << "The tank is " << result << endl;
    return 0;
}
