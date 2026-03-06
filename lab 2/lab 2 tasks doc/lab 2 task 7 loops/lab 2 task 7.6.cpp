// Name: Naeem ul haq
// ID: 5122416 / 0665
// Print i+1 instead of i

#include <iostream>   // tells the compiler to include input output stream library
using namespace std;  // allows us to use standard namespace std:: without having the need to write std:: for each cin and cout
int main() {
    for (int i = 0; i < 5; i++)   // Loop runs 5 times (i = 0 to 4)
    {
        cout << i + 1 << "\n";    // Prints i+1 (1, 2, 3, 4, 5)
    }
    return 0;                      //tells the computer that program has ended successfully
}
