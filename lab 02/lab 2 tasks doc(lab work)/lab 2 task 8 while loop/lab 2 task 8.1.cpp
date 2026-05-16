// Name: Naeem ul haq
// ID: 5122416 / 0665
// Objective: Demonstrate the use of a while loop to print text multiple times

#include <iostream>   // This line includes the input-output stream library. 
                      // It allows us to use cout for printing and cin for input.

using namespace std;  // This line lets us use standard C++ commands directly. 
                      // Without it, we would have to write std::cout and std::cin.

int main()            // This is the main function. The program always starts running from here.
{
    int i = 0;        // Declare a variable 'i' of type integer and initialize it with 0.
                      // This variable will be used as a counter to control the loop.

    while (i < 5)     // This is a while loop. It will keep running as long as the condition (i < 5) is true.
                      // Since i starts at 0, the loop will run until i becomes 5.
    {  
           cout<<"NAEEM UL HAQ\n";           // Inside the loop: this line prints NAEEM UL HAQ followed by a new line.
                                           // Because the loop runs 5 times, the text will be printed 5 times.

        i++;          // This increases the value of i by 1 each time the loop runs.
                      // Without this line, the loop would run forever (infinite loop).
    }

    return 0;       // tells the computer that program has ended successfully