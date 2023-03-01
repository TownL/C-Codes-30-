/*
 
 1. (Gaddis) Programming Challenger 3. Lottery Winners Modification. 492, Cap 8.
 
 a. Modifique el algoritmo de ordenación implementado para que calcule e
    imprima el número de comparaciones, utilizando los datos que provee el
    problema #2.

 b. Modifique el Algoritmo de Binary Search que calcule e imprima el
    número de comparaciones . Use los datos que provee el problema #2
    en la búsqueda de ambos valores 79422 y 79421.
 
 
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


void BubblesortArray(int Picks[], const int NUMS, int &comparations){
    bool swap;
    int temp;
    
    do
    {
        swap = false;
            
            for (int count = 0; count < (NUMS - 1); count++)
            {
                comparations++;
                
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


void showArray(int Picks[], const int NUMS)
{
    for (int count = 0; count < NUMS; count++)
        cout << Picks[count] << " ";
    cout << endl;
    
}

int binarySearch(const int SearchArray[], int size, int value, int &comparations2)
{
    int first = 0, last = size - 1, middle, position = -1;
    
    bool found = false; // Flag
    
    while (!found && first <= last)
    {
        comparations2++;

        middle = (first + last) / 2; // Calculate midpoint
        if (SearchArray[middle] == value) // If value is found at mid
        {
            found = true;
            position = middle;
            
        }
        else if (SearchArray[middle] > value)
        { // If value is in lower half
            last = middle - 1;
        }
        else
        {
            first = middle + 1; // If value is in upper half
        }
    }
    return position;
}


void SelectionSortList(int Picks[], int NUMS, int &comparations3)
{
    int Scan, position, value;
    
    for (Scan = 0; Scan < (NUMS - 1); Scan++)
    {
        comparations3++;
        position = Scan;
        value = Picks[Scan];
        
        for (int index = Scan + 1; index < NUMS; index++)
        {
            if (Picks[index] < value)
            {
                value = Picks[index];
                position = index;
            }
            
            Picks[position] = Picks[Scan];
            Picks[Scan] = value;
        }
        
    }
}



int main()
{
    const int NUMS = 10;
    int Picks[NUMS] = { 55555, 13579, 26791, 33445, 62483, 79422, 26792, 85647, 93121, 77777};
    int result;
    int TicketNums;
    int comparations = 0;
    int comparations2 = 0;
    int comparations3 = 0;
    
    
    
    cout << "Bubblesort working: \n\n";
    BubblesortArray(Picks, NUMS, comparations);
    
    cout<<"Bubble sort finished sorting in: "<<comparations<<" comparations."<<endl;
    cout<<"\nThis are the winning numbers after Bubblesort: \n";
    showArray(Picks, NUMS);
    cout<<endl;

    cout << "Enter your 5 digit Ticket number:\n ";
    cin  >> TicketNums;
    
    result = binarySearch(Picks, NUMS, TicketNums, comparations2);
    cout<<"\nThis is Binary search working: "<<endl;
    cout<<"Binary Search finished search in: "<<comparations2<<" comparations."<<endl;

    
    
    if (result == -1)
    {
        cout << "\nSorry, empty ticket. \n";
    }
    else
    {
        cout << "\nCongratulations!\nYou have the wonner Ticket number: "
             << TicketNums << endl;
    }
    
    cout << "\n\nSelectionsort working: \n\n";
    SelectionSortList(Picks, NUMS, comparations3);
    cout<<"Selection sort finished sorting in: "<<comparations3<<" comparations."<<endl;
    cout<<"\n\nThis are the winning numbers after Selectionsort: \n";
    showArray(Picks, NUMS);

    cout << "Enter your second 5 digit Ticket number:\n ";
    cin  >>TicketNums;
    
    
    result = binarySearch(Picks, NUMS, TicketNums, comparations2);
    cout<<"\nThis is Binary search working again: "<<endl;
    cout<<"Binary Search finished search in: "<<comparations2<<" comparations."<<endl;
    
    if (result == -1)
    {
        cout << "\nSorry, empty ticket. \n";
    }
    else
    {
        cout << "\nCongratulations!\nYou have the wonner Ticket Number: "
             << TicketNums << endl;
    }
    
    
    
    
    return 0;
}



/*
 
 ----------------OUTPUT-----------------------
 
 THIS CODE SHOWS YOU HOW SORT AN ARRAY WITH DIFERENT FUNTIONS WORKS.

 Bubblesort working:

55555
55555
55555
79422
93121
62483
85647
55555
79422
33445

This are the winning numbers after Bubblesort:
13579 26791 26792 33445 55555 62483 77777 79422 85647 93121

Enter your 5 digit Ticket number:
79422

This is Binary search working:
First is: 5
middle is: 7
First is: 5

Congratulations!
You have the wonner Ticket number: 79422


Selectionsort working:

13579
26791
26792
33445
55555
62483
77777
79422
85647


This are the winning numbers after Selectionsort:
13579 26791 26792 33445 55555 62483 77777 79422 85647 93121

Enter your second 5 digit Ticket number:
79421

This is Binary search working again:
First is: 5
Last is: 6
First is: 5
First is: 6
First is: 7

Sorry, empty ticket.
Program ended with exit code: 0
 
*/

