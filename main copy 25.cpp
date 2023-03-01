/*
 
 Actividad 7.3: Arrreglo Bidimensional
 CECS2203 Computer Programming Laboratory I
 
 Nombre: Jan M. Rodriguez Cumba # Est: 136125   Sec: 05
 
 Instrucciones para el estudiante:
 
 1. Implemente funciones con arreglo bidimensionales como parámetros de entrada.
 2. Implemente una función con un menú de opciones y switch/case
 3. Implemente un ciclo para repetir el menú de opciones.
 4. Implemente su código
 5. Envíe su solución en un archivo en formato PDF.
 
 Descripción de los problemas:
 
 1. (Malik) Airplane Seating Assignment
 
 Write a program that can be used to assign seats for a commercial airplane.
 The airplane has 13 rows, with six seats in each row.
 Rows 1 and 2 are first class, rows 3 through 7 are business class, and rows 8 through 13 are
 economy class.
 Your program must prompt the user to enter the following information:
 
 a. Ticket type (first class, business class, or economy class)
 b. Desired seat Output the seating plan in the following form:
 
            A B C D E F
 ROW 1      * * X * X X
 ROW 2      * X * X * X
 ROW 3      * * X X * X
 ROW 4      X * X * X X
 ROW 5      * X * X * *
 ROW 6      * X * * * X
 ROW 7      X * * * X X
 ROW 8      * X * X X *
 ROW 9      X * X X * X
 ROW 10     * X * X X X
 ROW 11     * * X * X *
 ROW 12     * * X X * X
 ROW 13     * * * * X *
 
 
 Here, * indicates that the seat is available; X indicates that the seat is occupied.
 Make this a menu-driven program; show the user’s choices and allow the user to
 make the appropriate choices.
 
 Malik, D. S. (2017). C++ Programming:
 Program Design Including Data Structures, 8thEdition.
 
 Valor 100 pts.
 
 */



#include <iostream>
using namespace std;

const int ROWS = 13;
const int SEATS = 6;



void printSeats(char seatGrid[ROWS][SEATS], int startRow, int endRow){
    
    for(int j = 0; j < SEATS; j++)
    {
        cout << "\t  " << (char)('A' + j);
    }
    cout << endl;
    
    for(int i = startRow - 1; i < endRow; i++)
    {
        cout << "Row " << (i + 1);
        for(int j = 0; j < SEATS; j++)
        {
            cout << "\t" << seatGrid[i][j];
            
        }
        cout << endl;
    }
}


bool isSeatAvailable(char seatGrid[ROWS][SEATS], int r, char c){
    
    int seat = (int)(c - 'A');
    return (seatGrid[r - 1][seat] != 'X');
    
}


void Menu(int choice, char type, char seat, char seatGrid[ROWS][SEATS]){
    
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<SEATS; j++)
        {
            seatGrid[i][j] = '*';
            
        }
        
    }
    
    do{
        
        cout << "1. Book a seat\n";
        cout << "2. Show Availability\n";
        cout << "3. Quit." << endl;
        cout << "Enter your choice: ";
        cin>>choice;
        
        switch(choice){
                
                
            case 1:
            {
                int r = 0;
                
                cout << "\nEnter (F)irst Class, (B)usiness Class or (E)conomy class: ";
                cin >> type;
                
                
                bool found = false;
                if(type == 'F')
                {
                    cout << "First class Availability:" << endl;
                    printSeats(seatGrid, 1, 2);
                    cout << "Enter seat from A to F:";
                    cin >> seat;
                    for(r = 1; r <= 2; r++)
                    {
                        if(isSeatAvailable(seatGrid, r, seat))
                        {
                            found = true;
                            cout << "Seat "<<r<<seat<<" has been reserved for you. Thanks!"<<endl;
                            //break;
                        }
                        
                    }
                    
                }
                else if(type == 'B')
                {
                    cout << "Business class Availability:" << endl;
                    printSeats(seatGrid, 3, 7);
                    cout << "Enter seat from A to F:";
                    cin >> seat;
                    for(r = 3; r <= 7; r++)
                    {
                        if(isSeatAvailable(seatGrid, r, seat))
                        {
                            found = true;
                            cout << "Seat "<<r<<seat<<" has been reserved for you. Thanks!"<<endl;
                            break;
                            
                        }
                        
                    }
                    
                }
                else if(type == 'E')
                {
                    cout << "Economy class Availability:" << endl;
                    printSeats(seatGrid, 8, 13);
                    cout << "Enter seat from A to F:";
                    cin >> seat;
                    for(r = 8; r <= 13; r++)
                    {
                        if(isSeatAvailable(seatGrid, r, seat))
                        {
                            found = true;
                            cout << "Seat "<<r<<seat<<" has been reserved for you. Thanks!"<<endl;
                            break;
                            
                        }
                        
                    }
                    
                }
                else
                {
                    cout << "Invalid Class entered." << endl;
                }
                if(!found)
                {
                    cout << "Sorry, no " << seat << " seat is available." << endl;
                    
                }
                else
                {
                    seatGrid[r - 1][seat - 'A'] = 'X';
                    
                }
                
                break;
            }
                
                
            case 2:
            {
                printSeats(seatGrid, 1, 13);
                
                break;
            }
                
                
            case 3:
            {
                break;
            }
                
                
            default:
                cout << "Invalid choice." << endl;
                
        }
    
        
    }while(choice != 3);
}
       

