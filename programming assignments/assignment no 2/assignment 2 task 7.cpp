//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
using namespace std; // use standard namespace

// function to calculate total energy
int totalEnergy(int arr[], int size) { // function takes array and size
    int sum=0; // variable for sum
    for(int i=0;i<size;i++) { // loop through array
        sum+=arr[i]; // add each element to sum
    }
    return sum; // return total sum
}

// function to find hour with maximum generation
int maxHour(int arr[], int size) { // function takes array and size
    int maxIndex=0; // assume first hour is max
    for(int i=1;i<size;i++) { // loop from second element
        if(arr[i]>arr[maxIndex]) // check if current bigger than max
            maxIndex=i; // update index of max
    }
    return maxIndex; // return index of hour with max generation
}

// function to calculate average energy
double averageEnergy(int arr[], int size) { // function takes array and size
    int sum=0; // variable for sum
    for(int i=0;i<size;i++) { // loop through array
        sum+=arr[i]; // add each element to sum
    }
    return sum/(double)size; // return average as double
}

int main() { // main function starts
    int energy[24]; // declare array for 24 hours energy data

    cout<<"Enter energy generation data for 24 hours (kWh):"<<endl; // ask user for input
    for(int i=0;i<24;i++) { // loop runs 24 times
        cin>>energy[i]; // take input into array
    }

    int total=totalEnergy(energy,24); // call function to calculate total energy
    int hour=maxHour(energy,24); // call function to find hour with max generation
    double avg=averageEnergy(energy,24); // call function to calculate average

    cout<<"Total Energy = "<<total<<" kWh"<<endl; // display total energy
    cout<<"Hour with Maximum Generation = "<<hour<<" (index starting from 0)"<<endl; // display max hour
    cout<<"Average Energy = "<<avg<<" kWh"<<endl; // display average

    return 0; // end program
}
