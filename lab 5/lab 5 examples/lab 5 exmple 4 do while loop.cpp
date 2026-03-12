//NAME=Naeem Ul Haq
//ID=5122416/0665

#include <iostream>          //tells the compiler to include input output stream library
using namespace std;      // allows us to use cin and cout without having to type std:: for each cin and cout

int main() {     // main function and execution starting point of each cpp program
	
	int num;   // variable declaration 
	
	do {      // start of do while loop (rund atleast once)
	
	cout<<"enter a password to exit(1234) :";  //pronmpt for user to enter password
	cin>>num;                                // takes input and stores it in variable
	
	if(num!=1234)    // condition provided
	{cout<<"wrong password enter password again"<<endl;}  // shown ifcondition is true
}
	while(num!=1234);    // loop which repeats until num is not 1234
	
	cout<<"access granted"<<endl;   // the line runs if the condition becomes false (once)
	
	return 0;       // tells the computer that progra has ended successfully
	
	
	
	
	
	


}
