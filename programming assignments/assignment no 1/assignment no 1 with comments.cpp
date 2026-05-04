//NAME= NAEEM UL HAQ
//REG.NO = 06652
#include <iostream>                                // include input/output stream library
using namespace std;                               // use standard namespace for cin and cout
 
int main() {                                       // main function starting point
     
     //  (1) variable declaration
    double voltage,current,resistance;              // declare voltage, current, resistance as double
    
    // (2) displaying welcome message
    cout<<"welcome to object oriented programming in c++"; // print welcome message                 
    
    //(3) storing value in integral variable age                             
    int age;                                       // declare integer variable age
    cout<<"enter age = ";                          // prompt user for age
    cin>>age;                                      // read input into age
    cout<<"your age is = "<<age<<endl;             // display entered age
    
    //(4) printing overheating detected if value is greater than 100
    int temp;                                      // declare integer variable temp
    cout<<"enter temperature = ";                  // prompt user for temperature
    cin>>temp;                                     // read input into temp
    if(temp>100){                                  // check if temp > 100
    cout<<" overheating detected!"<<endl;}         // print overheating message
    else                                           // otherwise
    {cout<<"condition is normal "<<endl;}          // print normal condition
    
    //(5) computing area of a circle
    double area,r;                                 // declare area and radius
    cout<<"enter radius of a circle = ";           // prompt user for radius
    cin>>r;                                        // read radius
    area=(3.14159*r*r);                            // compute area using formula πr²
    cout<<"area of the circle is = "<<area<<endl;  // print area
    
    
    //(6)printing the values of x,y,and z
    int x,y,z;                                     // declare integers x, y, z
    cout<<"enter the value of x,y,and z =";        // prompt user for x, y, z
    cin>>x>>y>>z;                                  // read values
    cout<<"the value of x= "<<x<<", y= "<<y<<",z= "<<z<<endl; // print values
    
    //(7) assigning the values of sum of voltage and current to total
    double total;                                  // declare total
    cout<<"enter voltage and current = ";          // prompt user for voltage and current
    cin>>voltage>>current;                         // read values
    total=voltage+current;                         // compute sum
    cout<<"total = "<<total<<endl;                 // print total
    
    //(8)division by zero
    int denominator;                               // declare denominator
    cout<<"enter denominator = ";                  // prompt user
    cin>>denominator;                              // read denominator
    if(denominator==0){                            // check if denominator is zero
    cout<<"error division by zero!";}              // print error message
    else{                                          // otherwise
        cout<<"divisible "<<endl;}                 // print divisible
    
    //(9)increminting variable count by 1
    int count;                                     // declare count
    cout<<"enter a value to be incremented by 1 = "; // prompt user
    cin>>count;count++;                            // read count and increment by 1
    cout<<"the increminted value of count is = "<<count<<endl; // print incremented value
    
    //(10)reding three floating point variables
    float a,b,c;                                   // declare float variables a, b, c
    cout<<"enter three values = ";                 // prompt user
    cin>>a>>b>>c;                                  // read values
    
    //(11) printing values of  total resistance of three resistors in series
    double R1,R2,R3;                               // declare resistors
    cout<<"enter the values of R1,R2,R3 to get resistance in series = "; // prompt user
    cin>>R1>>R2>>R3;                               // read resistor values
    resistance=R1+R2+R3;                           // compute series resistance
    cout<<"total resistance is = "<<resistance<<" ohms"<<endl; // print result
    
    //(12)printing total resistance in parallel
   double r1,r2,r3,parallelresistance;            // declare resistors and parallel resistance
   cout<<"enter the values of r1,r2,r3 to get resistance in parallel = "; // prompt user
   cin>>r1>>r2>>r3;                               // read resistor values
   parallelresistance=1/(1/r1+1/r2+1/r3);         // compute parallel resistance
   cout<<"parallel resistence is = "<<parallelresistance<<" ohms"<<endl; // print result
   
   //(13) voltage division rule
    double v=15,iR2=30,VR2,iR1=10;                // declare and assign values
    VR2 = v * (iR2 / (iR1 + iR2));                // compute voltage across R2
    cout<<"the value of voltage across R2 is = "<<VR2<<endl; // print result
    
    //(14)current division rule
   double I, IR2;                                 // declare total current and current through R2
   v=15,iR2=30,VR2,iR1=10;                        // assign values
   I = v /(iR1 * iR2 /(iR1 + iR2));               // compute total current
   IR2 = I*(iR1/(iR1+iR2));                       // compute current through R2
   cout<<"Current through R2 = "<<IR2<<endl;      // print result
   
   //(15)calculating semester gpa
   int subjects;                                  // declare number of subjects  
    cout << "Enter number of subjects: ";         // prompt user  
    cin >> subjects;                              // read number of subjects  

    double totalPoints=0,totalCredits=0;          // initialize totals  
      double gradePoint, credit;                  // declare grade point and credit variables
      
    for(int i =1; i<= subjects;i++) {             // loop through subjects  
        cout << "Enter grade point and credit hours for subject "<<i<<": "; // prompt user  
        cin >> gradePoint >> credit;              // read values  
        totalPoints+=gradePoint*credit;           // accumulate total points  
        totalCredits+=credit;                     // accumulate total credits  
    }
    double GPA=totalPoints/totalCredits;          // compute GPA  
    cout << "Semester GPA = "<<GPA<<endl;         // print GPA  

    return 0;                                     // end program successfully

}                                                 // closing braces for main function

