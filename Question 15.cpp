#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    
    return decimal;
}

// Function to convert decimal to hexadecimal
string decimalToHex(int decimal) {
    string hex = "";
    char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', 
                       '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    while (decimal > 0) {
        int remainder = decimal % 16;
        hex = hexChars[remainder] + hex;
        decimal /= 16;
    }
    
    return hex.empty() ? "0" : hex;
}

// Function to convert decimal to octal
string decimalToOctal(int decimal) {
    string octal = "";
    
    while (decimal > 0) {
        int remainder = decimal % 8;
        octal = char('0' + remainder) + octal;
        decimal /= 8;
    }
    
    return octal.empty() ? "0" : octal;
}

int main() {
    string binary;
    int choice;
    
    cout << "Binary Converter Calculator" << endl;
    cout << "=============================" << endl;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int decimal = binaryToDecimal(binary);
    
    cout << "\nResults:" << endl;
    cout << "Decimal: " << decimal << endl;
    cout << "Hexadecimal: " << decimalToHex(decimal) << endl;
    cout << "Octal: " << decimalToOctal(decimal) << endl;
    
    return 0;
}
