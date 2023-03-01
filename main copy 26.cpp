
/*
 Instrucciones para el estudiante:
 
 Preguntarle el tamano de un arreglo 2d al usuario.
 Preguntarle los valores de un arreglo 2d al usuario(Random Numbers).
 Pasar el contenido de una matriz a otra.
 
 Valor: entender bien.
*/



#include <iostream>
using namespace std;


int main(){
    
    int numbers[100][100], numbers2[100][100], rows, columns;
    
    
    cout<<"Please enter the size of the room\n";
    cout<<"Enter how many rows you want: \n";
    cin>>rows;
    cout<<"Enter how many columns you want: \n";
    cin>>columns;
    
    
    //get values for array
    cout<<"Enter the values: \n";
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < columns; c++){
            cout<<"Value for space: ["<<r<<"]["<<c<<"]:\n";
            cin>>numbers[r][c];
        }
    }
    
    
    //Pass values from one array to another
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < columns; c++){
            numbers2[r][c] = numbers[r][c];
        }
    }
    
    
    
    //output array to user
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < columns; c++){
            cout<<numbers2[r][c];
        }
        cout<<endl;
    }
    
    
    return 0;
}

