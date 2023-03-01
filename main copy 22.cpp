/*
 
 10. Sorting Orders
 Write a program that uses two identical arrays of just eight integers. It should display the contents of the first array, then call a function to sort the array using an ascending order bubble sort modified to print out the array contents after each pass of the sort. Next, the program should display the contents of the second array, then call a function to sort the array using an ascending order selection sort modified to print out the array contents after each pass of the sort.
 
 
 1. (Gaddis) Programming Challenger 10. Sorting Orders pág. 493, Cáp 8.
 
    A.  Use de las implementaciones de los Algoritmos Bubble Sort pág.472. y Selection
        Sort pág. 475. y la función showArray() para solucionar el problema.
 
    B.  Genere los valores dentro del intervalo [0-9] del arreglo aleatoriamente mediante la implementación de una función de nombre getValues() con dos parámetros de entrada,
        el nombre del arreglo y su dimensión.
 
 Valor Total de 100 pts.

 */





#include <iostream>
using namespace std;
const int Size = 9;


void getValues(int arr1[], int arr2[], const int Size)
{
    
    cout << "Please enter the values of the Array #1:"<<endl;
    for(int count = 0; count < Size; count++)
    {
        cout << "Data["<<count<<"] :";
        cin >> arr1[count];
    }
    
    cout << "Please enter the values of the Array #2:"<<endl;
    for(int count = 0; count < Size; count++)
    {
        cout << "Data["<<count<<"] :";
        cin >> arr2[count];
    }
}


void showArray(const int arr1[], const int arr2[], int Size)
{
    
    cout<<"Array #1: "<<endl;
    for (int count = 0; count < Size; count++)
    {
        cout << arr1[count] << "  ";
    }
    cout<<endl;
    
    cout<<"Array #2: "<<endl;
    for (int count = 0; count < Size; count++)
    {
        cout << arr2[count] << "  ";
    }
    cout<<endl;
}


void BubblesortArray(int arr1[], int arr2[])
{
    bool swap;
    int temp;
    
    do
    {
        swap = false;
        for (int count = 0; count < (Size - 1); count++)
        {
            if (arr1[count] > arr1[count + 1])
            {
                temp = arr1[count];
                arr1[count] = arr1[count + 1];
                arr1[count + 1] = temp;
                swap = true;
                
            }
            
        }
        
    } while (swap);
    
    
    do
    {
        swap = false;
        for (int count = 0; count < (Size - 1); count++)
        {
            if (arr2[count] > arr2[count + 1])
            {
                temp = arr2[count];
                arr2[count] = arr2[count + 1];
                arr2[count + 1] = temp;
                swap = true;
                
            }
            
        }
        
    } while (swap);
    
}


void selectionSort(int arr1[], int arr2[])
{
    int startScan, minIndex, minValue;
    
       
    for (startScan = 0; startScan < (Size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = arr1[startScan];
        for (int index = startScan + 1; index < Size; index++)
        {
            if (arr1[index] < minValue)
            {
                minValue = arr1[index];
                minIndex = index;
                
            }
            
        }
        arr1[minIndex] = arr1[startScan];
        arr1[startScan] = minValue;
        
    }
       
         for (startScan = 0; startScan < (Size - 1); startScan++)
         {
         minIndex = startScan;
         minValue = arr2[startScan];
         for (int index = startScan + 1; index < Size; index++)
               {
               if (arr2[index] < minValue)
                    {
                    minValue = arr2[index];
                    minIndex = index;
                    }
               }
         arr2[minIndex] = arr2[startScan];
         arr2[startScan] = minValue;
         }
    
}

int main()
{
    
    int arr1[Size], arr2[Size];
    
    
    getValues(arr1, arr2, Size);
    cout << "\nThe unsorted values are: \n";
    showArray(arr1, arr2, Size);
    
    BubblesortArray(arr1, arr2);
    cout << "\nThe Bubble Sorted values are: \n";
    showArray(arr1, arr2, Size);
    
    selectionSort(arr1, arr2);
    cout <<"\nThe Selection Sorted values are: \n";
    showArray(arr1, arr2, Size);
    
    return 0;
}


/*
 
 ------------------------OUTPUT---------------------

 Please enter the values of the Array #1:
 Data[0] :4
 Data[1] :2
 Data[2] :6
 Data[3] :3
 Data[4] :6
 Data[5] :3
 Data[6] :8
 Data[7] :2
 Data[8] :11
 Please enter the values of the Array #2:
 Data[0] :5
 Data[1] :3
 Data[2] :8
 Data[3] :6
 Data[4] :2
 Data[5] :9
 Data[6] :12
 Data[7] :9
 Data[8] :4

 The unsorted values are:
 Array #1:
 4  2  6  3  6  3  8  2  11
 Array #2:
 5  3  8  6  2  9  12  9  4

 The Bubble Sorted values are:
 Array #1:
 2  2  3  3  4  6  6  8  11
 Array #2:
 2  3  4  5  6  8  9  9  12

 The Selection Sorted values are:
 Array #1:
 2  2  3  3  4  6  6  8  11
 Array #2:
 2  3  4  5  6  8  9  9  12
 Program ended with exit code: 0
 
 
 */

