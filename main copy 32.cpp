/*
 
 Actividad 9.3: Variables tipo apuntador
 CECS2203 Computer Programming Laboratory I
 
 Nombre: Jan Rodriguez Cumba # Est:136125 Sec: 05
 
 Instrucciones para el estudiante:
 1. Implemente código que contenga variables del tipo apuntador.
 2. Implemente su código;
 3. Envíe su solución en un archivo en formato PDF.
 
 Descripción de los problemas:
 1. (Gaddis) Program Challenges 19. Monthly Payments , pág 145 Cap 2.
 
 
 1. Defina variables del tipo apuntador apuntando a las variables definidas para la solución del
    problema.
 2. Implemente una función para cada uno de los valores entrados por el usuario, Loan Amount,
    Monthly Interest Rate, Number of Payments.
 3. Implemente la función para cada uno de los cálculos: Monthly Payment, Amount Paid Back,
    Interest Paid.
 
 
 4. Implemente una función que imprima los resultados.
 
 5. Los parámetros de entrada de cada una de las funciones deben de ser variables del tipo apuntador.

 6. Retorne los resultados de cada función por referencia.
 
 Valor Total de 100 pts.
 
 
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int ONE = 1;
const int HUNDRED = 100;
const int NUMBER_OF_MONTHS = 12;


void getInterestRate(int *&InterestRate){
    
    cout << "What is interest rate of the loan? %";
    cin >> *InterestRate;
    
}

void getLoanAmount(int *&LoanAmount){
    
    cout << "What is the Amount of the loan? ";
    cin >> *LoanAmount;
    
}

void getNPayments(int *&NPayments){
    
    cout << "Number of payments? ";
    cin >> *NPayments;
    
}


void getMonthlyPay(float *&Rate, float *&Payment, int *NPayments, int *LoanAmount){
    

    *Rate /= NUMBER_OF_MONTHS;
    *Rate /= HUNDRED; // 4.25% == .0425
    
    *Payment=((*Rate)*pow(ONE+(*Rate),*NPayments)/(pow(ONE+(*Rate),*NPayments)-ONE))* *LoanAmount;
    
    *Rate *= HUNDRED; // .0425 == 4.25
    
}

void AmountpayBack(float *&amountpaidback, int *NPayments, float *Payment ){
    
    *amountpaidback = *NPayments * *Payment;
    
}

void interestPaid(float *&interest_paid, int *NPayments, float *Payment, int *LoanAmount){
    
    
    *interest_paid = (*NPayments * *Payment) - *LoanAmount;
    
    
}


void display(int *LoanAmount, float *Rate, int *NPayments, float *Payment, float *amountpaidback, float *interest_paid){
    
    cout << setprecision(2) << fixed << right << endl;
    
    cout << "Loan Amount:           $";
    cout << setw(10) << *LoanAmount << endl;
    
    cout << "Monthly Interest Rate: ";
    cout << setw(10) << *Rate << '%' << endl;
    
    cout << "Number of Payments:     ";
    cout << setw(10) << *NPayments     << endl;

    cout << "Monthly Payment:       $";
    cout << setw(10) << *Payment << endl;
    
    cout << "Amount Paid Back:      $";
    cout << setw(10) << *amountpaidback << endl;
    
    cout << "Interest Paid:         $";
    cout << setw(10) << *interest_paid;
    
    cout << endl << endl;
    
    
}


int main(){
    
    int InterestRate_ref, LoanAmount_ref, NPayments_ref;
    int *InterestRate = &InterestRate_ref;
    int *LoanAmount = &LoanAmount_ref;
    int *NPayments = &NPayments_ref;
    
    
    float Rate_ref, Payment_ref, amountpaidback_ref, interest_paid_ref;
    float *Rate = &Rate_ref;
    float *Payment = &Payment_ref;
    float *amountpaidback = &amountpaidback_ref;
    float *interest_paid = &interest_paid_ref;
    
    
    getInterestRate(InterestRate);
    getLoanAmount(LoanAmount);
    getNPayments(NPayments);
    getMonthlyPay(Rate, Payment, NPayments, LoanAmount);
    AmountpayBack(amountpaidback, NPayments, Payment );
    interestPaid(interest_paid, NPayments, Payment, LoanAmount);
    display(LoanAmount, Rate, NPayments, Payment, amountpaidback, interest_paid);

    
    return 0;
}

/*
 
 OUTPUT
 
 
 What is interest rate of the loan? %1
 What is the Amount of the loan? 10000
 Number of payments? 36

 Loan Amount:           $     10000
 Monthly Interest Rate:          1%
 Number of Payments:             36
 Monthly Payment:       $    332.14
 Amount Paid Back:      $  11957.15
 Interest Paid:         $   1957.15

 Program ended with exit code: 0
 
 
 */
