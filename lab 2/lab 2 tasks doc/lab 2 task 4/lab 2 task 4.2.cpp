// Name: Naeem ul haq
// ID: 5122416 / 0665
// Display the age entered by the user

#include <iostream>   // tells the compiler to include input output stream library
using namespace std;  // allows us to use standard namespace std without having the need to write std:: for each cin and cout

int main() {
    int a;            // Declare an integer variable 'a' to store the age

    cout << "Dear user kindly enter your age: ";  
                      // Print a message asking the user to enter their age

    cin >> a;         // Take input from the user and store it in 'a'

    cout << a;        // Print the value stored in a
    return 0;         // tells the computer that program has ended successfully
}