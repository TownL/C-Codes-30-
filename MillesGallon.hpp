//
//  MillesGallon.hpp
//  MillesGallon
//
//  Created by Jan M Rodriguez cumba on 2/1/23.
//

/*
 
 
 1. Implemente una clase con atributos numéricos.
 2. Implemente funciones constructoras, destructor, “mutators”, “accessors”, “member” en su clase.
 3. Implemente la tabla descriptive de su clase.
 4. Implemente su diagrama UML.
 5. Implemente su programa en un solo archivo.
 6. Envíe su solución en un archivo en formato PDF.
 
 Descripción de los problemas:
 1. (Gaddis) Program Challenges 1. Miles per Gallon pág 142 Cap 3.
 
 
 • Define a dos objetos con “default constructors” y el constructor con parámetros.
 
 • Use el siguiente dato al crear uno de los objetos:
   Yaris 2020 su tanque es llenado con 11.6 galones y recorre 452 millas por tanque lleno.
 
 • Investigue la información de otro vehículo y se la pide al usuario.
 
 • Mostrar su salida con una cifra significativa.
 
 
 Valor Total de 100 pts.

 
1. Miles per Gallon
 
 Write a program that calculates a car’s gas mileage.
 
 The program should ask the user to enter the number of gallons of gas the car can hold and the
    number of miles it can be driven on a full tank.
 
 It should then display the number of miles that may be driven per gallon of gas.
 
 */

#ifndef MillesGallon_hpp
#define MillesGallon_hpp

#include <stdio.h>
#include <string>
using namespace std;

class MillesGallon
{
private:
    
    string Model;
    float gallons;
    float miles;
    int years;
    
public:
    
    MillesGallon();
    //MillesGallon(int ,int);
    
    ~MillesGallon();
    
    void setInfo();
    int getInfo() const;
    
    
    void setGallons(float);
    int getGallons() const;

    void setMiles(float);
    int getMiles() const;

    int getP_Miles() const;
    
    void display() const;
    
};







#endif /* MillesGallon_hpp */




/*
 
 Please enter your car information
 Year:2020
 Model:Yaris
 Please enter how manny gallons your car can handle:
 11.6
 Please enter how many miles your car can drive with full Tank:
 452
 Your Yaris/2020
 Can drive: 38 miles per gallon.
 Destructor Function working!!!!
 Program ended with exit code: 0
 
 */
