/*
 1. (Gaddis) Programming Challenges, 15. Shipping Charges pág. 223, Cap 4.
 
 a. Implemente un menú de opciones donde el usuario seleccionará por el peso del
    paquete, la cantidad a se cobrará el envío por cada 500 millas.
 b. Implemente una función con el menú de opciones que retorne la opción
    deseada. El menú debe tener las opciones en formato de caracteres.
 c. Declare constantes de los precios en su implementación.
 d. Implemente en su programa un switch/case en tienen donde cada una de las
    operaciones realizadas deben ser implementadas con funciones con parámetros.
 e. Valide el peso de cada paquete y las distancia mediante ciclos dentro de las
    funciones.
 f. Implemente un ciclo para repetir el programa.
 g. Incluya su salida donde muestre cada una de las validaciones y las opciones del
    menú de opciones.
 
 
 15. Shipping Charges
 
 The Fast Freight Shipping Company charges the following rates:
 
 
 Write a program that asks for the weight of the package and the distance it is to
 be shipped, and then displays the charges.
 
 Input Validation:
 Do not accept values of 0 or less for the weight of the package. Do not accept
 weights of more than 20 kg (this is the maximum weight the company will ship). Do
 not accept distances of less than 10 miles or more than 3,000 miles. These are the
 company’s minimum and maximum shipping distances.
 
 */




#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;


const double firstPrice = 1.10, secondPrice = 2.20, thirdPrice = 3.70, fourthPrice = 4.80;
double price = 0;


bool flag = false;


void getmenu()
{
    
    
    cout << "The FFC Company."<<endl<<endl;
    cout << "Chosee the weight of your package:"<<endl;
    cout << "A. 2 kg or less has a price of $" << firstPrice << " per every 500 miles."<<endl;
    cout << "B. Over 2 kg but not more than 6 kg has a price of $" << secondPrice
         << " per every 500 miles."<<endl;
    cout << "C. Over 6 kg but not more than 10 kg has a price of $" << thirdPrice
         << " per every 500 miles\n";
    cout << "D. Over 10kg but not more than 20kg has a price of $" << fourthPrice    << " per every 500 miles\n";
}


double getWeight()
{
    double weight = 0;
    char option;
    
    
        cout << "Enter the weight of the package: " << endl;
        cin >> weight;
        if (weight <= 0 || weight > 20)
        {
            cout << "\nError value is invalid.\n" << endl;
        }
        
        if(weight > 0 && weight <= 2)
        {
            option = 'A';
            option = toupper(option);
        }
        
        else if (weight > 2 && weight <= 6)
        {
            option = 'B';
            option = toupper(option);
        }
        
        else if(weight > 6 && weight <= 10)
        {
            option = 'C';
            option = toupper(option);
        }
        
        else if(weight > 10 && weight <= 20)
        {
            option = 'D';
            option = toupper(option);
        }
        

    return weight;
    
}


double getDistance()
{
    double distance = 0;
    do {
        flag = false;
        cout << "Enter the distance of the package: " << endl;
        cin >> distance;
        if (distance < 10 || distance > 3000)
        {
            cout << "\nError value is invalid.\n" << endl;
            flag = true;
        }
    } while (flag);
    
    return distance;
}


void Calculate()
{
    double weight = getWeight();
    double total = price * ceil(getDistance()/500); //ceil es para redondear al proximo 500.
    //printf("$%0.2f\n", total);
}





/*
double getoptionA()
{
    double weight, distance, total;
    
    do{
        flag = false;
        cout << "Enter the weight of the package:"<<endl;
        cin >> weight;
        if(weight <= 0 || weight > 2)
        {
            cout << "Error the package cant be more than 2kg."<<endl;
            flag = true;
        }
        
    }while (flag);
    
    
    do{
        flag = false;
        cout << "Enter the distances it is to be shipped:"<<endl;
        cin >> distance;
        if(distance < 10  || distance > 3000)
        {
            cout << "Error the diatances cant be less than 10 miles or more than 3,000 miles."<<endl;
            flag = true;
        }
        
    }while (flag);
    

    total = distance * firstPrice / 500;
    cout << "Total cost is: $" << total << endl;
    
    return distance;
}
double getoptionB()
{
    double weight, distance, total;
    
    cout << "Enter the weight of the package:"<<endl;
    cin >> weight;
    while (weight < 2 || weight > 6)
    {
        cout << "Error the package has to be over 2kg or less than 6kg."<<endl;
        cout << "Enter the weight of the package:"<<endl;
        cin >> weight;
    }
      cout << "Enter the distances it is to be shipped:"<<endl;
      cin >> distance;
      while (distance < 10 || distance > 3000)
      {
          cout << "Error the diatances cant be less than 10 miles or more than 3,000 miles."<<endl;
          cout << "Enter the distances it is to be shipped:"<<endl;
          cin >> distance;
      }
    
    total = distance * secondPrice;
    cout << "Total cost is " << total << endl;
    
    return total;

}
double getoptionC()
{
    double weight, distance, total;
    
    cout << "Enter the weight of the package:"<<endl;
    cin >> weight;
    while (weight < 6 || weight > 10)
    {
        cout << "Error the package has to be over 6kg or less than 10kg."<<endl;
        cout << "Enter the weight of the package:"<<endl;
        cin >> weight;
    }
      cout << "Enter the distances it is to be shipped:"<<endl;
      cin >> distance;
    while (distance < 10 || distance > 3000)
    {
        cout << "Error the diatances cant be less than 10 miles or more than 3,000 miles."<<endl;
        cout << "Enter the distances it is to be shipped:"<<endl;
        cin >> distance;
      }
    
    total = distance * thirdPrice;
    cout << "Total cost is " << total << endl;
    
    return total;
    
}
double getoptionD()
{
    double weight, distance, total;
    
    cout << "Enter the weight of the package:"<<endl;
    cin >> weight;
    
    while (weight < 10 || weight > 20)
    {
        cout << "Error the package has to be over 10kg or less than 20kg"<<endl;
        cout << "Enter the weight of the package:"<<endl;
        cin >> weight;
    }
      cout << "Enter the distances it is to be shipped:"<<endl;
      cin >> distance;
      while (distance < 10 || distance > 3000)
      {
          cout << "Error the diatances cant be less than 10 miles or more than 3,000 miles"<<endl;
          cout << "Enter the distances it is to be shipped:"<<endl;
          cin >> distance;
      }
    
    total = distance * fourthPrice / 500;
    cout << "Total cost is " << total << endl;
    
    return total;
}
*/



