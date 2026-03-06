// Name: Naeem ul haq
// ID: 5122416 / 0665
// Objective: Demonstrate the use of a for loop to print text multiple times

#include <iostream>   // This line includes the input-output stream library. 
                      // It allows us to use cout for printing and cin for input.

using namespace std;  // This line lets us use standard C++ commands directly. 
                      // Without it, we would have to write std::cout and std::cin.

int main()            // This is the main function. The program always starts running from here.
{
    for (int i = 0; i < 2; i++)   // This is a for loop. 
                                  // It starts with i = 0, runs while i < 2, and increases i by 1 each time.
                                  // So the loop will run 2 times (i = 0 and i = 1).

    {
        cout << "NAEEM UL HAQ" << "\n";  
                                  // Inside the loop: this line prints "naeem ul haq" followed by a new line.
                                  // Since the loop runs 2 times, the text will be printed twice.
    }

    return 0;         // tells the computer that program has ended successfully
}