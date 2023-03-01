
/*
 
 Actividad 9.2: Variables tipo apuntador
 CECS2203 Computer Programming Laboratory I
 
 Nombre: Jan Rodriguez Cumba # Est:136125 Sec: 05
 
 Instrucciones para el estudiante:
 1. Implemente código que contenga variables del tipo apuntador.
 2. Implemente su código;
 3. Envíe su solución en un archivo en formato PDF.
 
 Descripción de los problemas:
 1. (Gaddis) Program Challenges 20. Stock Profit , pág 372 Cap 6.
 
 
 3. Implemente la función para calcular la ganancia de la venta de las acciones.
 
 4. Implemente una función que imprima los resultados.
 
 5. Los parámetros de entrada de cada una de las funciones deben de ser variables
    del tipo apuntador.
 
 Valor Total de 100 pts.
 
 
 
 20. Stock Profit
 
 The profit from the sale of a stock can be calculated as follows:
 
 Profit =  ((NS * SP) - SC) - ((NS * PP) + PC)
 
 Where:
 NS is the number of shares
 SP is the sale price per share
 SC is the sale commission paid
 PP is the purchase price per share
 PC is the purchase commission paid
 
 If the calculation yields a positive value, then the sale of the stock resulted in a profit. If the
 calculation yields a negative number, then the sale resulted in a loss.
 
 Write a function that accepts as arguments the number of shares, the purchase price per share, the
 purchase commission paid, the sale price per share, and the sale commission paid.
 
 The function should return the profit (or loss) from the sale of stock.
 
 Demonstrate the function in a program that asks the user to enter the necessary data and display
 the amount of the profit or loss.


 
 
 */
#include <iostream>
#include <string>
using namespace std;


void getValues(double *&NS, double *&PP, double *&PC, double *&SP, double *&SC){
    
    cout <<"Please enter the values: \n";
    cout << "number of shares: \n";
    cin >> *NS;
    cout << "sales price per share: \n";
    cin >> *SP;
    cout << "purchase price: \n";
    cin >> *PP;
    cout << "purchase comission: \n";
    cin >> *PC;
    cout << "sales comission: \n";
    cin >> *SC;
    
    
}


void getCalc(double *&Profit_Loss, double *NS, double *PP, double *PC, double *SP, double *SC){
    
        
    *Profit_Loss = ((*NS * *SP) - *SC) - ((*NS * *PP) + *PC);
        
}


void display(double *Profit_Loss){
    
    cout << "The sale of the stock profit resulted in $"<< *Profit_Loss <<endl;
    
}


int main(){
    
    double NS_temp, PP_temp, PC_temp, SP_temp, SC_temp, Profit_Loss_temp ;
    
    double *NS = &NS_temp;
    double *PP = &PP_temp;
    double *PC = &PC_temp;
    double *SP = &SP_temp;
    double *SC = &SC_temp;
    double *Profit_Loss = &Profit_Loss_temp;
    
    
    
    getValues(NS, PP, PC, SP, SC);
    getCalc(Profit_Loss, NS, PP, PC, SP, SC);
    display(Profit_Loss);

    
    
    return 0;
}




/*
 
 OUTPUT
 
 
 Please enter the values:
 number of shares:
 130
 sales price per share:
 45
 purchase price:
 32
 purchase comission:
 .2
 sales comission:
 .5
 The sale of the stock profit resulted in $1689.3
 Program ended with exit code: 0
 
 
 
 */
