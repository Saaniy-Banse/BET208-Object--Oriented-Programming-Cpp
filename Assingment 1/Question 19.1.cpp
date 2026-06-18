#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

// Function to validate if the input string is a true binary number
bool isValidBinary(const std::string& binary) {
    if (binary.empty()) return false;
    for (char c : binary) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

// Converts a binary string to a decimal integer
long long binaryToDecimal(const std::string& binary) {
    long long decimalValue = 0;
    long long base = 1; // 2^0

    // Loop from the rightmost bit to the leftmost bit
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimalValue += base;
        }
        base *= 2;
    }
    return decimalValue;
}

// Converts a decimal integer to a hexadecimal string
std::string decimalToHexadecimal(long long decimal) {
    if (decimal == 0) return "0";

    std::string hexStr = "";
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                        'A', 'B', 'C', 'D', 'E', 'F'};

    while (decimal > 0) {
        int remainder = decimal % 16;
        hexStr += hexDigits[remainder];
        decimal /= 16;
    }

    // Reverse the string because remainders were collected backward
    std::reverse(hexStr.begin(), hexStr.end());
    return hexStr;
}

// Converts a decimal integer to an octal string
std::string decimalToOctal(long long decimal) {
    if (decimal == 0) return "0";

    std::string octStr = "";
    while (decimal > 0) {
        int remainder = decimal % 8;
        octStr += std::to_string(remainder);
        decimal /= 8;
    }

    std::reverse(octStr.begin(), octStr.end());
    return octStr;
}

int main() {
    std::string binaryInput;
    char choice;

    std::cout << "=========================================\n";
    std::cout << "      BINARY SYSTEM CONVERTER CALC     \n";
    std::cout << "=========================================\n";

    do {
        std::cout << "\nEnter a binary number: ";
        std::cin >> binaryInput;

        // Clean and validate user input
        if (!isValidBinary(binaryInput)) {
            std::cout << "Error: Invalid binary format. Use '0' and '1' only.\n";
        } else {
            // Process calculations
            long long decimalResult = binaryToDecimal(binaryInput);
            std::string hexResult = decimalToHexadecimal(decimalResult);
            std::string octalResult = decimalToOctal(decimalResult);

            // Display results
            std::cout << "\n--- Conversion Results ---\n";
            std::cout << "Binary:      " << binaryInput << "\n";
            std::cout << "Decimal:     " << decimalResult << "\n";
            std::cout << "Hexadecimal: " << hexResult << "\n";
            std::cout << "Octal:       " << octalResult << "\n";
            std::cout << "--------------------------\n";
        }

        std::cout << "\nDo you want to convert another number? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "\nThank you for using the Base Converter Calculator!\n";
    return 0;
}
