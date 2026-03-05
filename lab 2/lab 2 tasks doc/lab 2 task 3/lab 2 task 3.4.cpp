// Name: Naeem ul haq
// ID: 5122416 / 0665
// Store an integer in a float variable

#include <iostream>   // Input-output library for printing values
using namespace std;  // Standard namespace for using cout directly

int main() {
    float a = 20;     // Even though 'a' is a float, we can store an integer like 20
                      // It will be stored as 20.0 internally because float supports decimals
    cout << a;        // This will print 20 (or sometimes 20.0 depending on formatting)
    return 0;         // End program successfully
}