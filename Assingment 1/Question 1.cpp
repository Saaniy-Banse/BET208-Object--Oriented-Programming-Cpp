#include <iostream>

using namespace std;
int main()
{
    //Input: Declaring variables
    int num1,num2;
    int solution;

    // Process: Storing data in the variables
    cout << "Enter 2 numbers: " << endl;
    cin >> num1 >> num2;

    // Output: Solving the data stored in the variables by summation;
    solution = num1 + num2;
    cout << "The sum is: " << solution << endl;

    // Output: Solving the data stored in the variables by difference
    solution = num1 - num2;
    cout << "The difference is: " << solution << endl;

     // Output: Solving the data stored in the variables by product
    solution = num1 * num2;
    cout << "The product is: " << solution << endl;

     // Output: Solving the data stored in the variables by quotient
    solution = num1 / num2;
    cout << "The division is: " << solution << endl;

    return 0;
}
