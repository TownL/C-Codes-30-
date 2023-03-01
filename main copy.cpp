/*
 Jan M. Rodriguez Cumba

17. Stock Commission
 
 Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her stockbroker a 2 percent commission for the transaction. Write a program that calculates and displays the following:
 
• The amount paid for the stock alone (without the commission)
• The amount of the commission
• The total amount paid (for the stock plus the commission)
 
 
 1. (Gaddis) Programming Challenger 17. Stock Commission , pág. 82 ,Cap..
 a. Añada en su implementación el nombre de la persona (variable string)
 b. Valide con centinela (-1) en la cantidad de acciones.
 c. Use los datos del problema para validar su solución, más su nombre y
 La compra de 456 acciones, precio de $32.45 y un 3.4% al corredor de la bolsa
 de valores.
 d. Imprima sus resultados con dos puntos decimales de precisión.
 e. Construya su tabla de ejecución.
 
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int centinela = -1;
int main()
{
    
    float Shares,
    SharePrice,
    CommissionPercent,
    Commissionprice = 503.10;
    string name;
    
    
    cout<<"Please enter your name: \n";
    cin>> name;
    cout<<"How much shares did you buy?  Write: !!-1 to exit the program!!. \n";
    cin>> Shares;
    
    while (Shares != centinela)
    {
        
        cout<<"What is the price for each share? \n";
        cin>>SharePrice;
        cout<<"What percent of commission you pay to the stock broker? \n";
        cin>>CommissionPercent;
        cout<< fixed << showpoint;
        cout<< setprecision(2);
        cout<< name <<" pay $"<< Shares * SharePrice <<" for all the shares.\n";
        cout<<"The amount that " <<name<< " needs to pay on commission is "<<CommissionPercent<<" percent \n";
        cout<<"The total amont paid on commission is $"<<Shares * SharePrice * CommissionPercent / 100 << "\n";
        cout<<"The total amount to pay is $" << Shares * SharePrice + Commissionprice << "\n";
    }
    
    return 0;
    
}

/*
 
 --------Output----------
 
CASE 1:
 
Please enter your name:
Kathryn
How much shares did you buy?  Write: !!-1 to exit the program!!.
456
What is the price for each share?
32.45
What percent of commission you pay to the stock broker?
3.4
Kathryn pay $14797.20 for all the shares.
The amount that Kathryn needs to pay on commission is 3.40 percent
The total amont paid on commission is $503.10
The total amount to pay is $15300.30
What is the price for each share?
-1

 CASE 2:
 
 Please enter your name:
 Kathryn
 How much shares did you buy?  Write: !!-1 to exit the program!!.
 -1
 Program ended with exit code: 0
 
 
*/
