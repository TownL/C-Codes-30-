/*
 
 
 CECS2203 Computer Programming Laboratory I
 
 Nombre: Jan M. Rodriguez Cumba # Est:136125 Sec: 05
 
 Instrucciones para el estudiante:
 1. Implemente funciones con arreglo bidimensionales como parámetros de entrada.
 2. Implemente arreglos paralelos.
 3. Envíe su solución y la salida en un archivo en formato PDF.
 Descripción de los problemas:
 
 1. (Gaddis) Programming Challenges 9. Speakers’ Bureau, pág. 653, Cap 11.
 
 a. Implemente utilizando el concepto de arreglo paralelos.
 b. Los nombres de los conferenciantes, el teléfono, y el tema son arreglos de
    caracteres. El costo de cada una de las conferencias es de tipo float.
 c. Pida al usuario la cantidad de conferenciantes,
 d. Imprima todos los conferenciantes relacionados con el mismo tema.
 e. Implemente funciones con argumentos del tipo arreglo dimensionales y
    unidimensionales.
 
 Valor 100 pts.
 
 
 9. Speakers’ Bureau
 Write a program that keeps track of a speakers’ bureau.
 
 The program should use a structure to store the following data about a speaker:
 Name
 Telephone Number
 Speaking Topic
 Fee Required
 
 The program should use an array of at least 10 structures.
 It should let the user enter data into the array, change the contents of any element, and display
    all the data stored in the array.
 The program should have a menu-driven user interface.
 
 Input Validation: When the data for a new speaker is entered, be sure the user enters data for all
    the fields.
 No negative amounts should be entered for a speaker’s fee.

 */


#include <iostream>
#include<cstring>
using namespace std;
int main() {
    
    const int size = 30;
    char name[size][size];
    char telnumber[size][size];
    char topic[size][size];
    float fee[size];
    int numberofrows;
    
    
    cout << "Among how many speakers are(< 11): ";
    cin >> numberofrows;
    
    for (int row= 0; row < numberofrows; row++)
    {
        cin.ignore();
        cout << "Enter the name of the " << row + 1 << " speaker: ";
        cin.getline(name[row],30);
        cout << "Enter the phone number of the " << row + 1 << " speaker: ";
        cin.getline(telnumber[row], 30);
        cout << "Enter the topic the speaker " << row + 1 << " will be talking about: ";
        cin.getline(topic[row], 30);
        cout << "Enter the tax requested for " << row + 1 << " speaker: ";
        cin >> fee[row];
        
    }
    cout << "\n\n Speaker list:\n";
    cout << "Name\tTopic\t    Phone Number#  \tFee\n\n";
   
    for (int row = 0; row < numberofrows; row++)
    {
        cout << name[row] << "\t\t" << topic[row] << "\t\t" << telnumber
        [row] << "\t\t$" << fee[row] << "\n";
    }
    cout << endl;
    
    
    return 0;
    
}


/*
 
 Among how many speakers are(< 11): 3
 Enter the name of the 1 speaker: Jan
 Enter the phone number of the 1 speaker: 9394149719
 Enter the topic the speaker 1 will be talking about: Math
 Enter the tax requested for 1 speaker: 5.5
 Enter the name of the 2 speaker: Maria
 Enter the phone number of the 2 speaker: 7875643524
 Enter the topic the speaker 2 will be talking about: Science
 Enter the tax requested for 2 speaker: 4.2
 Enter the name of the 3 speaker: Alanis
 Enter the phone number of the 3 speaker: 9398785643
 Enter the topic the speaker 3 will be talking about: Live
 Enter the tax requested for 3 speaker: 7.3


 Speaker list:
 Name     Topic        Phone Number#      Fee
 
 Jan      Math         9394149719         $5.5
 Maria    Science      7875643524         $4.2
 Alanis   Life         9398785643         $7.3

 Program ended with exit code: 0
 
 */
