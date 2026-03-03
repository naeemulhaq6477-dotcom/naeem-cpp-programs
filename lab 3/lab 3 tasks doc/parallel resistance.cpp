                  // NAME = NAEEM UL HAQ
                  // ID = 5122416 / 0665

#include <iostream>              
using namespace std;               

int main() {              // main function starting point with body of main function(braces)
	
	double R1,R2, Rnet;         // variable declaration and making space in memory
	
	cout<<"enter resistance R1 = ";   // diplays message to asking the user to enter 1st resistance
	cin>>R1;                              // takes inpute from user and stores it in variable r1
	cout<<"enter resistance R2 = ";    // displays message asking user to enter 2nd resistance
	cin>>R2;                               // takes input from user and stores it in variable r2
	
	 
	 Rnet=(R1*R2)/(R1+R2);   // formula for calcultion and stores net resistance in rnet         
	
	cout<<"net resistance is = "<<Rnet<<endl;  // prints the result and moves to a new line 
	
	return 0;  // ends the program and signals successful completion to the os

}
