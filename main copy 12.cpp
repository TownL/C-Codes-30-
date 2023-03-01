/*
 Jan M. Rodriguez Cumba
 
 Instrucciones para el estudiante:
 
1. Implementar funciones con parámetros por referencia.
2. Coloque la salida del programa debajo su código
3. Envíe su código en formato PDF.
 
Descripción de los problemas:
 
1. (Gaddis) Programming Challenger 8. Coin Toss pág. 368 Cap 6.
 
a. Implemente todas las funciones con parámetros por referencia.
 
2. (Gaddis) Resuelva cada uno de los CheckPoints Cáp 6
 6.3,6.4,6.11,6.17,6.18,6.24 y 6.25.
 a. Imprima su código y la salida.
 
Valor Total de 100 pts.
 
 
 8. Coin Toss
 Write a function named coinToss that simulates the tossing of a coin. When you call the function,
 it should generate a random number in the range of 1 through 2. If the random number is 1, the
 function should display “heads.” If the random number is 2, the function should display “tails.”
 
 Demonstrate the function in a program that asks the user how many times the coin should be tossed
 and then simulates the tossing of the coin that number of times.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void getToss(int &times)
{
    cout << "How many times the coin should be tossed?" << endl;
    cin >> times;
}
void getCoinToss(int &randomNumber)
{
    const int max_num = 2, min_num = 1;
    randomNumber = (rand() % (max_num + min_num + min_num)) + min_num;
}


int main(){
    int times = 0, randomNumber = 0;
        
    unsigned seed = time(0);
    srand(seed);
    
    getToss(times);


    for (int i = 1 ; i <= times; i++){
        
        getCoinToss(randomNumber);

        
        if(randomNumber==1)
            cout<< "heads" << endl;
    
        else
            cout<< "tails" <<endl;
        
    }
    
    return 0;
    
}


/*
 
 ------Output-------
 
 How many times the coin should be tossed?
 6
 
 tails
 heads
 tails
 tails
 heads
 tails
 
 Program ended with exit code: 0
 
 */










/*
 
2. (Gaddis) Resuelva cada uno de los CheckPoints Cáp 6
 
 6.3, 6.4, 6.11, 6.17, 6.18, 6.24 y 6.25.
 
 a. Imprima su código y la salida.
 
*/





/*
6.3 What will the output of the following program be if the user enters 10?
 

#include <iostream>
using namespace std;

void func1()
{
cout << "Able was I\n";
}

void func2()
{
cout << "I saw Elba\n";
}


int main(){
    int input;
    
    cout << "Enter a number: ";
    cin >> input;
    
if (input < 10)
{
func1();
func2();
}
    
else {
func2();
func1();
}
    
return 0;
    
}


 -------Output-------
 
 Enter a number: 11
 I saw Elba
 Able was I
 
 Program ended with exit code: 0
 */



/*
 
 6.4 The following program skeleton determines whether a person qualifies for a credit card. To qualify, the person must have worked on his or her current job for at least two years and make at least $17,000 per year. Finish the program by writing the definitions of the functions qualify and noQualify. The function qualify should explain that the applicant qualifies for the card and that the annual interest rate is 12%. The function noQualify should explain that the applicant does not qualify for the card and give a general explanation why.
 
 

 #include <iostream>
 using namespace std;

 // You must write definitions for the two functions qualify and noQualify.

void qualify()
{
    cout<<"Congratulations you qualify for the credit card, your annual interest rate is 12%."<<endl;
}

void noQualify()
{
    cout<<"Im sorry you dont have all the requisits for the credit card qualification.\n";
    cout<<"The pricipal requisits:\n";
    cout<<"Have worked on his or her current job for at least two years and make at least $17,000 per year.\n";
}
 int main() {
     double salary;
     int years;
     
     cout << "This program will determine if you qualify\n";
     cout << "for our credit card.\n";
     cout << "What is your annual salary? ";
     cin >> salary;
     cout << "How many years have you worked at your ";
     cout << "current job? ";
     cin >> years;
     if (salary >= 17000.0 && years >= 2)
         qualify();
     else
         noQualify();
     return 0;
 }
 

 
    ---------Output----------
 
This program will determine if you qualify
for our credit card.
What is your annual salary? 18000
How many years have you worked at your current job? 4
Congratulations you qualify for the credit card, your annual interest rate is 12%.
 
Program ended with exit code: 0
*/





/*
6.11 How many return values may a function have?
 
 May have just one return value.
 
 If the function is void can have many diferent return values, by references.
 
*/





/*
 6.17 What is the output of the following program?


 #include <iostream>
using namespace std;

void myFunc()
{
    int var = 50;
    cout << var << endl;
}

 int main() {
 int var = 100;
     
     cout << var << endl;
     myFunc();
     cout << var << endl;
     
     
     return 0;
 }

-------Output------

100
50
100
Program ended with exit code: 0
*/


/*
6.18 What is the output of the following program?
 

#include <iostream>
using namespace std;

void showVar()
{
static int var = 10;
cout << var << endl;
var++;
    
}

int main() {
    
    for (int count = 0; count < 10; count++)
    showVar();
    
return 0;
}

-----Output------
10
11
12
13
14
15
16
17
18
19
Program ended with exit code: 0

*/



/*
6.24 What is the output of the following program?
 

#include <iostream>
#include <cstdlib>
using namespace std;

void showVals(double, double);

int main() {
double x = 1.2, y = 4.5;
showVals(x, y);
return 0;
    
}

void showVals(double p1, double p2)
{
    cout << p1 << endl;
    exit(0);
    cout << p2 << endl;
}

1.2
Program ended with exit code: 0

*/


/*
6.25 What is the output of the following program?

#include <iostream>
using namespace std;

int manip(int);
int manip(int, int);
int manip(int, double);

int main() {
    int x = 2, y= 4, z; double a = 3.1;
    z = manip(x) + manip(x, y) + manip(y, a);
    cout << z << endl;
    return 0;
    
}

int manip(int val)
{
return val + val * 2;
}
int manip(int val1, int val2)
{
return (val1 + val2) * 2;
}
int manip(int val1, double val2)
{
return val1 * static_cast<int>(val2);
}


--------Output-------
 
 30
 Program ended with exit code: 0
 
 */
