/*16. Population
 In a population, the birth rate is the percentage increase of the population
  due to births, and the death rate is the percentage decrease of the
  population due to deaths. Write a program that displays the size of a
  population for any number of years. The program should ask for the following
  data:
 
 • The starting size of a population
 • The annual birth rate
 • The annual death rate
 • The number of years to display
 Write a function that calculates the size of the population for a year.
 
 The formula is:
 N = P + BP − DP
 
 N is the new population size,
 P is the previous population size,
 B is the birth rate,
 D is the death rate.
 
 Input Validation: Do not accept numbers less than 2 for the starting size. Do
  not accept negative numbers for birth rate or death rate. Do not accept
  numbers less than 1 for the number of years.
 
 
 1. (Gaddis) Programming Challenges, 16. Population pág. 371, Cap 6.
 
 a. Implemente funciones para cada una de las variables que son pedidas al
    usuario.
 b. Valide cada una de las variables entradas por el usuario dentro cada función
    implementada, use ciclos en su implementación.
 c. Use el formato de salida setw() para el ancho de las columnas, incluya la librería
    de iomanip.h
 d. Use la función floor para redondear al entero menor, incluya la librería cmath.
 e. Implemente una función que realice el cálculo de la nueva población y que sea
    invocada dentro del ciclo para imprimir la tabla resultante en formato tabular.
 f. Use los siguientes valores para probar sus resultados:
 
 • Población inicial 26,235 personas
 • Porcentaje de Nacimientos de 5%
 • Porcentaje de Decesos de 2 %
 • Cantidad de años: 4
 
 */


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int getPopulation()
{
    int P;
    cout << "Starting size of population: "<<endl;
    cin>>P;
    
    while (P <= 2){
        cout<<"Error, invalid size."<<endl;
        cout << "Starting size of population: "<<endl;
        cin>>P;
    }
    return P;
}

int getBirthRate()
{
    int B;
    cout << "Annual birth rate: %"<<endl;;
    cin>>B;
    while (B <= 0){
        cout<<"Error invalid rate."<<endl;
        cout << "Annual birth rate: %"<<endl;;
        cin>>B;
    }
    return B;
}

int getDeathRate()
{
    int D;
    cout << "Annual death rate: %"<<endl;
    cin>>D;
    while (D <= 0){
        cout<<"Error invalid rate."<<endl;
        cout << "Annual death rate: %"<<endl;
        cin>>D;
    }
    return D;
}

int getNumbers_Years()
{
    int num_years;
    
    cout << "Number of years to display: "<<endl;
    cin>>num_years;
    while (num_years <= 0){
        cout<<"Error invalid number of years."<<endl;
        cout << "Number of years to display: "<<endl;
        cin>>num_years;
    }
    return num_years;
}




int getBirdPopulation(int P, int B){
    int birthPopulation;
    birthPopulation = (int) (P * (B / 100.0));
    return birthPopulation;
}


int getDeadthPopulation(int P, int D){
    int deadthPopulation;
    
    deadthPopulation = (int) (P * (D / 100.0));
    return deadthPopulation;
}




int main()
{
    int num_years, birthpopulation, deadthpopulation, newpopulation;
    
    double
    P = 0, // population size
    B = 0, // birth rate %
    D = 0; // death rate %
    
    
    P = getPopulation();
    
    
    
    B = getBirthRate();
    D = getDeathRate();
    num_years = getNumbers_Years();


    cout<<endl<<endl;
    cout<<" Population:     Birth  Birth        Dead    Dead"<<endl;
    cout<<"                 rate:  population:  rate:   population:"<<endl;
    
    
    int i = 0;
    
    do{
        birthpopulation = P * (B / 100.0);
        deadthpopulation = P * (D / 100.0);
        newpopulation = P + B - D;
        cout<<floor(newpopulation);
        
        cout<< setw(10) << P << setw(10) << B << setw(10) << birthpopulation << setw(10) << D << setw(10) << deadthpopulation <<endl;
        
        P = newpopulation;
        i++;
    }while (i <= num_years);
    cout<<endl;
    
    
    return 0;
    
}








 
/*
 
---------OUTPUT--------
 
 Starting size of population:
 26235
 Annual birth rate: %
 5
 Annual death rate: %
 2
 Number of years to display:
 4


  Population:     Birth  Birth        Dead    Dead
                  rate:  population:  rate:   population:
      26235         5      1311         2       524
      26238         5      1311         2       524
      26241         5      1312         2       524
      26244         5      1312         2       524
      26247         5      1312         2       524

 Program ended with exit code: 0
 
 */



