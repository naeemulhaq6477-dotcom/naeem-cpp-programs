// Name: Naeem ul haq
// ID: 5122416 / 0665
// Change starting value of i from 0 to 1

#include <iostream>   // Input-output library for printing values
using namespace std;  // Standard namespace for using cout directly

int main() {
    for (int i = 1; i < 2; i++)   // Loop starts at i = 1 instead of 0
                                  // It will run only once because i = 1 and loop stops when i = 2
    {
        cout << "NAEEM UL HAQ " << "\n";   // Prints "Usama Siraj" only one time
    }
    return 0;                     // End program successfully
}
