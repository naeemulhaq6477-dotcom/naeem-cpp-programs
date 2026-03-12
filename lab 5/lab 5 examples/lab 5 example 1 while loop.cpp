//NAME=Naeem Ul Haq
//ID=5122416/0665
// prints numbers from 1 to 5
#include <iostream>  //tells the compiler to include input output stream library
using namespace std; // allows us to use cin and cout without having to type std:: for each cin and cout

int main() {     // main function and execution starting point of each cpp program
	int a=5;     // variable declaration and assigning value of 5
	
	while(a>0)   // condition which will print value ubtil a becomes zero
	{
	cout<<a<<"\n";  // output that will be shown to the user
	a=a-1;}  // subtracts 1 from a until a becomes zero
	
return 0;          // tells the computer that program has ended successfully
}
