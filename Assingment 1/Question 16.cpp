#include <iostream>

using namespace std;
int main()
{
    //Bitwise NOT operates on individual bits of an integer and flips every zero to one.
    // Whist logical NOT treats the entire value as a boolean entity by flipping a False to True and vice versa


    //Example of bitwise NOT

    unsigned char a = 5;
    auto result = ~a;
    cout << (int)result << endl;

    return 0;
}
