                 // NAME = NAEEM UL HAQ
                // ID = 5122416 / 0665

#include <iostream>
using namespace std;

int main() {                             // start of main function from where execution begins
        float length,wedth,area,perimeter;  // declaration of variable and data type
        
        cout<<"enter lenght ";        // prompt for user
        cin>>length;                      // input from user
        cout<<"enter wedth ";           // 2nd prompt from user
        cin>>wedth;                          // input data from user
           
        area=length*wedth;                // area formula for calculation
        perimeter=2*(length+wedth);       // perimeter formula for calculation
        
        cout<<"area = "<<area<<endl;      // output data for user after execution(area)
        cout<<"perimeter = "<<area<<endl;      //output data for user after execution(perimeter)
        
        return 0;       // exit program and signal success to the os
}
