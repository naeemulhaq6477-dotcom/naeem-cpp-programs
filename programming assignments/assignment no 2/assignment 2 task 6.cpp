//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
#include <string>   // include string library
using namespace std; // use standard namespace

// function to find topper
int findTopper(int marks[], int size) { // function takes marks array and size
    int maxIndex=0; // assume first student is topper
    for(int i=1;i<size;i++) { // loop through rest of students
        if(marks[i]>marks[maxIndex]) // check if current has higher marks
            maxIndex=i; // update topper index
    }
    return maxIndex; // return index of topper
}

// function to display pass/fail status
void displayStatus(int marks[], string names[], int size) { // function takes marks, names, and size
    for(int i=0;i<size;i++) { // loop through all students
        if(marks[i]>=50) // check if marks >= 50
            cout<<names[i]<<" PASSED"<<endl; // display pass
        else
            cout<<names[i]<<" FAILED"<<endl; // display fail
    }
}

// function to search student by name
void searchStudent(string names[], int marks[], int size, string searchName) { // function takes arrays and search name
    bool found=false; // flag for search
    for(int i=0;i<size;i++) { // loop through all students
        if(names[i]==searchName) { // check if name matches
            cout<<names[i]<<" has "<<marks[i]<<" marks"<<endl; // display marks
            found=true; // set flag true
            break; // stop loop
        }
    }
    if(!found) // if not found
        cout<<"Student not found"<<endl; // display message
}

int main() { // main function starts
    string names[5]; // declare array for 5 student names
    int marks[5]; // declare array for 5 student marks

    cout<<"Enter names and marks of 5 students:"<<endl; // ask user for input
    for(int i=0;i<5;i++) { // loop runs 5 times
        cin>>names[i]>>marks[i]; // input name and marks together
    }

    int topperIndex=findTopper(marks,5); // call function to find topper
    cout<<"Topper is "<<names[topperIndex]<<" with "<<marks[topperIndex]<<" marks"<<endl; // display topper

    cout<<"Pass/Fail Status:"<<endl; // heading for status
    displayStatus(marks,names,5); // call function to display pass/fail

    string searchName; // variable for search
    cout<<"Enter a name to search: "; // ask user for name
    cin>>searchName; // input search name
    searchStudent(names,marks,5,searchName); // call function to search student

    return 0; // end program
}
