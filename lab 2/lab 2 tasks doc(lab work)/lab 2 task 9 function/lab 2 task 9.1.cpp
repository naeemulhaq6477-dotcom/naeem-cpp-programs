// Name: Naeem ul haq   
// ID: 5122416 / 0665 
// Objective: Demonstrate functions by adding two numbers

#include <iostream>   // tells the compiler to include input output stream library
using namespace std;  // Use standard namespace to avoid writing std::cout for each

int addTwo(int x, int y);   // Function declaration: addTwo takes two integers and returns their sum

int main() {   // Main function where program starts
    int a, b, sum;   // Declare variables: a for first number, b for second number, sum for result

    cout << "Enter the first number : ";   // Ask user to enter first number
    cin >> a;   // Store user input in variable a

    cout << "Enter the second number : ";   // Ask user to enter second number
    cin >> b;   // Store user input in variable b

    sum = addTwo(a, b);   // Call addTwo function with a and b, store result in sum

    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;   // Print result in clear format

    return 0;   // tells the computer that program has ended successfully
}

int addTwo(int x, int y) {   // Function definition: explains how addTwo works
    return (x + y);   // Return the sum of x and y
}