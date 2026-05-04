//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
using namespace std; // use standard namespace

// function to reverse array
void reverseArray(int arr[], int size) { // function takes array and its size
    for(int i=0;i<size/2;i++) { // loop runs till half of array
        int temp=arr[i]; // store current element in temp
        arr[i]=arr[size-1-i]; // swap current with opposite end
        arr[size-1-i]=temp; // put temp at opposite end
    }
}

int main() { // main function starts
    int arr[5]; // declare array of size 5
    cout<<"Enter 5 integers: "; // ask user for input
    for(int i=0;i<5;i++) { // loop runs 5 times
        cin>>arr[i]; // take input into array
    }

    cout<<"Original array: "; // display before reversal
    for(int i=0;i<5;i++) { // loop through array
        cout<<arr[i]<<" "; // print each element
    }
    cout<<endl; // move to next line

    reverseArray(arr,5); // call function to reverse array

    cout<<"Reversed array: "; // display after reversal
    for(int i=0;i<5;i++) { // loop through array
        cout<<arr[i]<<" "; // print each element
    }
    cout<<endl; // move to next line
    return 0; // end program
}

