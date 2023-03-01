/*
1. (Gaddis) Programming Challenger 14. Word Separator pág. 596, Cap 10.

a. Implemente tres funciones:

i. getSentence: Función con un parámetro de entrada, el arreglo de
caracteres unidimensional. La función pide al usuario la oración sin
espacios.

ii. getWordSeparator: Función consta de dos parámetros de entrada, el
primer parámetro es un arreglo de caracteres en donde se almacena la
oración original. El segundo parámetro es otro arreglo de caracteres en
donde cada palabra dentro de la oracion será separada por espacios.
La función debe de utilizar las funciones de toupper, tolower, islower y
isupper en la implementación de su código.

iii. display: Función tiene un parámetro de entrada que consiste en un
arreglo de una dimensión, La función que imprime el contenido del arreglo
de caracteres.

b. Implemente un programa principal que invoque dichas funciones.

Valor 100 puntos.
*/


#include <iostream>
using namespace std;


void getSentence(char no_spaceSen[])
{
    const int size = 80;

    cout << "Please enter your sentence without spaces," << endl;
    cout << "The first letter in word is capitalized." << endl;
    cin.getline(no_spaceSen,size);
    
}


void getWordSeparator(char no_spaceSen[], char spaceSen[])
{


    int len = strlen(no_spaceSen);
    int i = 0, h = 1;
    spaceSen[0] = no_spaceSen[0];
    for (int i = 1; i <= len ; i++)
    {

        if (!isupper(no_spaceSen[i]))
        {
            spaceSen[h] = no_spaceSen[i];
            h++;
           
        }
        else
        {
            spaceSen[h] = ' ';
            h++;;
            spaceSen[h] = no_spaceSen[i];
            h++;
        }
    }

    spaceSen[h] = '\0';

}

void display(char spaceSen[])
{
    cout << "This is your sentence with spaces: " << endl;
    cout << spaceSen << endl;

}


int main()
{

    int i = 0;
    const int size = 80;
    char no_spaceSen[size], spaceSen[size];

    getSentence(no_spaceSen);
    getWordSeparator(no_spaceSen, spaceSen);
    display(spaceSen);


    return 0;
}
   

   
/*
 --------Output------
 
 Please enter your sentence without spaces,
 The first letter in word is capitalized.
 HolaComoEstanHoy?
 This is your sentence with spaces:
 Hola Como Estan Hoy?
 Program ended with exit code: 0

 */

