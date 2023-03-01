/*
 
 Actividad 10.2: Funciones con parameros de variables tipo apuntador, por referencia y por valor.
 CECS2203 Computer Programming Laboratory I
 Nombre: Jan Rodriguez Cumba # Est:136125 Sec: 05
 
 Instrucciones para el estudiante:
 1. Implemente funciones que contenga variables del tipo apuntador como parámetros de entrada, por valor y por referencia..
 2. Implemente su código con funciones con parámetros.
 3. Envíe su solución en un archivo en formato PDF.
 
 Descripción de los problemas:
 
 1. (Gaddis) Program Challenges 19. Budget Analysis pag 297 Cap 19.
 
 1. Repita la Actividad 10.1 mediante la implementación de las siguientes funciones:
 
 2. getBudget: Función que consta de un parámetro de entrad por referencia que recibe una variable
    del tipo apuntador que representa la cantidad asignada para gastos incurridos durante un mes.
 3. getNumberOfExpenses: Función que consta de un parámetro de entrada por referencia que recibe una
    variable del tipo apuntador que representa la cantidad de gastos incurridos durante un mes.
 4. getDescriptionExoenses:
 Funcion que consta de tres parámetros de entrada uno de ellos es un
 -Un arreglo bidimensional del tipo carácter que almacenara las descripciones de cada uno de los
    gastos.
 -Un apuntador hacia un arreglo numérico que almacena cada uno de los gastos .
 -El tercer parámetro del tipo apuntador almacena la dirección de la cantidad de gastos incurridos en
    el mes.
 El propósito de la función es pedirle al usuario en formato paralelo la información relacionada de
    cada uno de los gatos.
 5. getTotal: Función que consta de tres parámetros de entrada uno de ellos es un apuntador hacia un
    arreglo numérico que almacena cada uno de los gastos . El segundo parámetro del tipo apuntador
    almacena la dirección de la cantidad de gastos incurridos en el mes. El tercer parámetro
    retorna por referencia la suma total de los gastos.
 
 
 
 
 6. getLowestExpenses: Función que consta de dos parámetros de entrada un apuntador hacia un arreglo
    numérico que almacena cada uno de los gastos .El segundo parámetro del tipo apuntador almacena
    la dirección de la cantidad de gastos incurridos en el mes. El propósito de la función es
    retornar el índice en donde se encuentra el gasto menor.
 
 7. getHigthestExpenses: Función que consta de dos parámetros de entrada un apuntador hacia un
    arreglo numérico que almacena cada uno de los gastos . El segundo parámetro del tipo apuntador
    almacena la dirección de la cantidad de gastos incurridos en el mes. El propósito de la función
    es retornar el índice en donde se encuentra el gasto mayor.
 
 8. Display: Funcion que consta de 3 parámetros de entrada, el arreglo bidimensional que contiene
    las descripciones de cada gasto, el apuntador de la primer dirección del arreglo de gastos, los
    apuntadores donde almacena las direcciones de las variables que almacenan la cantidad de lo
    gastos. Las funciones que calculan el total y los índices del mayor y el menor son invocadas
    dentro de la función. La función imprime si la persona se paso de la cantidad asignada para el
    mes o si lal finalizar el mes y de reportr sus gastos le sobro dinero. El gasto mayor y menor
    incurrido indicando la descripción y su cantidad.
 
 9. Implemente un programa que invoque a las funciones anteriores.
 
 10. Use notación de apuntador en la manipulación del arreglo numérico.
 
 
    Valor Total de 100 pts.
 
 
 19. Budget Analysis
 Write a program that asks the user to enter the amount that he or she has budgeted for a month. A loop should then prompt the user to enter each of his or her expenses for the month and keep a running total. When the loop finishes, the program should display the amount that the user is over or under budget.


 
 */



#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 30;



void getBudget(float *&budget_amountptr){
    
    
    cout << "Enter the amount budgeted for this month: ";
    cin >> *budget_amountptr;
    
}


void getNumberOfExpenses(int *&expenses_rowsptr, float expense[SIZE],
                         float *&Expenseptr){
    
    cout << "\nHow many expenses do you have?"<<endl;
    cin >> *expenses_rowsptr;
    for (int i = 0; i < *expenses_rowsptr; i++)
    {
        //Input del expense.
        cout << "\nEnter expense #" << (i+1) <<":";
        cin >> expense[i];
        
        //Calculando el total
        *Expenseptr = expense[i];
        
        cout<< *Expenseptr <<endl;
        
    }
}


void getDescriptionExoenses(char Description[SIZE][SIZE], float *Expenseptr,
                            int *expenses_rowsptr){
    
    for (int i = 0; i < *expenses_rowsptr; i++){
        
        cin.ignore();
        cout<<"\nExpense #"<< (i + 1) <<" description : ";
        cin.getline(Description[i] , 30);
        
    }
    
}


void getTotal(float *&expense_totalptr, float expense[SIZE], int *expenses_rowsptr){
    
    for (int i = 0; i < *expenses_rowsptr; i++){
        
        *expense_totalptr += expense[i];
        
    }
    
}

getLowestExpenses(lowerptr, expense, expenses_rowsptr, lowerD, Description);

void getLowestExpenses(float *&lowerptr, float expense[SIZE], int *expenses_rowsptr, char lowerD[SIZE], char Description[SIZE][SIZE]){
    
    
    *lowerptr = expense[0];
    for(int j = 0; j < *expenses_rowsptr; j++)
    {
        if(expense[j] < *lowerptr){
            *lowerptr = expense[j];
            lowerD[j] = Description[j][j];
        }
        
    }
    
}


int main() {
    
//Original Variables
    float budget_amount = 0, expense_total = 0, budget_result = 0, Expense = 0;
    int expenses_rows = 0, lower = 0, higher = 0;
    float expense_1[SIZE];
    
//Pointers
    float *budget_amountptr = nullptr, *expense_totalptr = nullptr, *Expenseptr = nullptr,
    *budget_resultptr = nullptr, *expense_1ptr = nullptr;
    int *expenses_rowsptr = nullptr, *lowerptr = nullptr, *higherptr = nullptr;
    
//Arrays
    char lowerD[SIZE];
    char higherD[SIZE];
    float expense[SIZE];
    char Description[SIZE][SIZE];
    
//Directions Organization
    budget_amountptr = &budget_amount;
    expense_totalptr = &expense_total;
    budget_resultptr = &budget_result;
    expenses_rowsptr = &expenses_rows;
    lowerptr = &lower;
    higherptr = &higher;
    expense_1ptr = expense_1;
    Expenseptr = &Expense;
    
    
    getBudget(budget_amountptr);
    getDescriptionExoenses(Description, expense_totalptr, expenses_rowsptr);
    getTotal(expense_totalptr, expense, expenses_rowsptr);
    
    getLowestExpenses(lowerptr, expense, expenses_rowsptr, lowerD, Description);

    
    
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

