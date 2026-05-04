//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
using namespace std; // use standard namespace

// function to calculate total load
int totalLoad(int arr[], int size) { // function takes array and size
    int sum=0; // variable for sum
    for(int i=0;i<size;i++) { // loop through array
        sum+=arr[i]; // add each element to sum
    }
    return sum; // return total sum
}

// function to find peak load
int peakLoad(int arr[], int size) { // function takes array and size
    int maxVal=arr[0]; // set first element as max initially
    for(int i=1;i<size;i++) { // loop from second element
        if(arr[i]>maxVal) // check if current bigger than max
            maxVal=arr[i]; // update max
    }
    return maxVal; // return maximum value
}

int main() { // main function starts
    int load[24]; // declare array for 24 hours load data

    cout<<"Enter load data for 24 hours (MW):"<<endl; // ask user for input
    for(int i=0;i<24;i++) { // loop runs 24 times
        cin>>load[i]; // take input into array
    }

    int total=totalLoad(load,24); // call function to calculate total load
    int peak=peakLoad(load,24); // call function to find peak load

    cout<<"Total Load = "<<total<<" MW"<<endl; // display total load
    cout<<"Peak Load = "<<peak<<" MW"<<endl; // display peak load

    return 0; // end program
}
