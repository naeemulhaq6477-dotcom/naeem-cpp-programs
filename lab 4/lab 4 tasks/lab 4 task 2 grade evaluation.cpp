// Name: Naeem Ul Haq
// ID: 5122416 / 0665

#include <iostream>   // include input-output library
using namespace std;  // use standard namespace

int main() {
    char grade;  // variable to store grade

    cout << "Enter grade (A, B, C, D, F): ";  // ask user for input
    cin >> grade;  // read user input

    // switch statement to check grade
    switch(grade) {
        case 'A': cout << "Excellent"; break;   // if grade = A
        case 'B': cout << "Very Good"; break;   // if grade = B
        case 'C': cout << "Good"; break;        // if grade = C
        case 'D': cout << "Pass"; break;        // if grade = D
        case 'F': cout << "Fail"; break;        // if grade = F
        default: cout << "Invalid Grade";       // if input is not A-F
    }

    return 0;  // end program
}