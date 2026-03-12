 // NAME=Naeem Ul Haq
// ID=5122416/0665
// nested while loop
#include <iostream>    // tells the cmpiler to include input output stream library
using namespace std;    // allows us touse cin and cout without having to typ std:: for each
  
int main() {     // main function begginning and execution starting point
    int num = 7; // outer loop starts from 7
    int j;       // inner loop counter

    while (num > 0) {       // outer loop runs until num becomes 0
        j = 1;              // reset inner loop counter
        while (j <= num) {  // inner loop prints numbers from 1 to num
            cout << j << " "; // output  to user
            j++;            // increment inner loop counter
        }
        cout << "\n";       // move to next line after inner loop finishes
        num--;              // decrement outer loop counter
    }

    return 0;               // tells the computer that program has ended successfully
}