/*
 Jan M. Rodriguez Cumba
 
 21. The Speed of Sound in Gases  When sound travels through a gas, its speed depends primarily on the density of the medium. The less dense the medium, the faster the speed will be. The
     following table shows the approximate speed of sound at 0 degrees centigrade, measured in
     meters per second, when traveling through carbon dioxide, air, helium, and hydrogen.
 Medium
 Carbon Dioxide
 Air
 Helium
 Hydrogen
 
 Speed (Meters per Second)  258.0 331.5 972.0 1,270.0
 Write a program that displays a menu allowing the user to select one of
 these four gases. After a selection has been made, the user should enter the number of seconds it
 took for the sound to travel in this medium from its source to the location at which it was
 detected. The program should then report how far away (in meters) the source of the sound was from
 the detection location.
 
 Input Validation: Check that the user has selected one of the available menu choices. Do not accept times less than 0 seconds or more than 30 seconds.
 
 a. Valide el tiempo dado por el usuario
 b. Implemente un menú de opciones (use un menú de letras), que contenga una  opción de salida.
 c. Implemente su código con una instrucción de switch/case.
 d. Repita su programa con un ciclo do/while.
 e. Use constantes en su implementación.
 
 */


#include <iostream>
using namespace std;
int main()
{
    char choice;
    int travel_time;
    
    do
    {
        
        cout << "=========================\n";
        cout << "    Medium               \n";
        cout << "-------------------------\n";
        cout << "    A. Carbon Dioxide    \n";
        cout << "    B. Air               \n";
        cout << "    C. Helium            \n";
        cout << "    D. Hydrogen          \n";
        cout << "    E. Quit              \n";
        cout << "=========================\n";
        cin >> choice;
        
        switch (choice)
        {
                
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
            case 'd':
            case 'D':
                
                
                cout << "Enter number of seconds it took for the sound to travel.\n";
                cin >> travel_time;
                
                if (travel_time < 0 || travel_time > 30)
                {
                    cout << "We're sorry. Number of second must be within 0 and 30 seconds.\n";
                    
                }
                else
                {
                    cout << "Through \n";
                    
                    if (choice == 'a' || choice == 'A')
                    {
                        travel_time *= 258.0;
                        cout << "Carbon Dioxide ";
                        
                    }
                    else if (choice == 'b' || choice == 'B')
                    {
                        travel_time *= 331.5;
                        cout << "Air ";
                        
                    }
                    else if (choice == 'c' || choice == 'C')
                    {
                        travel_time *= 972.0;
                        cout << "Helium ";
                        
                    }
                    else if (choice == 'd' || choice == 'D')
                    {
                        travel_time *= 1270.0;
                        cout << "Hydrogen ";
                        
                    }
                    cout << "the source of sound is "<< travel_time << " meters away.\n";
                    
                }
                break;
                
            default:
                cout << "We're sorry. A letter between A and D must be chosen.Return to the program and try again.\n"<< endl;
                
            case 'e':
            case 'E':
                cout<<"Thanks for promote our program\n";
                
        }
        
    }
    while (choice != 'e'&&'E');
    cout<<"Have a nice day\n";

    return 0;
    
}

/*
 
 
 =========================
     Medium
 -------------------------
     A. Carbon Dioxide
     B. Air
     C. Helium
     D. Hydrogen
     E. Quit
 =========================
 a
 Enter number of seconds it took for the sound to travel.
 10
 Through
 Carbon Dioxide the source of sound is 2580 meters away.
 =========================
     Medium
 -------------------------
     A. Carbon Dioxide
     B. Air
     C. Helium
     D. Hydrogen
     E. Quit
 =========================
 B
 Enter number of seconds it took for the sound to travel.
 15
 Through
 Air the source of sound is 4972 meters away.
 =========================
     Medium
 -------------------------
     A. Carbon Dioxide
     B. Air
     C. Helium
     D. Hydrogen
     E. Quit
 =========================
 C
 Enter number of seconds it took for the sound to travel.
 20
 Through
 Helium the source of sound is 19440 meters away.
 =========================
     Medium
 -------------------------
     A. Carbon Dioxide
     B. Air
     C. Helium
     D. Hydrogen
     E. Quit
 =========================
 D
 Enter number of seconds it took for the sound to travel.
 25
 Through
 Hydrogen the source of sound is 31750 meters away.
 =========================
     Medium
 -------------------------
     A. Carbon Dioxide
     B. Air
     C. Helium
     D. Hydrogen
     E. Quit
 =========================
 D
 Enter number of seconds it took for the sound to travel.
 30
 Through
 Hydrogen the source of sound is 38100 meters away.
 =========================
     Medium
 -------------------------
     A. Carbon Dioxide
     B. Air
     C. Helium
     D. Hydrogen
     E. Quit
 =========================
 E
 Thanks for promote our program
 Have a nice day
 Program ended with exit code: 0
 =======================================================================
 Medium
 -------------------------
 A. Carbon Dioxide
 B. Air
 C. Helium
 D. Hydrogen
 E. Quit
 =========================
 1
 We're sorry.
 A letter between A and D must be chosen.
 Rerun the  program dn try again.
 
 Program ended with exit code: 0
 
 */
