// Name: Naeem Ul Haq
// Roll No: 5122416 / 0665
// Lab 02 - Task 3

#include <iostream>   // Include input-output stream library
using namespace std;  // Use standard namespace

int main() {
    double celsius;   // Declare variable to store Celsius temperature
    cout << "Enter temperature in Celsius: ";  // Prompt user for input
    cin >> celsius;   // Read Celsius value from user

    double fahrenheit = (celsius * 9.0 / 5.0) + 32; // Convert Celsius to Fahrenheit using formula
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl; // Print result

    return 0;  // End program
}