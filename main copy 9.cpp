
// This program asks for the lengths of the two sides of a
// right triangle. The length of the hypotenuse is then
// calculated and displayed.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double getSide (char side){
    double lengthSide;
    
    cout<<"Please enter the length of the side "<<side<<":"<<endl;
    cin>>lengthSide;
    
    return lengthSide;
}




double get_hypotenuse (double a, double b){
    double c;
    
    c = sqrt(pow(a, 2.0) + pow(b, 2.0));
    
    return c;
}




void display (double c)
{
    
    cout << "The length of the hypotenuse is ";
    cout << setprecision(2) << c << endl;
    
}


int main()
 {
     
    double a = 0, b = 0, c = 0;
    
    
    a = getSide ('a'); /*Es como una forma de definir la variable side y no tener que hacer dos funciones diferenctes.*/
    b = getSide ('b'); /*Ademas siempre vas a igualar a la variable que se retorna para darle como resultado el valor del resultado de la funcion.*/

    c = get_hypotenuse (a, b);

    display (c);

    
    return 0;
 }


/*
 
 ---------OUTPUT----------
 
 Please enter the length of the side a:
 5
 Please enter the length of the side b:
 12
 The length of the hypotenuse is 13
 Program ended with exit code: 0
 
 */
