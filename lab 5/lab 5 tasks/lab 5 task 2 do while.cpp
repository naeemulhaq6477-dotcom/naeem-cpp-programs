//NAME=Naeem Ul haq
//ID=5122416/0665
//printing numbers from 1 to 10 using do while loop
#include <iostream>       // tells the cmpiler to include input output stream library
using namespace std;   // allows us touse cin and cout without having to typ std:: for each

int main() {      // main function begginning and execution starting point
	
	int a=10;  // variable declaration and assigning value of 10
	
	do{         // start of the do while loop 
		
		cout<<a<<endl;  // prints the current value of a to the screen and moves to a new line
		a--;        // decrement subtracts 1 every time from a 
	}
while(a>0);        // cheaks if a is greater than a if true jumps back to do block

return 0;      // tells the computer that program has ended successfully
}
