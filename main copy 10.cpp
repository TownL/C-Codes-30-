/*
 
 Jan M. Rodriguez Cumba
 
 Instrucciones para el estudiante:
1. Implementar funciones con argumentos por referencia.
2. Coloque la salida de cada programa debajo su código
3. Envíe sus códigos y tablas de ejecución en formato PDF.
 
Descripción de los problemas:
1. (Gaddis) Programming Challenger, 2. Stadium Seating pág. 142, Cap 3.
a. Implemente tres funciones cuyos parámetros sean por valor y por referencia, las
funciones retornaran uno o mas valores por sus parámetros de entrada.
b. Implemente el contenido de las funciones en base a los siguientes prototipos:
 
i. void getNumberOfTickets(int &classA, int &classB, int&classC): Funcion que pide al usuario la cantidad de taquillas de cada tipo de clase.
ii. void getTotalCost(int classA, int classB, int classC, float &totalCost): Funcion que calcula el precio a pagar por la compra de todas las taquillas.
iii. void display(int classA, int classB, int classC, float totalCost): Funcion que imprime la cantidad de taquillas y el precio a pagar.
 
Valor Total de 100 pts.
 
 
2. Stadium Seating
 There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales. Format your dollar amount in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.
 
*/


#include <iostream>
#include <iomanip>
using namespace std;

void getNumTickets(int &classA, int &classB, int &classC){
    
    const int priceA = 15, priceB = 12, priceC = 9;
    
    cout<<"How many tickets was sold form class A?\n";
    cin>> classA;
    
    cout<<"How many tickets was sold form class B?\n";
    cin>> classB;

    cout<<"How many tickets was sold form class C?\n";
    cin>> classC;

    }

void getTotalCost(int classA, int classB, int classC, float &totalCost){
    
    const int priceA = 15, priceB = 12, priceC = 9;

    classA = classA * priceA;
    
    classB = classB * priceB;
    
    classC = classC * priceC;

    totalCost = classA + classB + classC;

}

void displayIncome(float totalCost){
        
    cout<<"The total Income generate for all the tickets is: $"<< totalCost<<endl;
    
}

int main(){
        
    int classA, classB, classC;
    float totalCost;
    
    cout<< fixed<< showpoint<< setprecision(2);
    
    cout<<"\t\t\t Lets calculate the total income for all the tickets: \n"<<endl;
    
    getNumTickets(classA, classB, classC);
    getTotalCost(classA, classB, classC, totalCost);
    displayIncome(totalCost);
    
    
    return 0;
}


/*
 
 ==========Output========
 
 Lets calculate the total income for all the tickets:

How many tickets was sold form class A?
10
How many tickets was sold form class B?
15
How many tickets was sold form class C?
40
The total Income generate for all the tickets is: $690.00
Program ended with exit code: 0
 
*/
