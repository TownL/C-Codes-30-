//
//  main.cpp
//  Manipulacion de Arreglos 4.2 Code
//
//  Created by Jan M Rodriguez cumba on 12/5/22.
//

/*
 
 Instrucciones para el estudiante:
 
 1. Implementar las operaciones utilizando arreglos numéricos.
 2. Implemente funciones que contengan como parámetro el nombre del arreglo y su
    dimensión.
 3. Coloque la salida del programa debajo su código
 4. Envíe su código y tabla de ejecución en formato PDF.
 
    Descripción de los problemas:
 
    1, Implemente las operaciones estadísticas de la media, la desviación estándar y varianza
    de un conjunto de números reales.
 a. Pida al usuario la cantidad de.
 b. Implemente las siguientes funciones:
 
 i. getValues: Función consta de dos parámetros de entrada, el
    nombre del arreglo y su dimensión.
 
 ii. getMean: Función consta de dos parámetros de entrada el
    nombre del arreglo y su dimensión. La función calcula la
    media de un conjunto de números mediante siguiente

 
 iii. getVariance: Función consta de dos parámetros de entrada, el
    nombre del arreglo y su dimensión. La función que calcula la
    varianza de un conjunto de números mediante la siguiente
    ecuación:
 
  Donde :
 
 
    Invoque la función getMean implementada en la parte ii dentro
    de la implementación de su función.
 
 iv. getStandardDesviation: Función consta de dos parámetros
    de entrada, el nombre del arreglo y su dimensión. La función
    que calcula la desviación estándar de un conjunto de números
    mediante la siguiente ecuación :
 
 
 
    Invoque la función getMean y getVariance implementadas en
    la parte ii y iii dentro de la función.
 c. Implemente su programa principal, mediante un menú de opciones (función)/
    switch/case y repita su programa hasta que el usuario entre una opción de
    salida.
 d. Valide su programa utilizando los números en el ejemplo de la tabla 2.1
 
 Valor Total de 100 pts.
 
 */



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



void getValues(int ARRAY[], int count){
    
    
    cout << "The amount of numbers used are  " << count << endl;
    for (int A = 0;A < count;A++)
    {
        cout<<"The #"<<A+1<<" is: ";
        cout<< ARRAY[A]<<endl;
    }
}

void getmean(int ARRAY[], int count, int &mean){
    
    int sum = 0;
    
    for (int number = 0;number < count;number++)
        {
            sum += ARRAY[number];
        }
    mean = sum / count;
}


void getVariance(int ARRAY[], int count, int mean, int &variance){
    
    int sum = 0;
    int sum2 = 0;
    
    
    for (int i = 0;i < count;i++)
    {
        sum += ARRAY[i];
        mean = sum / count;
    }
    mean = mean;
    for (int i = 0;i < count;i++)
    {
        sum2 += ((ARRAY[i] - mean) * (ARRAY[i] - mean));
        variance = sum2 / (count-1) ;
    }
    
}


void getStandardDesviation(int ARRAY[], int count, int mean, int variance, int &desviation){
    
    
    int sum = 0;
    int sum2 = 0;
    
    for (int i = 0;i < count;i++)
    {
        sum = sum + ARRAY[i];
    }
    mean = sum / count;

    mean = mean;
    for (int i = 0;i < count;i++)
    {
        sum2 += ((ARRAY[i] - mean) * (ARRAY[i] - mean));
        variance = sum2 / (count - 1);
        
    }
    desviation = sqrt(variance);
}



int main(){
    
    const int SIZE = 100;
    int count, mean, variance, desviation;
    int ARRAY[SIZE];
    
    cout << "Enter the amount of numbers you are going use:\n";
    cin >> count;
    cout << "Enter the numbers\n";
    for (int i = 0;i < count;i++)
    {
        cin >> ARRAY[i];
    }
    
    getValues(ARRAY, count);
    
    getmean(ARRAY, count, mean);
    cout <<"The Mean is  "<< mean << endl;
    
    getVariance(ARRAY, count, mean, variance);
    cout << "The Variance is  " << variance << endl;
    
    getStandardDesviation(ARRAY, count, mean, variance, desviation);
    cout << "The Desviation is  " << desviation << endl;
    
    cout<<endl;
    
    return 0;
}



/*
 ---------OUTPUT--------
 
 Enter the amount of numbers you are going use:
 5
 Enter the numbers
 45
 89
 23
 65
 12
 The amount of numbers used are  5
 The #1 is: 45
 The #2 is: 89
 The #3 is: 23
 The #4 is: 65
 The #5 is: 12
 The Mean is  46
 The Variance is  974
 The Desviation is  31

 Program ended with exit code: 0
 
 
 */
