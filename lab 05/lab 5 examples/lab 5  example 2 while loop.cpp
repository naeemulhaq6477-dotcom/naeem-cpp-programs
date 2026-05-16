//NAME=Naeem Ul Haq
//ID=5122416/0665
// exits program by -1
#include <iostream>     //tells the compiler to include input output stream library
using namespace std; // allows us to use cin and cout without having to type std:: for each cin and cout

int main() {       // main function and execution starting point of each cpp program
	
	int number=0;    // variable declaration 
	
	while(number!=-1)  // while condition which is true until -1
	{cout <<"enter a number (-1) :";  //  prompt for user to enter a number
	cin>>number;               // takes input fromuser and stores it in variable 
	cout<<"you entered = "<<number<<endl; // prints message and the number you entered to user
	}
	cout<<"outside loop now";  // prints message when entered number is -1
	
	return 0;          // tells the computer that progra has ended successfully

}
