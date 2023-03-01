/*
13. Date Printer
Write a program that reads a string from the user containing a date in the
 form mm/dd/yyyy.
 
It should print the date in the form March 12, 2014.
 
1. (Gaddis) Programming Challenger 13. Date Printer pág. 596, Cap 10.
a. Implemente tres funciones:
 
i. getDate: Función con un parámetro de entrada, el arreglo de caracteres
unidimensional. La función pide al usuario la fecha en formato numérico.
mm/dd/yyyy.
 
ii. Display:
-Función consta de dos parámetros de entrada, el primer
parámetro es un arreglo de caracteres en donde se almacena la fecha en
formato numérico.
-El segundo parámetro es otro arreglo de caracteres en
donde el valor numérico del mes es cambiado al equivalente nombre del
mes seguido por el día y el año en formato numerico.
 
b. Implemente un programa principal que invoque dichas funciones.
 
Valor 100 puntos.
*/



#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;


void getDate(char myDate[]) {
    cout << "Entre la fecha mm/dd/yyyy: ";
    cin >> myDate;
}

void display(char myDate[], char MyNewDate[]) {

    const int SIZE = 30;
    char month, myMonth[SIZE];
    char myDay[SIZE], myYear[SIZE];


    myMonth[0] = myDate[0];
    myMonth[1] = myDate[1];
    myMonth[2] = '\0';

    myDay[0] = myDate[3];
    myDay[1] = myDate[4];
    myDay[2] = '\0';

    myYear[0] = myDate[6];
    myYear[1] = myDate[7];
    myYear[2] = myDate[8];
    myYear[3] = myDate[9];
    myYear[4] = '\0';

    month = atoi(myMonth);

    switch (month) {
    case 1:
        strcpy_s(MyNewDate, SIZE, "Enero ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 2:
        strcpy_s(MyNewDate, SIZE, "Febrero ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 3:
        strcpy_s(MyNewDate, SIZE, "Marzo ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 4:
        strcpy_s(MyNewDate, SIZE, "Abril ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 5:
        strcpy_s(MyNewDate, SIZE, "Mayo ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 6:
        strcpy_s(MyNewDate, SIZE, "Junio ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 7:
        strcpy_s(MyNewDate, SIZE, "Julio ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 8:
        strcpy_s(MyNewDate, SIZE, "Agosto ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 9:
        strcpy_s(MyNewDate, SIZE, "Septiembre ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 10:
        strcpy_s(MyNewDate, SIZE, "Octubre ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;

        break;
    case 11:
        strcpy_s(MyNewDate, SIZE, "Noviembre ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    case 12:
        strcpy_s(MyNewDate, SIZE, "Diciembre ");
        strcat_s(MyNewDate, SIZE, myDay);
        strcat_s(MyNewDate, SIZE, ", ");
        strcat_s(MyNewDate, SIZE, myYear);
        cout << MyNewDate;
        break;
    default:
        cout << "Opcion Invalida trate de nuevo";
    }
}



int main() {

    const int SIZE = 30;
    char myDay[SIZE];
    char myMonth[SIZE];
    char myYear[SIZE];
    char myDate[SIZE];
    int month;
    char MyNewDate[SIZE];


    getDate(myDate);
    display(myDate, MyNewDate);


    return 0;
}



/*
--------------Cout--------------

Entre la fecha mm/dd/yyyy: 05/23/2011
Mayo 23, 2011

*/
