//
//  main.cpp
//  Interest Earned
//
//  Created by Jan M Rodriguez cumba on 12/7/22.
//


/*
 
 18. Interest Earned
 
 Assuming there are no deposits other than the original investment, the balance in a savings account
 after one year may be calculated as
 
 Amount = Principal *(1 + Rate/T)^T
 
 Principal is the balance in the savings account, Rate is the interest rate, and T is the number of
 times the interest is compounded during a year (T is 4 if the interest is compounded quarterly).
 Write a program that asks for the principal, the interest rate, and the number of times the
 interest is compounded.
 
 
 It should display a report similar to:
 
 Interest Rate:          4.25%
 Times Compounded:          12
 Principal:           $1000.00
 Interest:              $43.34
 Amount in Savings:   $1043.34
    
 
 
 Descripción de los problemas:
 
 1, (Gaddis) Programming Problems 18. Interest Earned pag. 145, Cap 3

 
 a. Implemente un arreglo unidimensional para cada una de los datos de la cuanta de
    banco de ahorro, los cuales son pedidos al usuario (Principal, Interest Rate, Time
    Compounded, Interest and Amount of Saving).
 b. Implemente una función de nombre getValues que contenga 4 parámetros de
    entrada, 3 de ellos son arreglos y la cantidad de cuentas de banco. Los arreglos
    contienen la información Principal, Interest Rate, Time Compounded. La función
    pide la información de cada cuenta de ahorro proveído por el usuario.
 c. Implemente otra función de nombre getAmount para el calculo del Amount, la
    función requiere 4 parámetros de entrada, 5 de ellos son arreglos y la cantidad de
     cuentas de banco. Los arreglos contiene la información, Principal, Interest Rate,
     Time Compounded y Amount.
 d. Implemente otra función de nombre getInteres para el cálculo del Interes, la función
    requiere 4 parámetros de entrada,3 de ellos son arreglos y la cantidad de cuentas
    de banco. Los arreglos son Principal, Amount e Interes.
 e. Implemente una función para presentar los resultados en formato tabular. Con 6
    parámetros de entrada, 5 de ellos son arreglos y la cantidad de cuentas de banco.
    Los arreglos contiene la información de Principal, Interest Rate, Time Compounded
    Amount e Interes.
 f. Valide su implementación para que los valores entrados no sean negativos y use
    instrucciones de formato de salida, mostrando dos decimales después del punto
    decimal.
 g. Muestre su implementación con la información de 5 cuentas de ahorro.
 
 
 
 Valor Total de 100 pts.
 
 
 
 
 
 
 */

#include <iostream>
using namespace std;

void getvalues(int principal[], int Rate[], int Year_Interest[]){
    
    const int size = 10;
    int i = 0;

    cout<<"Please enter your principal balance for the saving account:"<<endl;
        cin>>principal;
        
    
    
    cout<<"Enter interest Rates %:"<<endl;
        cin>>Rate;
    
    
    cout<<"Enter how many times the compound interest is apply thru a hole year: "<<endl;
        cin>>Year_Interest;
    
    
    cout<<principal[i]<<endl;
    cout<<Rate[i]<<endl;
    cout<<Year_Interest[i]<<endl;
    
}


int main(){
    
    const int size = 80;
    int principal[size];
    int Rate[size];
    int Year_Interest[size];

    
    
    
    
    getvalues(principal, Rate, Year_Interest);

    
    
    return 0;
}
