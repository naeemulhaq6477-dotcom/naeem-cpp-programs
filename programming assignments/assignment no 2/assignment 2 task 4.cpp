//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
#include <string>   // include string library
using namespace std; // use standard namespace

int main() { // main function starts
    string names[5]; // declare array of 5 strings

    cout<<"Enter names of 5 students:"<<endl; // ask user for input
    for(int i=0;i<5;i++) { // loop runs 5 times
        cin>>names[i]; // take input into array
    }

    // sorting using simple bubble sort
    for(int i=0;i<5-1;i++) { // outer loop runs 4 times
        for(int j=0;j<5-1-i;j++) { // inner loop runs fewer times each pass
            if(names[j]>names[j+1]) { // compare two names
                string temp=names[j]; // store first in temp
                names[j]=names[j+1]; // swap with second
                names[j+1]=temp; // put temp in second
            }
        }
    }

    cout<<"Sorted list of names:"<<endl; // display sorted list
    for(int i=0;i<5;i++) { // loop through array
        cout<<names[i]<<endl; // print each name
    }

    return 0; // end program
}
