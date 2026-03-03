// Name: Naeem Ul Haq
// Roll No: 5122416 / 0665
// Lab 02 - Task 1

#include <iostream>   // Include input-output stream library
using namespace std;  // Use standard namespace

int main() {
    int age = 20;              // Declare integer variable and assign value 20
    double price = 19.99;      // Declare double variable and assign value 19.99
    char grade = 'A';          // Declare character variable and assign value 'A'
    bool isPassed = true;      // Declare boolean variable and assign value true
    string text = "C++";       // Declare string variable and assign value "C++"

    cout << "Size of int: " << sizeof(age) << " bytes" << endl;       // Print size of int
    cout << "Size of double: " << sizeof(price) << " bytes" << endl;  // Print size of double
    cout << "Size of char: " << sizeof(grade) << " bytes" << endl;    // Print size of char
    cout << "Size of bool: " << sizeof(isPassed) << " bytes" << endl; // Print size of bool
    cout << "Size of string: " << sizeof(text) << " bytes" << endl;   // Print size of string

    cout << "Value of int: " << age << endl;       // Print value of int
    cout << "Value of double: " << price << endl;  // Print value of double
    cout << "Value of char: " << grade << endl;    // Print value of char
    cout << "Value of bool: " << isPassed << endl; // Print value of bool
    cout << "Value of string: " << text << endl;   // Print value of string

    return 0;  // End program
}