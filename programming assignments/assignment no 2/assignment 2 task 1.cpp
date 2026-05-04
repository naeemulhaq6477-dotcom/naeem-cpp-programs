//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
using namespace std; // use standard namespace

int main() { // main function starts
    int arr[10]; // declare array of size 10
    int maxVal, minVal, sum=0; // variables for max, min, and sum

    cout<<"Enter 10 integers: "; // ask user for input
    for(int i=0;i<10;i++) { // loop runs 10 times
        cin>>arr[i]; // take input into array
    }

    maxVal=arr[0]; // set first element as max initially
    minVal=arr[0]; // set first element as min initially

    for(int i=0;i<10;i++) { // loop through array
        if(arr[i]>maxVal) // check if current bigger than max
            maxVal=arr[i]; // update max
        if(arr[i]<minVal) // check if current smaller than min
            minVal=arr[i]; // update min
        sum+=arr[i]; // add current element to sum
    }

    double avg=sum/10.0; // calculate average

    cout<<"Maximum = "<<maxVal<<endl; // display maximum
    cout<<"Minimum = "<<minVal<<endl; // display minimum
    cout<<"Average = "<<avg<<endl; // display average
    return 0; // end program
}
