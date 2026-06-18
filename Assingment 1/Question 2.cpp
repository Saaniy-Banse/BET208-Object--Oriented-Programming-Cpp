#include <iostream>
#include <cmath>

using namespace std;
int main(){

    // Declaration of variables
    int radius;
    int area;

    // Prompting user for input of radius
    cout << "Enter radius of the circle: " << endl;
    cin >> radius;

    // Calculating area of a circle
    area = M_PI * pow(radius,2);

    // Displaying area of a circle
    cout << "The area of a circle is: " << area << endl;

    return 0;
}
