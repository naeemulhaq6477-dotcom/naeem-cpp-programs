                          // NAME = NAEEM UL HAQ
                           // ID = 5122416 / 0665

#include <iostream>
using namespace std;

int main() {                    // START OF MAIN FUNCTION
	
	double v,u,a,t;             // variable declaration
	
	cout<<"enter u ";            // prompt for initial velocity
	cin>>u;
	cout<<"enter a ";            // prompt for acceleration
	cin>>a;
	cout<<"enter t ";    // prompt for time
	cin>>t;
	
	v=u+a*t;               // calculate final velocity using equation
	
	cout<<"initial velocity = "<<u<<" m/s"<<endl;   // initial velocity
	cout<<"acceleration = "<<a<<"m/s^2"<<endl;      // acceleration
	cout<<"time = "<<t<<" s" <<endl;               // time
	cout<<"final velocity = "<<v<<" m/s"<<endl;    // final velocity

}
