/*
 
 Instrucciones para el estudiante:
 1. Implementar una de las operaciones básicas con arreglos unidimensionales.
 2. Tabla de Ejecución.
 3. Coloque la salida del programa debajo su código
 4. Envíe su código y tabla de ejecución en formato PDF.
 
 Descripción de los problemas:
 1. (Gaddis) Calcule el Highest o el Lowest de un arreglo en una dimensión. Utilice el
 segmento de código descrito en pág. 401, Cap 7.
 
 a. Implemente su código
 b. Pida la cantidad de números que contiene el arreglo.
 c. Pida los valores al usuario.
 d. Use los siguientes 5 valores para su arreglo <45,89,23,65,12>
 e. Construya su tabla de ejecución que respalde su salida.
 
 
 */


#include <iostream>
using namespace std;




int main(){

    const int SIZE = 50;
    int numbers[SIZE];
    int size, highest, lowest;


    
    cout << "Please enter how many number you have: "<<endl;
    cin >> size;
    
    cout << "Please enter your numbers: "<<endl;
    for(int i = 0; i < size; i++ ){
        cin >> numbers[i];
    }
        
    highest = numbers[0];
    for (int count = 1; count < size; count++)
    {
        if (numbers[count] > highest)
        {
            highest = numbers[count];
        }
    }
    cout <<"The highest number is: " << highest <<endl;


    lowest = numbers[0];
    
    for (int count = 1; count < size; count++)
    {
        if (numbers[count] < lowest)
        {
            lowest = numbers[count];
        }
        
    }
    cout <<"The lowest number is: " << lowest <<endl;

    return 0;
    
}

/*
 ------Output------
 
 Please enter how many number you have:
 5
 Please enter your numbers:
 45
 89
 23
 65
 12
 The highest number is: 89
 The lowest number is: 12
 Program ended with exit code: 0
 
 */
