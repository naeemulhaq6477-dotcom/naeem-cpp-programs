//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
using namespace std; // use standard namespace

int main() { // main function starts
    int A[3][3],B[3][3],C[3][3]; // declare three 3x3 matrices

    cout<<"Enter elements of first 3x3 matrix:"<<endl; // ask user for first matrix
    for(int i=0;i<3;i++) { // loop for rows
        for(int j=0;j<3;j++) { // loop for columns
            cin>>A[i][j]; // input element into matrix A
        }
    }

    cout<<"Enter elements of second 3x3 matrix:"<<endl; // ask user for second matrix
    for(int i=0;i<3;i++) { // loop for rows
        for(int j=0;j<3;j++) { // loop for columns
            cin>>B[i][j]; // input element into matrix B
        }
    }

    for(int i=0;i<3;i++) { // loop for rows
        for(int j=0;j<3;j++) { // loop for columns
            C[i][j]=A[i][j]+B[i][j]; // add elements and store in matrix C
        }
    }

    cout<<"Resultant matrix after addition:"<<endl; // display result
    for(int i=0;i<3;i++) { // loop for rows
        for(int j=0;j<3;j++) { // loop for columns
            cout<<C[i][j]<<" "; // print each element of matrix C
        }
        cout<<endl; // move to next line after each row
    }

    return 0; // end program
}
