//NAME=Naeem Ul haq
//ID=5122416/0665
// sum from 1 to n
#include <iostream>        // tells the cmpiler to include input output stream library
using namespace std;     // allows us touse cin and cout without having to typ std:: for each

int main() {                // main function begginning and execution starting point
         int a,sum=0,b=1;   // variables declaration
         
         cout<<"enter a positive integer :";   // prompts user to enter a positive integer
         cin>>a;                        // takes input fromuser and stores it in variable a
         while(b<=a)           // keep looping until b is less than or equal to a
         {
		 sum=sum+b;   //add the current value of b to our running total
		 b++;}   // increment b so we can move to next number
         
         cout<<"the sum from 1 to "<<a<<" is :"<<sum<<endl;  // prints the sum to the display
         
         return 0;          // tells the computer that program has ended successfully
 
}
