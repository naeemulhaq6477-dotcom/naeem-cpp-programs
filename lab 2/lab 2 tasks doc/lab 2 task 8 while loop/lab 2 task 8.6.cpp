// Name: Naeem ul haq
// ID: 5122416 / 0665
// Print i+1 instead of i

#include <iostream>
using namespace std;

int main() {
    int i = 0;        // Counter starts at 0
    while (i < 5)     // Loop runs while i is less than 5
    {
        cout << i + 1 << "\n";   // Prints i+1 (1, 2, 3, 4, 5)
        i++;                     // Increase i by 1
    }
    return 0;
}
