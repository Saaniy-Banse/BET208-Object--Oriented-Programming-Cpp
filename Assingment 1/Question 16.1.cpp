#include <iostream>

int main() {
    int value = 5;          // Non-zero means "true"
    bool result = !value;   // The inverse of true is "false"

    // Prints 0 (which represents false in C++)
    std::cout << "Logical NOT result: " << result << std::endl;
    return 0;
}
