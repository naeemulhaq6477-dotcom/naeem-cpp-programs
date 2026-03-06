// Name: Naeem ul haq
// ID: 5122416 / 0665
// Store an integer in a float variable

#include <iostream>   // Input-output library for printing values
using namespace std;  // allows us to use  standardnamespace without having the need to write std:: for each cin and cout

int main() {            // start of main function from where execution beginns
    float a = 20;     // Even though 'a' is a float, we can store an integer like 20
                      // It will be stored as 20.0 internally because float supports decimals
    cout << a;        // This will print 20 (or sometimes 20.0 depending on formatting)
    return 0;         // tells the computer that program has ended  successfully
}