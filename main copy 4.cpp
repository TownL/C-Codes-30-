// This program calculates the circumference of a circle.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    // Constants
    const double PI = 3.14159;
    
    double DIAMETER;
    double circumference;
    
    cout<<"Please enter the diameter:\n";
    cout<<"[To exit the program write '999']"<<endl;
    cin>>DIAMETER;
    
    while(DIAMETER != -1){
        
        circumference = PI * DIAMETER;
        cout<<fixed<<showpoint<<setprecision(1);
        
        cout << "The circumference is: " << circumference << endl;
        cout<<"Please enter the diameter:\n";
        cout<<"[To exit the program write '999']"<<endl;
        cin>>DIAMETER;
    }
        
return 0;
}


/*
 
 Please enter the diameter:
 [To exit the program write '999']
 7
 The circumference is: 22.0
 Please enter the diameter:
 [To exit the program write '999']
 -1
 Program ended with exit code: 0
 
 */
