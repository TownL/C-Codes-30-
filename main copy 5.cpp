// This program uses a switch statement to determine
// the item selected from a menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    char choice;
    int months;
    double charges;
    
    const char ADULT = 40.0, CHILD = 20.0, SENIOR = 30.0;
    
    
    
    do{
        
        
        cout<< "\t\tHealth Club Membership Menu\n\n"
        << "a. Standard Adult Membership\n"
        << "b. Child Membership\n"
        << "c. Senior Citizen Membership\n"
        << "d. Quit the Program\n\n"
        << "Enter your choice: ";
        cin>>choice;
        
        
        cout << fixed << showpoint << setprecision(2);
        
        
        
        
        
        switch (choice)
        {
                
            case 'a':
            case 'A':
                cout << "For how many months? ";
                cin >> months;
                while(months<=0){
                    cout<<"Error your number must be positive\n";
                    cout << "For how many months? ";
                    cin >> months;
                }
                charges = months * ADULT;
                cout << "The total charges are $" << charges << endl;
                break;
                
            case 'b':
            case 'B':
                
                do{
                    cout << "For how many months? ";
                    cin >> months;
                    if (months <=0){
                        cout<<"Error your number must be positive\n";
                    }
                    
                } while(months<=0);
                
                charges = months * CHILD;
                cout << "The total charges are $" << charges << endl;
                
                break;
                
                
            case 'c':
            case 'C':
                
                cout << "For how many months? ";
                cin >> months;
                if(months <=0){
                    cout<<"Error your number must be positive\n";
                }
                else
                {
                    charges = months * SENIOR;
                    cout << "The total charges are $" << charges << endl;
                }
                break;
                
            case 'd':
            case 'D':
                
                cout << "Program ending.\n";
                break;
                
            default:
                cout << "The valid choices are 1 through 4.\n Run the program again and select one of those.\n";
        }
        
        
    } while((choice != 'd') && (choice != 'D'));
    
    
    return 0;
}

