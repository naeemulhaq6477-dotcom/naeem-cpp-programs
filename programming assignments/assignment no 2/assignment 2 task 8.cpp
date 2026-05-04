//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
using namespace std; // use standard namespace

// function to count unsafe readings
int countUnsafe(int arr[], int size, double low, double high) { // function takes array, size, and limits
    int count=0; // variable for count
    for(int i=0;i<size;i++) { // loop through array
        if(arr[i]<low || arr[i]>high) // check if reading outside safe range
            count++; // increase count
    }
    return count; // return total unsafe readings
}

// function to find maximum voltage
int maxVoltage(int arr[], int size) { // function takes array and size
    int maxVal=arr[0]; // assume first element is max
    for(int i=1;i<size;i++) { // loop through rest
        if(arr[i]>maxVal) // check if current bigger than max
            maxVal=arr[i]; // update max
    }
    return maxVal; // return maximum value
}

// function to find minimum voltage
int minVoltage(int arr[], int size) { // function takes array and size
    int minVal=arr[0]; // assume first element is min
    for(int i=1;i<size;i++) { // loop through rest
        if(arr[i]<minVal) // check if current smaller than min
            minVal=arr[i]; // update min
    }
    return minVal; // return minimum value
}

int main() { // main function starts
    int voltage[20]; // declare array for 20 voltage readings
    double safeLow=3.0; // define safe lower limit
    double safeHigh=4.2; // define safe upper limit

    cout<<"Enter 20 voltage readings:"<<endl; // ask user for input
    for(int i=0;i<20;i++) { // loop runs 20 times
        cin>>voltage[i]; // take input into array
    }

    int unsafe=countUnsafe(voltage,20,safeLow,safeHigh); // call function to count unsafe readings
    int maxVal=maxVoltage(voltage,20); // call function to find maximum voltage
    int minVal=minVoltage(voltage,20); // call function to find minimum voltage

    cout<<"Maximum Voltage = "<<maxVal<<" V"<<endl; // display maximum voltage
    cout<<"Minimum Voltage = "<<minVal<<" V"<<endl; // display minimum voltage
    cout<<"Number of Unsafe Readings = "<<unsafe<<endl; // display unsafe count

    if(unsafe>0) // check if unsafe readings exist
        cout<<"WARNING: Unsafe voltage readings detected!"<<endl; // display warning message

    return 0; // end program
}
