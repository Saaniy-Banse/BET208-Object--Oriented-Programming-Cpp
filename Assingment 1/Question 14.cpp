#include <iostream>

using namespace std;
int main()
{
    // A left shift moves bits to the left toward the most significant bit effectively multiplying the number by 2^n.
    // A right shift moves bits to the right toward the least significant bit, dividing the number by 2^n.

    //Example of left shift
    unsigned int z = 30;
    unsigned int result = z << 3;

    cout << "Original: " << z << endl;
    cout << "Shifted: " << result << endl;

    return 0;
}
