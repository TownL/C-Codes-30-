
/*
 Instrucciones para el estudiante:
 1. Implemente funciones con arreglos bidimensionales y unidimensionales como
 parámetros de entrada.
 2. Implemente su código;
 3. Envíe su solución en un archivo en formato PDF.
 Descripción de los problemas:
 1. Defina un arreglo bidimensional numérico donde imprima la suma de todos las filas
 y las columnas. Almacene este resultado dentro dos arreglos en una dimensión.
 Pida la dimensión al usuario.
 
  Salida:
  Entre la dimensión del arreglo: 3, 4
  Entre los valores del arreglo:
  A[0][0] = 3
  A[0][1] = 6
  ⋮
  Dado el arreglo:
 3 6 8 9
 2 0 4 2
 6 1 7 1
  La suma de las columnas es:
 11 7 19 12
  La suma de las filas es:
 26 8 15
 
 
  Implemente las siguientes funciones en su código:
 
 a. getDimension: Función con dos parámetros de entrada del tipo entero las filas y las
    columnas que retorne la dimensión del arreglo.
 b. getValues: Función con tres parámetros de entrada el arreglo bidimensional y las filas
    y las columnas, la función pide los valores al usuario y los retorna mediante el arreglo.
    La función no retorna valores.
 c. getRowsSum: Función consta de 4 parámetros de entrada, el arreglo bidimensional,
    la cantidad de filas, la cantidad de columnas, y el arreglo bidimensional donde
    almacena la suma de las filas del arreglo bidimensional. La función no retorna ningún
    valor.
 d. displayRowsSum: Función consta de dos parametros entrada, el nombre del arreglo
    en una dimensión y la dimensión. La función imprime las sumas de cada fila del arreglo
    bidimensional. La función no retorna ningún valor.
 e. getColsSum: Función consta de 4 parámetros de entrada, el arreglo bidimensional, la
    cantidad de filas, la cantidad de columnas, y el arreglo bidimensional donde almacena
    la suma de las columnas del arreglo bidimensional. La función no retorna ningún valor.
 f. displayColsSum: Función consta de dos parámetros entrada, el nombre del arreglo en
    una dimensión y la dimensión. La función imprime las sumas de cada columna del
    arreglo bidimensional. La función no retorna ningún valor.
 g. Implemente un programa principal que invoque sus funciones.
 
    Valor Total de 100 pts.
 
 */

#include <iostream>
using namespace std;


const int ROWS = 50;
const int COLUMNS = 50;



void getDimension(int &rows, int &columns){
    
    
    cout<<"Please enter how many rows: "<<endl;
    cin>>rows;
    
    cout<<"Please enter how many columns: "<<endl;
    cin>>columns;
    
}


void getValues(int rows, int columns, int array[ROWS][COLUMNS]){
    
    cout<<"Enter the values for the 2D array: "<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<<"Value["<< i << "]["<< j << "]: ";
            cin>>array[i][j];
        }
    }
}


void display(int rows, int columns, int array[ROWS][COLUMNS]){
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void displayRowSum(int &Rsum,int sum, int rows, int columns, int array[ROWS][COLUMNS]){
        
    for(int i = 0; i < rows; i++)
    {
        int Rsum = 0;
        for(int j = 0; j < columns; j++)
        {
            sum += array[i][j];
            Rsum += array[i][j];
        }
        cout << "Row " << i+1 << " Sum = " << Rsum <<endl;
    }
    
}


void displayColumnsSum(int columns, int rows, int &Csum, int array[ROWS][COLUMNS]){
    
    int Asum = 0;
    
    for(int i = 0; i < columns; i++)
    {
        int Csum = 0;
        for(int j = 0; j < rows; j++)
        {
            Csum += array[j][i];
        }
        cout << "Colum " << i+1 << " Sum = " << Csum <<endl;
    }
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            Asum += array[i][j];
            
        }
        
    }
    cout<<"Total Array Sum = " << Asum << endl;
    
}




int main(){
    int rows = 0;
    int columns = 0;
    int sum = 0;
    int Rsum = 0;
    int Csum = 0;
    
    
    
    getDimension(rows, columns);
    int array[ROWS][COLUMNS];
    
    getValues(rows, columns, array);
    display(rows, columns, array);
    displayRowSum(Rsum, sum, rows, columns, array);
    displayColumnsSum(columns, rows, Csum, array);

    
    return 0;
    
}






/*
 
 ---------OUTPUT-----------
 
 Please enter how many rows:
 3
 Please enter how many columns:
 4
 Enter the values for the 2D array:
 Value[0][0]: 3
 Value[0][1]: 6
 Value[0][2]: 8
 Value[0][3]: 9
 Value[1][0]: 2
 Value[1][1]: 0
 Value[1][2]: 4
 Value[1][3]: 2
 Value[2][0]: 6
 Value[2][1]: 1
 Value[2][2]: 7
 Value[2][3]: 1
 3 6 8 9
 2 0 4 2
 6 1 7 1
 
 Row 1 Sum = 26
 Row 2 Sum = 8
 Row 3 Sum = 15
 
 Colum 1 Sum = 11
 Colum 2 Sum = 7
 Colum 3 Sum = 19
 Colum 4 Sum = 12
 
 Total Array Sum = 49
 
 Program ended with exit code: 0
 
 
 */
