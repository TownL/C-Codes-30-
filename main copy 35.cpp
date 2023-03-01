/*
 
 Actividad 10.3: Funciones con parameros de variables tipo apuntador, por referencia y por valor.
 CECS2203 Computer Programming Laboratory I
 Nombre: Jan Rodriguez Cumba # Est:136125 Sec: 05
 
 Instrucciones para el estudiante:
 
 1. Implemente funciones que contenga variables del tipo apuntador como parámetros de entrada, que
    apuntan hacia arreglos unidimensionales.
 
 2. Implemente su código con funciones con parámetros.
 
 3. Envíe su solución en un archivo en formato PDF.
 
 Descripción de los problemas:
 
 1. (Gaddis) Program Challenges 9. Median Function pág 546 Cap 9.
 
 1. getValues: Función que consta de dos parámetros de entrada, una variable del tipo apuntador que
    apunta a un arreglo de numero enteros y la cantidad de elementos dentro del arreglo. La función
    pide al usuario los elementos y los coloca dentro del arreglo.
 
 2. getSelectionSort: Función que consta de dos parámetros de entrada, una variable del tipo
    apuntador que apunta a un arreglo de numero enteros y la cantidad de elementos dentro del
    arreglo.La funcion invoca al algoritmo del Selection Sort
 
 3. getMedian : Función que consta de dos parámetros de entrada, una variable del tipo apuntador que
    apunta a un arreglo de numero enteros y la cantidad de elementos dentro del arreglo. La función
    calcula al mediana de los valores contenidos del arreglo previamente ordenados.
 
 4. Implemente un programa que invoque a las funciones anteriores.
 
 5. Use notación de apuntador en la manipulación del arreglo numérico.
 
 6. Ejecute su programa con los siguientes arreglos: n = 6 ,<56,35,90,21,44,89> y para
    n = 7 <53,90,12,38,29,12,49>
 
 
 Valor Total de 100 pts.

 
 
 9. Median Function
 
 In statistics, when a set of values is sorted in ascending or descending order, its median is the
 middle value.
 If the set contains an even number of values, the median is the mean, or average, of
 the two middle values.
 Write a function that accepts as arguments the following:
 
 A) An array of integers
 
 B) An integer that indicates the number of elements in the array The function should determine the
    median of the array. This value should be returned as a double. (Assume the values in the array
    are already sorted.)
 
 Demonstrate your pointer prowess by using pointer notation instead of array notation in this
 function.
 
 */


#include <iostream>
using namespace std;

const int SIZE = 30;

void getValues(int *&NumbersPtr, int &N){
    
    cout<<"Please enter how many numbers you have:\n";
    cin>>N;
    
    for (int i = 0; i < N; i++){
        
        cout<<"Enter all the numbers:\n";
        cout<<"#"<< (i + 1)<<":"<<endl;
        cin>> *(NumbersPtr + i);
        
    }
    
    
}

void getSelectionSort(int *Numbers, int N){
    
    int minIndex, minValue;
    
    for (int i = 0; i < (N - 1); i++)
    {
        
        minIndex = i;
        minValue = *(Numbers + i);
        
        for (int j = i + 1; j < N; j++)
        {
            
            if(*(Numbers + j) < minValue)
            {
                minValue = *(Numbers + j);
                minIndex = j;
            }
                
        }
        
        *(Numbers + minIndex) = *(Numbers + i);
        *(Numbers + i) = minValue;
        
    }
    
}


double getMedian(int *NumbersPtr, int N){
    
    double median = 0;
    int temp = 0;
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N - i - 1; j++){
            
            if(*(NumbersPtr + j) < *(NumbersPtr + j + 1))
            {
            
                temp = *(NumbersPtr + j);
                *(NumbersPtr + j) = *(NumbersPtr + j + 1);
                *(NumbersPtr + j + 1) = temp;
                
            }
            
            if(N%2 == 0)
            {
                
                median = (*(NumbersPtr + i / 2) + *(NumbersPtr + 1 / 2 - 1)/2.0);
                
            }
            else
                median = *(NumbersPtr + i / 2);
        }
    
    return median;
}


int main(){
    
    
    int Numbers[SIZE];
    int *NumbersPtr = nullptr;
    double median = 0;
    int N = 0;
    NumbersPtr = Numbers;
    
    
    getValues(NumbersPtr, N);
    getSelectionSort(Numbers, N);
    
    cout<<"This is your array sorted: ";
    for(int i = 0; i < N; i++){
    cout<<Numbers[i]<<"|";
    }
    
    median = getMedian(NumbersPtr, N);
    
    cout<<"\nThis is the median: "<<median<<endl;

    
    return 0;
}




/*
 
 ---------OUTPUT----------
 
 
 n = 6 ,<56,35,90,21,44,89>
 
 
 Please enter how many numbers you have:
 6
 Enter all the numbers:
 #1:
 56
 Enter all the numbers:
 #2:
 35
 Enter all the numbers:
 #3:
 90
 Enter all the numbers:
 #4:
 21
 Enter all the numbers:
 #5:
 44
 Enter all the numbers:
 #6:
 89
 This is your array sorted: 21|35|44|56|89|90|
 This is the median: 56
 Program ended with exit code: 0
 
 
 
 
 n = 7 <53,90,12,38,29,12,49>
 
 
 
 Please enter how many numbers you have:
 7
 Enter all the numbers:
 #1:
 53
 Enter all the numbers:
 #2:
 90
 Enter all the numbers:
 #3:
 12
 Enter all the numbers:
 #4:
 38
 Enter all the numbers:
 #5:
 29
 Enter all the numbers:
 #6:
 12
 Enter all the numbers:
 #7:
 49
 This is your array sorted: 12|12|29|38|49|53|90|
 This is the median: 49
 Program ended with exit code: 0
 
 
 
 */
