                         // NAME = NAEEM UL HAQ
                            // ID = 5122416 / 0665

#include <iostream>               // tells the compiler to include standard input output library
using namespace std;             // allows us to use cout and cin without having to type std:: for each

int main() {                               // start of logical or main function
     
     double voltage,resistance,current;           //  3 variables  declaration
     
     cout<<"enter voltage ";                  //prompt to user to enter votage
     cin>>voltage;                                 //takes input data and stores it in variable 
     cout<<"enter current ";                 //prompt to user to enter votage
     cin>>current;                                  //takes input data and stores it in variable 
     
     resistance=voltage/current;                  // operational part formula v=ir
     
     cout<<"voltage = "<<voltage<<"V"<<endl;           // output value voltage and unit
     cout<<"current = "<<current<<"A"<<endl;          // output value of current and unit
     cout<<"resistance = "<<resistance<<" ohm"<<endl;    // output value of resistance and unit
     
     return 0;    // tells that program ended successfully
}

