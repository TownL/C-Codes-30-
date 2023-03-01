
/*
 
 Actividad 10.1: Arrreglo Unidimensional y variables tipo apuntador
 CECS2203 Computer Programming Laboratory I
 Nombre: Jan Rodriguez Cumba # Est:136125 Sec: 05
 
 Instrucciones para el estudiante:
 
 1. Implemente código que contenga variables del tipo apuntador almacenando las direcciones de variables y la primera dirección de un arreglo numérico.
 
 2. Implemente su código;
 
 3. Envíe su solución en un archivo en formato PDF.
 
 
 
 Descripción de los problemas:
 1. (Gaddis) Program Challenges 19. Budget Analysis pag 297 Cap 19.


 1. Implemente un programa que almacene los gastos incurridos durante un mes,
    con un arreglo numérico unidimensional.
 
 2. Añada un arreglo bidimensional del tipo carácter en donde almacene la
    descripción de cada uno de los gastos incurridos en el mes. Use el concepto de
    arreglos paralelos.
 
 3. Calcule el mayor y el menor de los gastos, e imprima la descripción.
 
 4. Defina variables del tipo apuntador apuntando a las variables del problema.
 
 6. No use apuntadores en el arreglo bidimensional de las descripciones.

 7. Implemente notación de apuntadores en los accesos a los elementos del arreglo
    numérico.
 
 8. No implemente funciones.

 
 
 
 5. Defina una variable del tipo apuntador que almacena la primera dirección del
    arreglo numérico de los gastos.
 
 
 Valor Total de 100 pts.

 
 
 19. Budget Analysis
 
 Write a program that asks the user to enter the amount that he or she has budgeted for a month.
 
 A loop should then prompt the user to enter each of his or her expenses for the month and keep a
 running total.
 
 When the loop finishes, the program should display the amount that the user is over or under budget.
 
 
 
 */


#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    
    const int SIZE = 30;
    
    float budget_amount = 0, expense_total = 0, budget_result = 0;
    int expenses_rows = 0, lower = 0, higher = 0;
    
    float expense_1[SIZE];
    
    //Pointers
    float *budget_amountptr = nullptr, *expense_totalptr = nullptr, *budget_resultptr = nullptr;
    int *expenses_rowsptr = nullptr, *lowerptr = nullptr, *higherptr = nullptr;
    
    float *expense_1ptr = nullptr;

    
    
    char lowerD[SIZE];
    char higherD[SIZE];
    float expense[SIZE];
    char Description[SIZE][SIZE];
    
    budget_amountptr = &budget_amount;
    expense_totalptr = &expense_total;
    budget_resultptr = &budget_result;
    expenses_rowsptr = &expenses_rows;
    lowerptr = &lower;
    higherptr = &higher;
    
    expense_1ptr = expense_1;

    
    cout << "Enter the amount budgeted for this month: ";
    cin >> *budget_amountptr;
    
    cout << "\nHow many expenses do you have?"<<endl;
    cin >> *expenses_rowsptr;
    
    
    for (int i = 0; i < *expenses_rowsptr; i++)
    {
//Input del expense.
        cout << "\nEnter expense #" << (i+1) <<":";
        cin >> expense[i];
        
//Calculando el total
        *expense_totalptr += expense[i];
        
//Input del description.
        cin.ignore();
        cout<<"\nExpense #"<< (i + 1) <<" description : ";
        cin.getline(Description[i] , 30);
    }
    
    
//Output del expense y description.
    for(int i = 0; i < *expenses_rowsptr; i++)
    {
        cout <<"\n$" <<expense[i] << " - " << Description[i] <<endl;
    }
    cout<<endl;

    
    
//Higher & Lower Finder.
    *higherptr = expense[0];
    for (int i = 0; i < *expenses_rowsptr; i++)
    {
        if(expense[i] > *higherptr){
            *higherptr = expense[i];
            
        }
    }
    
    *lowerptr = expense[0];
    for(int j = 0; j < *expenses_rowsptr; j++)
    {
        if(expense[j] < *lowerptr){
            *lowerptr = expense[j];
            lowerD[j] = Description[j][j];
        }
    }
    
//Output Higher & Lower.
    cout<<"Your Higer expense is: "<<*higherptr<<endl;
    cout<<"Your Lower expense is: "<<*lowerptr<<endl;

    
    *budget_resultptr = *budget_amountptr - *expense_totalptr;

    if (*expense_totalptr > *budget_amountptr)
    {
        cout << "\nYou are over budget by $";
        cout << *budget_resultptr << '.' << endl;
    }
    else if (*expense_totalptr < *budget_amountptr)
    {
        cout << "\nYou are under budget by $";
        cout << *budget_resultptr<< '.' << endl;
    }
    else if (*expense_totalptr == *budget_amountptr)
    {
        cout << "\nYour budget is 0 based." << endl;
    }
    cout << endl;
    
    
    
    cout<<"This is the direction of expense array[0] printed with pointers:";
    cout<< expense_1ptr;
    
    cout<<endl;
    return 0;
}




/*
 
 -------OUTPUT------
 
 
 Enter the amount budgeted for this month: 600

 How many expenses do you have?
 3

 Enter expense #1:100

 Expense #1 description : car

 Enter expense #2:200

 Expense #2 description : food

 Enter expense #3:350

 Expense #3 description : house

 $100 - car

 $200 - food

 $350 - house

 Your Higer expense is: 350
 Your Lower expense is: 100

 You are over budget by $-50.

 This is the direction of expense array[0] printed with pointers: 0x7ff7bfeff140
 
 Program ended with exit code: 0
 
 
 */
