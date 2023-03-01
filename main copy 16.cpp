

/*
#include <iostream>
using namespace std;
int main(){
       const int SIZE = 5;
       int myArray[SIZE];
       int i;
       //Pide los valores al usuario
       cout << "Entre los valores del arreglo:";
       for (i = 0; i < SIZE; i++){
              cin >> myArray[i];
       }//end for
      //Imprime los valores contenidos dentro del arreglo
       cout << "Los valores dentro del arreglo son:" << endl;
       for (i = 0; i < SIZE; i++){
              cout << myArray[i] << ",";
 
       }//end for
       cout << endl;
       return 0;
}//end main
 
 
Entre los valores del arreglo:
10
20
30
40
50
Los valores dentro del arreglo son:
10,20,30,40,50,
Press any key to continue . . .
*/



/*
#include <iostream>
using namespace std;
void getValues(int myArray[], int size);
void displayValues(int myArray[], int size);
int main(){
      const int SIZE = 20;
      int myArray[SIZE];
      int size;
 
      cout << "Entre la cantidad de datos < 20:";
      cin >> size;
      getValues(myArray, size);
      displayValues(myArray, size);
      return 0;
}//end main
 
 
void getValues(int myArray[], int size){
      //Pide los valores al usuario
      cout << "Entre los valores del arreglo:";
      for (int i = 0; i < size; i++){
           cin >> myArray[i];
      }//end for
}
void displayValues(int myArray[], int size){
      //Imprime los valores contenidos dentro del arreglo
      cout << "Los valores dentro del arreglo son:" << endl;
      for (int i = 0; i < size; i++){
           cout << myArray[i] << ",";
 
      }//end for
      cout << endl;
}
Entre la cantidad de datos < 20:3
      Entre los valores del arreglo : 10
      20
      30
      Los valores dentro del arreglo son :
10, 20, 30,
Press any key to continue . . .

 */



#include <iostream>
using namespace std;


int main(){
    
    
    const int size = 30;
    char myName[size];
    
    cout<<"Entre su nombre y apellidos: "<<endl;
    cin.getline(myName,size);
    
    cout<<"Your name is: "<<myName<<endl;
    
    
    
    
    
    return 0;
}