//==============================================================================
//==============================================================================





/*
2. (Gaddis) Programming Challenges, 4. Calories Burned pág. 293, Cap 5.
 
a. Pida la siguiente información al usuario: El nombre de la persona que va
    hacer ejercicio en la trotadora, el intervalo en que se imprimirá en forma
    tabular la cantidad de calorías quemadas, y los incrementos dentro del
    intervalo.
 b. Cada una de las variables numéricas es validada con un ciclo.
 c. Implemente funciones que retornan el valor para cada una de las variables
    que son pedidas al usuario.
 d. Use el formato de salida setw()para el ancho de las columnas y
    setprecision(1) imprima una cifra significativa después del punto decimal en
    su salida , incluya la librería de iomanip.h en su implementación.
 e. Implemente una función que reciba como parámetros los datos necesarios
    para imprimir la tabla resultante.
 f. Imprima su salida con los datos proporcionado por el problema.
 
 Valor 100 pts.
 
 
 
 4. Calories Burned
 
 Running on a particular treadmill you burn 3.6 calories per minute.
 Write a program that uses a loop to display the number of calories burned
 after 5, 10, 15, 20, 25, and 30 minutes.


 */

/*

 #include<iostream>
 #include<iomanip>
 using namespace std;


double getname()
{
     string name;
     cout << "Welcome to Myrun treadmill, please enter your name:\n";
     cin >> name;
     
    return EXIT_SUCCESS;
 }

double gettime()
{
     double time;
     
     cout << "Chosee the time you are going run (min.):"<<endl;
     cin >> time;
     while (time <= 0)
     {
         cout << "Error, invalid time."<<endl;
         cout << "Chosee the time you are going run (min.):"<<endl;
         cin >> time;
     }
     return time;
 }

double getcalories()
{
    double calories;
    
    cout << "Enter how many calories you want to burn:"<<endl;
    cin >> calories;
    while (calories <= 0)
    {
        cout << "Error, invalid calories."<<endl;
        cout << "Enter how many calories you want to burn:"<<endl;
        cin >> calories;
        
    }
      return calories;
}

void display(double time, double calories)
{
    double burned = 0;
    cout<<endl;
    cout << fixed << showpoint << setprecision(1) << endl;
    
    cout << "\t\tThis are your Results from your work out:"<<endl<<endl;
    cout << "Time:" << setw(30) << " Burned calories:" <<endl<<endl;
    
    for (double count = 5; count <= time; count+=5)
    {
        burned = count * calories / time;
        
        cout<< count << " min." <<setw(15) << burned << " cal." <<setw(5) << endl;
        
    }
}


 int main()
{
     double name, time, calories;
     
     name = getname();
     time = gettime();
     calories = getcalories();
     display(time, calories);

     return 0;
 }

*/




 





 /*
=====================OUTPUT=====================
  
  Welcome to Myrun treadmill, please enter your name:
  Jan
  Chosee the time you are going run (min.):
  -20
  Error, invalid time.
  Chosee the time you are going run (min.):
  30
  Enter how many calories you want to burn:
  0
  Error, invalid calories.
  Enter how many calories you want to burn:
  200


          This are your Results from your work out:

  Time:              Burned calories:

   5.0 min.           33.3 cal.
   10.0 min.          66.7 cal.
   15.0 min.          100.0 cal.
   20.0 min.          133.3 cal.
   25.0 min.          166.7 cal.
   30.0 min.          200.0 cal.
  
  Program ended with exit code: 0
 
*/
