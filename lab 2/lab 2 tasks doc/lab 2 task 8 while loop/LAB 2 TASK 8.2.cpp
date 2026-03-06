// Name: Naeem ul haq
// ID: 5122416 / 0665
// Start the counter from 1 instead of 0

#include <iostream>   //tells the compiler to include input output stream library
using namespace std;  //allows us to use standard namespace without having to type std:: for each cin and cout

int main() {
    int i = 1;        // Counter starts at 1 instead of 0
    while (i < 5)     // Loop runs while i is less than 5
    {
        cout << "NAEEM UL HAQ" << "\n";   // Prints NAEEM UL HAQ
        i++;          // Increases i by 1 each time
    }
    return 0;         // tells the computer that program has ended successfully
}
