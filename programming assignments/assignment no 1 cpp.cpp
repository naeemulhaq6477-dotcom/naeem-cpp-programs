//NAME= NAEEM UL HAQ
//REG.NO = 06652
#include <iostream>                                //tells the compiler to include input output stream library
using namespace std;                            // tells the compiler to use standard namespace std:: foreach cin and cout
 
int main() {                                    // main function starting point with opening braces
	 
	 //  (1) variable declaration
	double voltage,current,resistance;                             
	
	// (2) displaying welcome message
	cout<<"welcome to object oriented programming in c++";                 
	
	//(3) storing value in integral variable age                             
	int age;
	cout<<"enter age = ";
	cin>>age;
	cout<<"your age is = "<<age<<endl;
	
	//(4) printing overheating detected if value is greater than 100
    int temp;
    cout<<"enter temperature = ";
    cin>>temp;
	if(temp>100){
	cout<<" overheating detected!"<<endl;}
	else
	{cout<<"condition is normal "<<endl;}
	
	//(5) computing area of a circle
	double area,r;
	cout<<"enter radius of a circle = ";
	cin>>r;
	
	area=(3.14159*r*r);
	cout<<"area of the circle is = "<<area<<endl;
	
	
	//(6)printing the values of x,y,and z
	int x,y,z;
	cout<<"enter the value of x,y,and z =";
	cin>>x>>y>>z;
	cout<<"the value of x= "<<x<<", y= "<<y<<",z= "<<z<<endl;
	
	//(7) assigning the values of sum of voltage and current to total
	double total;
	cout<<"enter voltage and current = ";
	cin>>voltage>>current;
	total=voltage+current;
	cout<<"total = "<<total<<endl;
	
	//(8)division by zero
	int denominator;
	cout<<"enter denominator = ";
	cin>>denominator;
	if(denominator==0){
	cout<<"error division by zero!";}
	else{
		cout<<"divisible "<<endl;}
	
	//(9)increminting variable count by 1
	int count;
	cout<<"enter a value to be incremented by 1 = ";
	cin>>count;count++;
	cout<<"the increminted value of count is = "<<count<<endl;
	
	//(10)reding three floating point variables
	
	float a,b,c;
	cout<<"enter three values = ";
	cin>>a>>b>>c;
	
	//(11) printing values of  total resistance of three resistors in series
	double R1,R2,R3;
	cout<<"enter the values of R1,R2,R3 to get resistance in series = ";
	cin>>R1>>R2>>R3;
	resistance=R1+R2+R3;
	cout<<"total resistance is = "<<resistance<<" ohms"<<endl;
	
	//(12)printing total resistance in parallel
   double r1,r2,r3,parallelresistance;
   cout<<"enter the values of r1,r2,r3 to get resistance in parallel = ";
   cin>>r1>>r2>>r3;
 
   parallelresistance=1/(1/r1+1/r2+1/r3);
   cout<<"parallel resistence is = "<<parallelresistance<<" ohms"<<endl;
   
   //(13) voltage division rule
    
    double v=15,iR2=30,VR2,iR1=10;
    VR2 = v * (iR2 / (iR1 + iR2));
    cout<<"the value of voltage across R2 is = "<<VR2<<endl;
    
    //(14)current division rule
   double I, IR2;
   v=15,iR2=30,VR2,iR1=10;
   I = v
   /(iR1 * iR2 /(iR1 + iR2)); 
    IR2 = I*(iR1/(iR1+iR2));
   cout<<"Current through R2 = "<<IR2<<endl;
   
   //(16)calculating semester gpa
   int subjects;  
    cout << "Enter number of subjects: ";  
    cin >> subjects; 

    double totalPoints=0,totalCredits=0;  
      double gradePoint, credit;
      
    for(int i =1; i<= subjects;i++) {  
        cout << "Enter grade point and credit hours for subject "<<i<<": ";  
        cin >> gradePoint >> credit;  

        
        totalPoints+=gradePoint*credit;  
        totalCredits+=credit;  
    }
    double GPA=totalPoints/totalCredits;  
    cout << "Semester GPA = "<<GPA<<endl;  

    return 0;	              // tells the computer that program has ended successfully

}                          // closing braces used to close the body of main function
