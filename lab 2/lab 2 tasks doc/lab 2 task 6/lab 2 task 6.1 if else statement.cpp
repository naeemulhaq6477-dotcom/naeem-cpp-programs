// Name: Naeem ul haq
// ID: 5122416 / 0665
// Objective: Ask the user to enter a number and check if it is positive or negative

#include <iostream>   // This line includes the input-output stream library. 
                      // It allows us to use cout for printing and cin for taking input.

using namespace std;  // This line lets us use standard C++ commands directly. 
                      // Without it, we would have to write std::cout and std::cin.

int main()            // This is the main function. The program always starts running from here.
{
    int number;       // Declare a variable named 'number' of type integer.
                      // This variable will store the number entered by the user.

    cout << "Enter an integer: ";  
                      // Print a message on the screen asking the user to enter an integer.

    cin >> number;    // Take input from the user and store it in the variable 'number'.

    if (number >= 0)  // This is a conditional statement. It checks if the number is greater than or equal to 0.
    {
        cout << "You entered a positive integer: " << number << endl;  
                      // If the condition is true (number is 0 or more), this line prints that the number is positive.
    }
    else              // This part runs if the condition (number >= 0) is false.
    {
        cout << "You entered a negative integer: " << number << endl;  
                      // If the number is less than 0, this line prints that the number is negative.
    }

    return 0;         // End the program successfully and tell the computer that program ahs ended successfully
}