void getdefault()
{
    cout << "That options doesnt exist\n";
}

void getquit()
{
    cout<<endl;
    cout << "If you want to quit enter Y:\n";
}





int main()
{
    char option;
    
    cout<<showpoint<<fixed<<setprecision(2);
    
    do {
        getmenu();
        cin >> option;
        option = toupper(option);
        switch (option)
        {
            case 'A':
                getWeight();
                getDistance();
                Calculate();
                break;
                
            case 'B':
                getWeight();
                getDistance();
                Calculate();
                break;
                
            case 'C':
                getWeight();
                getDistance();
                Calculate();
                break;
            case 'D':
                getWeight();
                getDistance();
                Calculate();
                break;
                
            default:
                getdefault();
                break;
        }
        getquit();
        cin >> option;
        option = toupper(option);
      } while (option != 'Y');
    
return 0;
    
}




/*
 
 =====================================OUTPUT======================================
 
 The FFC Company.

 Chosee the weight of your package:
 A. 2 kg or less has a price of $1.1 per every 500 miles.
 B. Over 2 kg but not more than 6 kg has a price of $2.2 per every 500 miles.
 C. Over 6 kg but not more than 10 kg has a price of $3.7 per every 500 miles
 D. Over 10kg but not more than 20kg has a price of $4.8 per every 500 miles
 Q
 That options doesnt exist

 If you want to quit enter Y:
 N
 The FFC Company.

 Chosee the weight of your package:
 A. 2 kg or less has a price of $1.1 per every 500 miles.
 B. Over 2 kg but not more than 6 kg has a price of $2.2 per every 500 miles.
 C. Over 6 kg but not more than 10 kg has a price of $3.7 per every 500 miles
 D. Over 10kg but not more than 20kg has a price of $4.8 per every 500 miles
 C
 Enter the weight of the package:
 5
 Error the package has to be over 6kg or less than 10kg.
 Enter the weight of the package:
 8
 Enter the distances it is to be shipped:
 4000
 Error the diatances cant be less than 10 miles or more than 3,000 miles.
 Enter the distances it is to be shipped:
 2500
 
 Total cost is 18.5

 If you want to quit enter Y:
 Y
 Program ended with exit code: 0
 
 
*/

/*




#include <iostream>
#include <cmath>
using namespace std;

 

const double firstPrice = 1.10;
const double secondPrice = 2.20;
const double thirdPrice = 3.70;
const double fourthPrice = 4.80;
double price = 0;

bool flag = false;

 

void ShowMenu()
{
    
    cout << "The FFC Company."<<endl<<endl;
    cout << "Chosee the weight of your package:"<<endl;
    cout << "A. 2 kg or less has a price of $" << firstPrice << " per every 500 miles."<<endl;
    cout << "B. Over 2 kg but not more than 6 kg has a price of $" << secondPrice
         << " per every 500 miles."<<endl;
    cout << "C. Over 6 kg but not more than 10 kg has a price of $" << thirdPrice
         << " per every 500 miles\n";
    cout << "D. Over 10kg but not more than 20kg has a price of $" << fourthPrice    << " per every 500 miles\n";
}



char getOption()
{
    char option = ' ';
    do {
        flag = false;
        cout << "Select menu option: " << endl;
        cin >> option;
        option = toupper(option);
        if (option != 'A' && option != 'B' && option != 'C' && option != 'D')
        {
            cout << "Error invalid option." << endl;
            flag = true;
        }
    } while (flag);
    
    return option;
}

 

double getWeight()
{
    double weight = 0;
    do {
        flag = false;
        cout << "Enter the weight of the package: " << endl;
        cin >> weight;
        if (weight > 0 && weight <= 2) {
            price = firstPrice;
        }
        else if (weight > 2 && weight <= 6) {
            price = secondPrice;
        }
        else if (weight > 6 && weight <= 10) {
            price = thirdPrice;
        }
        else if (weight > 10 && weight <= 20) {
            price = fourthPrice;
        }
        else {
            cout << "\nError value is invalid.\n" << endl;
            flag = true;
        }
    } while (flag);
    
    return weight;
}

 

double getDistance()
{
    double distance = 0;
    do {
        flag = false;
        cout << "Enter the distance of the package: " << endl;
        cin >> distance;
        if (distance < 10 || distance > 3000)
        {
            cout << "\nError value is invalid.\n" << endl;
            flag = true;
        }
    } while (flag);
    
    return distance;
}

 

void Calculate()
{
    double weight = getWeight();
    double total = price * ceil(getDistance()/500);
    printf("$%0.2f\n", total);
}





 

int main()
{
    bool flag = false;
    char repeat;
    
    do {
        flag = false;
        ShowMenu();
        Calculate();
        cout << "\nWant to repeat?" << endl;
        cin >> repeat;
        repeat = toupper(repeat);
        if (repeat == 'Y') {
            flag = true;
        }
        cout << endl;
        
    } while (flag);
    
    return 0;
}
*/