int main()
{
    char seatGrid[ROWS][SEATS];
    int r = 0;
    char c = 0;
    int choice = 0;
    char type = 0;
    char seat = 0;
    
    isSeatAvailable(seatGrid, r, c);
    Menu(choice, type, seat, seatGrid);

    
    return 0 ;
}




/*
 
 ------OUTPUT------
 
 
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 4
 Invalid choice.
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 2
          A    B    C    D    E    F
 Row 1    *    *    *    *    *    *
 Row 2    *    *    *    *    *    *
 Row 3    *    *    *    *    *    *
 Row 4    *    *    *    *    *    *
 Row 5    *    *    *    *    *    *
 Row 6    *    *    *    *    *    *
 Row 7    *    *    *    *    *    *
 Row 8    *    *    *    *    *    *
 Row 9    *    *    *    *    *    *
 Row 10   *    *    *    *    *    *
 Row 11   *    *    *    *    *    *
 Row 12   *    *    *    *    *    *
 Row 13   *    *    *    *    *    *
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 1

 Enter (F)irst Class, (B)usiness Class or (E)conomy class: F
 First class Availability:
          A    B    C    D    E    F
 Row 1    *    *    *    *    *    *
 Row 2    *    *    *    *    *    *
 Enter seat from A to F:C
 Seat 1C has been reserved for you. Thanks!
 Seat 2C has been reserved for you. Thanks!
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 2
          A    B    C    D    E    F
 Row 1    *    *    X    *    *    *
 Row 2    *    *    X    *    *    *
 Row 3    *    *    *    *    *    *
 Row 4    *    *    *    *    *    *
 Row 5    *    *    *    *    *    *
 Row 6    *    *    *    *    *    *
 Row 7    *    *    *    *    *    *
 Row 8    *    *    *    *    *    *
 Row 9    *    *    *    *    *    *
 Row 10   *    *    *    *    *    *
 Row 11   *    *    *    *    *    *
 Row 12   *    *    *    *    *    *
 Row 13   *    *    *    *    *    *
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 3
 
 Program ended with exit code: 0
 
 ------------------------------------------
 
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 1

 Enter (F)irst Class, (B)usiness Class or (E)conomy class: E
 Economy class Availability:
          A    B    C    D    E    F
 Row 8    *    *    *    *    *    *
 Row 9    *    *    *    *    *    *
 Row 10   *    *    *    *    *    *
 Row 11   *    *    *    *    *    *
 Row 12   *    *    *    *    *    *
 Row 13   *    *    *    *    *    *
 Enter seat from A to F:A
 Seat 8A has been reserved for you. Thanks!
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 2
          A    B    C    D    E    F
 Row 1    *    *    *    *    *    *
 Row 2    *    *    *    *    *    *
 Row 3    *    *    *    *    *    *
 Row 4    *    *    *    *    *    *
 Row 5    *    *    *    *    *    *
 Row 6    *    *    *    *    *    *
 Row 7    *    *    *    *    *    *
 Row 8    X    *    *    *    *    *
 Row 9    *    *    *    *    *    *
 Row 10   *    *    *    *    *    *
 Row 11   *    *    *    *    *    *
 Row 12   *    *    *    *    *    *
 Row 13   *    *    *    *    *    *
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 1

 Enter (F)irst Class, (B)usiness Class or (E)conomy class: B
 Business class Availability:
          A    B    C    D    E    F
 Row 3    *    *    *    *    *    *
 Row 4    *    *    *    *    *    *
 Row 5    *    *    *    *    *    *
 Row 6    *    *    *    *    *    *
 Row 7    *    *    *    *    *    *
 Enter seat from A to F:C
 Seat 3C has been reserved for you. Thanks!
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 2
          A    B    C    D    E    F
 Row 1    *    *    *    *    *    *
 Row 2    *    *    *    *    *    *
 Row 3    *    *    X    *    *    *
 Row 4    *    *    *    *    *    *
 Row 5    *    *    *    *    *    *
 Row 6    *    *    *    *    *    *
 Row 7    *    *    *    *    *    *
 Row 8    X    *    *    *    *    *
 Row 9    *    *    *    *    *    *
 Row 10   *    *    *    *    *    *
 Row 11   *    *    *    *    *    *
 Row 12   *    *    *    *    *    *
 Row 13   *    *    *    *    *    *
 1. Book a seat
 2. Show Availability
 3. Quit.
 Enter your choice: 3
 Program ended with exit code: 0
 
 */
