/*
 
 1. (Gaddis) Programming Challenger 3. Lottery Winners Modification. 492, Cap 8.
 
 a. Use de las implementaciones de los Algoritmos Bubble Sort pág.472. y
 Selection Sort pág. 475. y la función showArray() para solucionar el
 problema.
 
 b. Inicialice el arreglo con los valores de su libro de texto y busque el siguiente
 valor = 79422. Construya una tabla de ejecución.
 
 c. Inicialice el arreglo con los valores de su libro de texto y busque el siguiente
 valor = 79421. Construya una tabla de ejecución.
 
 
 Lottery Winners
 A lottery ticket buyer purchases ten tickets a week, always playing the same ten five-digit
 “lucky” combinations. Write a program that initializes an array with these numbers and
 then lets the player enter this week’s winning five-digit number. The program should perform
 a linear search through the list of the player’s numbers and report whether or not one
 of the tickets is a winner this week. Here are the numbers:
     
     13579 26791 26792 33445 55555
     62483 77777 79422 85647 93121
 
 */


#include <iostream>
using namespace std;


void showArray(int Picks[], const int NUMS)
{
    for (int count = 0; count < NUMS; count++)
        cout << Picks[count] << " ";
    cout << endl;
    
}


void BubblesortArray(int Picks[], const int NUMS)
{
    bool swap;
    int temp;
    do
    {
        swap = false;
        for (int count = 0; count < (NUMS - 1); count++)
        {
            if (Picks[count] > Picks[count + 1])
            {
                temp = Picks[count];
                Picks[count] = Picks[count + 1];
                Picks[count + 1] = temp;
                swap = true;
                
            }
            
        }
        
    } while (swap);
    
}


int binarySearch(const int SearchArray[], int size, int value)
{
    int first = 0, last = size - 1, middle, position = -1;
    
    bool found = false; // Flag
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate midpoint
        if (SearchArray[middle] == value) // If value is found at mid
        {
            found = true;
            position = middle;
            
        }
        else if (SearchArray[middle] > value) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1; // If value is in upper half
        
    }
    return position;
}


void SelectionSearchlist(int Picks[], int NUMS)
{
    int startScan, position, value;
       
             for (startScan = 0; startScan < (NUMS - 1); startScan++)
             {
             position = startScan;
             value = Picks[startScan];
             for (int index = startScan + 1; index < NUMS; index++)
                   {
                   if (Picks[index] < value)
                        {
                        value = Picks[index];
                        position = index;
                        }
                   }
             Picks[position] = Picks[startScan];
             Picks[startScan] = value;
             }
    
}

int main()
{
    const int NUMS = 10;
    int Picks[NUMS] = { 55555, 13579, 26791, 33445, 62483, 79422, 26792, 85647, 93121, 77777};
    int result;
    int TicketNums;

    
    
    BubblesortArray(Picks, NUMS);
    cout<<"This are the winning numbers:(With Bubble Sort) \n";
    showArray(Picks, NUMS);
    cout<<endl;

    cout << "Enter your 5 digit Ticket number: ";
    cin  >> TicketNums;
    
    result = binarySearch(Picks, NUMS, TicketNums);
    
    if (result == -1)
    {
        cout << "Sorry, empty ticket. \n";
    }
    else
    {
        cout << "\nCongratulations!\nYou have the wonner Ticket number:\n"
             << TicketNums << endl<<endl;
    }
    
    SelectionSearchlist(Picks, NUMS);
    cout<<"This are the winning numbers:(With Selection Sort) \n";
    showArray(Picks, NUMS);
    cout<<endl;

    cout << "Enter your second 5 digit Ticket number: ";
    cin  >> TicketNums;
    
    result = binarySearch(Picks, NUMS, TicketNums);
    
    if (result == -1)
    {
        cout << "Sorry, empty ticket. \n";
    }
    else
    {
        cout << "Congratulations!\nYou have the wonner Ticket Number: "
             << TicketNums << endl;
    }
    
    
    return 0;
}




/*
 
 ----------------OUTPUT-----------------------

 This are the winning numbers:(With Bubble Sort)
 13579 26791 26792 33445 55555 62483 77777 79422 85647 93121

 Enter your 5 digit Ticket number: 79422

 Congratulations!
 You have the wonner Ticket number:
 79422

 This are the winning numbers:(With Selection Sort)
 13579 26791 26792 33445 55555 62483 77777 79422 85647 93121

 Enter your second 5 digit Ticket number: 79421
 
 Sorry, empty ticket.
 Program ended with exit code: 0
 */

