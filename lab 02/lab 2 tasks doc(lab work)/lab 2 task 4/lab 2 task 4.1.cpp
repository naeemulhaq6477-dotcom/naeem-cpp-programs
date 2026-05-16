// Name: Naeem ul haq
// ID: 5122416 / 0665
// Objective: Ask the user to enter their age using cin and then display it

#include <iostream>   // This line includes the input-output stream library. 
                      // It allows us to use commands like cout  and cin .

using namespace std;  // This line lets us use standard C++ commands directly. 
                      // Without it, we would have to write std::cout and std::cin.

int main()            // This is the main function. The program always starts running from here.
{
    int a;            // Declare a variable named 'a' of type integer. 
                      // This variable will be used to store the age entered by the user.

    cout << "Dear user kindly enter your age: ";  
                      // This line prints a message on the screen asking the user to enter their age.

    cin >> a;         // This line takes input from the user and stores it in the variable 'a'.
                      // Whatever number the user types will be saved inside 'a'.

    return 0;         // This line ends the program and tells the computer program has ended successfully.
}