// Name: Naeem ul haq
// ID: 5122416 / 0665
// Change starting value of i from 0 to 1

#include <iostream>   // tells the compiler to include input output stream library
using namespace std;  // allows us to use standard namespace std:: without having the need to write std:: for each cin and cout

int main() {
    for (int i = 1; i < 2; i++)   // Loop starts at i = 1 instead of 0
                                  // It will run only once because i = 1 and loop stops when i = 2
    {
        cout << "NAEEM UL HAQ " << "\n";   // Prints "naeem ul haq" only one time
    }
    return 0;                     //tells the computer that program has ended successfully
}
