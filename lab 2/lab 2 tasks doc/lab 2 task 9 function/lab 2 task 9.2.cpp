// Name: Naeem ul haq
// ID: 5122416 / 0665
// Objective: Subtract two numbers using a function

#include <iostream>   // tells the compiler to include input output stream library
using namespace std;  // Use standard namespace to avoid writing std::cout for each

int subTwo(int x, int y);   // Function declaration: subTwo takes two integers and returns their difference

int main() {
    int a, b, result;   // Declare variables

    cout << "Enter the first number : ";   // Ask user for first number
    cin >> a;   // Store input in a

    cout << "Enter the second number : ";   // Ask user for second number
    cin >> b;   // Store input in b

    result = subTwo(a, b);   // Call subTwo function with a and b

    cout << "Difference of " << a << " and " << b << " is: " << result << endl;   // Print result
    return 0;    // tells the computer that program has ended successfully
}

int subTwo(int x, int y) {   // Function definition
    return (x - y);   // Return the difference of x and y
}
