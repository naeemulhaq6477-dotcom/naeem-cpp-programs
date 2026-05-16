// Name: Naeem ul haq
// ID: 5122416 / 0665
// Print i+1 instead of i

#include <iostream>           //tells the compiler to include input output stream library
using namespace std;      //allows us to use standard namespace without having to type std:: for each cin and cout

int main() {
    int i = 0;        // Counter starts at 0
    while (  i<5)     // Loop runs while i is less than 5
    {
        cout << i + 1 << "\n";   // Prints i+1 (1, 2, 3, 4, 5)
          i++;              // Increase i by 1
    }
    return 0;             // tells the computer that program has ended successfully
}
