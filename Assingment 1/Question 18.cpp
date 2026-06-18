#include <iostream>

using namespace std;
int binaryToDecimal(long long n)
{
    int decimalvalue = 0;
    int base = 1;
    long long temp = n;

    while (temp > 0)
    {
        int lastdigit = temp % 10;
        temp = temp / 10;
        decimalvalue +=lastdigit * base;
        base = base * 2;
    }

    return decimalvalue;
}

int main(){

        long long binarynumber;

        cout << "Enter a binary number: ";
        cin >> binarynumber;

        cout << "Decimal equivalent: " << binaryToDecimal(binarynumber) << endl;


    return 0;
}
