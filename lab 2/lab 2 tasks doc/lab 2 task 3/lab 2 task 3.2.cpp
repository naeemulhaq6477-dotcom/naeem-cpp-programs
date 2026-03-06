// Name: Naeem ul haq
// ID: 5122416 / 0665
// Assign a fraction number to an integer variable

#include <iostream>   // Input-output library for printing values
using namespace std;  // Standard namespace for using cout directly withouthaving to type std:: for each cin and cout

int main() {
    int a = 7.5;      // Trying to store a fraction (7.5) in an integer variable
                      // Since 'int' can only store whole numbers, the decimal part (.5) will be cut off
                      // So 'a' will actually store 7, not 7.5
    cout << a;        // This will print 7 because the decimal part is lost
    return 0;         // End program successfully
}