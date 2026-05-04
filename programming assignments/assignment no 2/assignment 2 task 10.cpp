//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
using namespace std; // use standard namespace

// function to calculate total attendance of each student
void studentAttendance(int arr[5][7]) { // function takes 2D array
    for(int i=0;i<5;i++) { // loop through 5 students
        int sum=0; // variable for sum
        for(int j=0;j<7;j++) { // loop through 7 days
            sum+=arr[i][j]; // add attendance (1 or 0)
        }
        cout<<"Student "<<i+1<<" total attendance = "<<sum<<" days"<<endl; // display total
    }
}

// function to find student with highest attendance
int highestAttendance(int arr[5][7]) { // function takes 2D array
    int maxIndex=0; // assume first student has highest
    int maxSum=0; // variable for max sum
    for(int i=0;i<5;i++) { // loop through students
        int sum=0; // variable for sum
        for(int j=0;j<7;j++) { // loop through days
            sum+=arr[i][j]; // add attendance
        }
        if(sum>maxSum) { // check if current sum greater
            maxSum=sum; // update max sum
            maxIndex=i; // update student index
        }
    }
    return maxIndex; // return index of student with highest attendance
}

// function to calculate overall class attendance percentage
double classAttendancePercent(int arr[5][7]) { // function takes 2D array
    int total=0; // variable for total attendance
    for(int i=0;i<5;i++) { // loop through students
        for(int j=0;j<7;j++) { // loop through days
            total+=arr[i][j]; // add attendance
        }
    }
    return (total/(double)(5*7))*100; // calculate percentage
}

int main() { // main function starts
    int attendance[5][7]; // declare 2D array for 5 students over 7 days

    cout<<"Enter attendance (1=present, 0=absent) for 5 students over 7 days:"<<endl; // ask user for input
    for(int i=0;i<5;i++) {// loop through students
	cout <<"enter the attendence of student "<<i+1<<"= ";
        for(int j=0;j<7;j++) { // loop through days
            cin>>attendance[i][j]; // input attendance value
        }
    }

    studentAttendance(attendance); // call function to calculate student totals

    int top=highestAttendance(attendance); // call function to find highest attendance
    cout<<"Student "<<top+1<<" has highest attendance"<<endl; // display student number

    double percent=classAttendancePercent(attendance); // call function to calculate percentage
    cout<<"Overall class attendance percentage = "<<percent<<"%"<<endl; // display percentage

    return 0; // end program
}
