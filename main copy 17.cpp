/*
 
 main.cpp
 
 5.1 Lab Code
 
 Created by Jan M Rodriguez cumba on 9/20/22.

 
 1. (Gaddis) Find the error 43,44,45 y 46 pág. 594, Cap 10.
 a. Modifique el código y construya el programa principal de cada uno de los
 problemas,
 b. En el reporte incluya el segmento de código original y el modificado
 c. Valor Total de 100 pts.
 Each of the following programs or program segments has errors. Find as many
  as you can.

 
  43.
  char str[] = "Stop";
  if (isupper(str) == "STOP")
  exit(0);
*/

/*
#include<iostream>
#include <string>
using namespace std;
int main() {
    
    char str[] = "Stop";
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
            cout << "STOP" << endl;
    }
 
    return 0;
    
}
 */

/*
   
-------OUTPUT---------

STOP
Program ended with exit code: 0
   
*/





 /*
 -----------------------------------------------------------------------------
 */





/*
44.
char numeric[5];
int x = 123;
numeric = atoi(x);
 */
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    
    char numeric[5] = "2022";
    int x = stoi(numeric);
    
    cout << "The integer value of x is: " << x << endl;
    
return 0;
    
}
*/
/*
-----------------------------OUTPUT------------------------------

The integer value of x is : 2022
     C : \Users\nukto\OneDrive\Escritorio\PUPR\Programing\Modulo
      5\5.1\5.1\x64\Debug\5.1.exe(process 7096) exited with code 0.
     To automatically close the console when debugging stops, enable
      Tools->Options->Debugging->Automatically close the console when
      debugging stops.
     Press any key to close this window . . .
 */



 /*
  ----------------------------------------------------------------------------
 */

/*
45.
char string1[] = "Billy";
char string2[] = " Bob Jones";
strcat(string1, string2);
 */

/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    char string1[15] = "Billy";
    char string2[15] = "Bob Jones";
    
    char * strcat(char * string1,char * string2);
    
    cout << string1 << endl;
    cout << string2 << endl;
    
    return 0;
    
}
 
 
-------OUTPUT-------
     
  Billy
  Bob Jones
  
  Program ended with exit code: 0
  
*/




/* 46.
 char x = 'a', y = 'a';
 if (strcmp(x, y) == 0)
 */
/*
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    
    char x[] = {"a"};
    char y[] = {"a"};
    int result;
    
    cout << "The content of first string : " << x << endl;
    cout << "The content of second string : " << y << endl;
    
    result = strcmp(x, y);
    
    if (result == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings not equal" << endl;
        
    }
    return 0;
    
}
 

 
 
Case #1
-----------OUTPUT--------------
 The content of first string : a
 The content of second string : b
 Strings not equal
 
 Program ended with exit code: 0
 
 
 Case #2
 
 The content of first string : a
 The content of second string : a
 Strings are equal
 
 Program ended with exit code: 0
 
*/


 /*
 --------------------------------------------------------------------------------------
 */



/*
 
 2. (Gaddis) Programming Challenger 2. Backward String pág. 594, Cap 10.
2. Backward String

A.Implemente tres funciones:
 i. getentence: Función con dos parámetros de entrada, el arreglo de
 caracteres unidimensional y la cantidad de elementos dentro de la oración por
  referencia. La función pide al usuario el arreglo y retorna la
 cantidad de caracteres contenidos dentro de la oración.
 ii. getBackward: Función consta de tres parámetros de entrada, el primer
  parámetro es una arreglo de caracteres en donde se almacena la oración
  original ,
 el segundo parámetro es otro arreglo de caracteres en donde se almacena la
  oración en sentido contrario, y el tercer parámetro es la cantidad de
 caracteres contenido en el arreglo. La función manipulara una oración y
  mediante el uso de nuevo arreglo almacena la oración con un orden de lectura
  de sentido contrario.
 iii. display: Función tiene un parámetro de entrada que consiste en un
  arreglo de una dimensión, La función que imprime el contenido del arreglo de
  caracteres.
 B. Implemente un programa principal que invoque dichas funciones.
 Valor 100 puntos.
 Write a function that accepts a pointer to a C-string as an argument and
  displays its contents backward. For instance, if the string argument is
  “Gravity” the function should display “ytivarG”. Demonstrate the function in
  a program that asks the user to input a string and then passes it to the
  function.
*/

 
 /*
  
  
#include <iostream>
#include <string>
using namespace std;

void getSentence(char sentence[], int characters = 80){
    
    cout << "Please enter your sentence:" << endl;
    cin.getline(sentence, characters, '\n');
    
    characters = strlen(sentence);
    cout << "Your sentence have: "<<characters <<" characters." << endl;
}


void getBackward(char sentence[], char ReverseSen[], int characters = 80) {
    
    cout << "\nPlease enter your sentence" << endl;
    cin.getline(sentence, characters, '\n');
    
    characters = strlen(sentence);
    cout << "These sentence have: " << characters << " characters." << endl;
    cout << endl;
    
    for (int i = characters - 1; i >= 0; i--) {
        cout << sentence[i];
        }
}

void display_Sen(char sentence[])
{
    cout << "\n\nYour sentence is " << sentence << endl;
}


int main() {
    
    const int characters = 80;
    char sentence[characters], ReverseSen[characters];
    
    getSentence(sentence, characters);
    getBackward(sentence, ReverseSen, characters);
    display_Sen(sentence);
    
return 0;
    
}

*/





/*
 
 
 
------------OUTPUT--------------
 
 Please enter your sentence:
 hola Buenas Tardes
 Your sentence have: 18 characters.

 Please enter your sentence
 Hola Buenos dias
 These sentence have: 16 characters.

 said soneuB aloH
 
 Your sentence is Hola Buenos dias
 
 Program ended with exit code: 0
 
*/
