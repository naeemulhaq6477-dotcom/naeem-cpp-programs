//NAME = NAEEM UL HAQ
// REG.NO=0665
#include <iostream> // include input-output library
using namespace std; // use standard namespace

// function to calculate total consumption for each region
void regionTotal(int arr[4][7]) { // function takes 2D array
    for(int i=0;i<4;i++) { // loop through 4 regions
        int sum=0; // variable for sum
        for(int j=0;j<7;j++) { // loop through 7 days
            sum+=arr[i][j]; // add consumption of each day
        }
        cout<<"Region "<<i+1<<" total consumption = "<<sum<<" MW"<<endl; // display total for region
    }
}

// function to identify day with highest total demand
int highestDay(int arr[4][7]) { // function takes 2D array
    int maxDay=0; // assume first day is max
    int maxSum=0; // variable for max sum
    for(int j=0;j<7;j++) { // loop through 7 days
        int sum=0; // variable for sum of one day
        for(int i=0;i<4;i++) { // loop through 4 regions
            sum+=arr[i][j]; // add consumption of all regions for that day
        }
        if(sum>maxSum) { // check if current day sum is greater
            maxSum=sum; // update max sum
            maxDay=j; // update day index
        }
    }
    return maxDay; // return index of day with highest demand
}

// function to compute overall average consumption
double overallAverage(int arr[4][7]) { // function takes 2D array
    int total=0; // variable for total sum
    for(int i=0;i<4;i++) { // loop through 4 regions
        for(int j=0;j<7;j++) { // loop through 7 days
            total+=arr[i][j]; // add all values
        }
    }
    return total/28.0; // return average (4*7=28 values)
}

int main() { // main function starts
    int grid[4][7]; // declare 2D array for 4 regions and 7 days

    cout<<"Enter power consumption data (MW) for 4 regions over 7 days:"<<endl; // ask user for input
    for(int i=0;i<4;i++) { // loop through regions
        for(int j=0;j<7;j++) { // loop through days
            cin>>grid[i][j]; // input consumption value
        }
    }

    regionTotal(grid); // call function to calculate region totals

    int day=highestDay(grid); // call function to find highest demand day
    cout<<"Day with highest total demand = "<<day+1<<endl; // display day (1-based index)

    double avg=overallAverage(grid); // call function to compute average
    cout<<"Overall average consumption = "<<avg<<" MW"<<endl; // display average

    return 0; // end program
}
