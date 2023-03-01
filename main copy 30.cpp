/*
 
 Actividad 9.1:Variables tipo apuntador
 CECS2203 Computer Programming Laboratory I
 
 Nombre: Jan Rodriguez Cumba # Est:136125 Sec: 05
 
 Instrucciones para el estudiante:
 1. Implemente código que contenga variables del tipo apuntador.
 2. Implemente su código;
 3. Envíe su solución en un archivo en formato PDF.
 
 Descripción de los problemas:
 1. (Gaddis) Program Challenges 18. Energy Drink Consumption pág 82 Cap 2.
 
 
 1. Defina variables del tipo apuntador apuntando a las variables definidas para la
    solución del problema.
 
 
 
 Valor Total de 100 pts.

 
 
 18. Energy Drink Consumption
 
 A soft drink company recently surveyed 16,500 of its customers and found that approximately 15%
    percent of those surveyed purchase one or more energy drinks per week. Of those customers who
    purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks.
 
 Write a program that displays the following:
 • The approximate number of customers in the survey who purchase one or more energy drinks per week
 • The approximate number of customers in the survey who prefer citrus-flavored energy drinks
 
 
 
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int NUM_SURVEYED_ref;
    float percent_1_or_more_ref, percent_pref_citrus_ref, Total_1_or_More_ref, citrus_total_ref;
    
    int *NUM_SURVEYED = &NUM_SURVEYED_ref;
    float *percent_1_or_more = &percent_1_or_more_ref;
    float *percent_pref_citrus = &percent_pref_citrus_ref;
    float *Total_1_or_More = &Total_1_or_More_ref;
    float *citrus_total = &citrus_total_ref;

    cout<<fixed<<showpoint<<setprecision(2);
    
    cout << "How many people get surveyed?"<<endl;
    cin >> *NUM_SURVEYED;
    
    cout << "How many percent (.--) of those surveyed purchase one or more energy drinks per week? "<<endl;
    cin >> *percent_1_or_more;
    
    cout << "How many percent (.--) of those surveyed prefer citrus-flavored energy drinks? "<<endl;
    cin >> *percent_pref_citrus;

    *Total_1_or_More = *NUM_SURVEYED * *percent_1_or_more;
    *citrus_total = *Total_1_or_More * *percent_pref_citrus;
    
    cout << "The approximate # of customers in the survey who\n";
    cout << "purchase one or more energy drinks per week is: ";
    cout << *Total_1_or_More << endl<<endl;
    
    
    cout << "The approximate # of customers in the survey who\n";
    cout << "prefer citrus-flavored energy drinks is: ";
    cout << *citrus_total << endl;
    cout << endl << endl;
    
    
    
    return 0;
    
}



/*
 
 OUTPUT
 
 How many people get surveyed?
 11000
 How many percent (.--) of those surveyed purchase one or more energy drinks per week?
 .5
 How many percent (.--) of those surveyed prefer citrus-flavored energy drinks?
 .65
 The approximate # of customers in the survey who
 purchase one or more energy drinks per week is: 5500.00

 The approximate # of customers in the survey who
 prefer citrus-flavored energy drinks is: 3575.00


 Program ended with exit code: 0
 
 */
