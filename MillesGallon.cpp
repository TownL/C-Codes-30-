//
//  MillesGallon.cpp
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
 • Use el siguiente dato al crear uno de los objetos. Yaris 2020 su tanque es llenado con 11.6
    galones y recorre 452 millas por tanque lleno.
 • Investigue la información de otro vehículo y se la pide al usuario.
 • Mostrar su salida con una cifra significativa.
 
 Valor Total de 100 pts.

 
1. Miles per Gallon
 
 Write a program that calculates a car’s gas mileage.
 
 The program should ask the user to enter the number of gallons of gas the car can hold and the
    number of miles it can be driven on a full tank.
 
 It should then display the number of miles that may be driven per gallon of gas.
 
 */

#include <iostream>
#include <iomanip>
#include "MillesGallon.hpp"
using namespace std;


MillesGallon::MillesGallon(){
    
    gallons = 0;
    miles = 0;
    
}
/*
MillesGallon::MillesGallon(int Xgallons, int Xmiles){
    
    //setGallons(Xgallons);
    //setMiles(Xmiles);
    
}
 */

MillesGallon::~MillesGallon(){
    
    cout<<"Destructor Function working!!!!\n";
    
}

void MillesGallon::setInfo(){
    
    cout<<"Please enter your car information"<<endl;
    cout<<"Year:";cin>>years;
    cout<<"Model:";cin>>Model;
    
}

void MillesGallon::setGallons(float Xgallons){
    
    cout<<"Please enter how manny gallons your car can handle:"<<endl;
    cin>>Xgallons;
    
    while(Xgallons <= 0)
    {
        
        cout<<"Invalid value please try again"<<endl;
        cout<<"Please enter how manny gallons your car can handle:"<<endl;
        cin>>Xgallons;
        
    }
        
    
    gallons = Xgallons;
    
}

void MillesGallon::setMiles(float Xmiles){
    
    cout<<"Please enter how many miles your car can drive with full Tank:"<<endl;
    cin>>Xmiles;
    
    while(Xmiles < 0)
    {
        
        cout<<"Invalid value please try again"<<endl;
        cout<<"Please enter how many miles your car can drive with full Tank:"<<endl;
        cin>>Xmiles;
    }
    
    miles = Xmiles;
    
}

int MillesGallon::getInfo() const{
    
    return years;
    
}

int MillesGallon::getGallons() const{
    
    return gallons;
}

int MillesGallon::getMiles() const{
    
    return miles;
}

int MillesGallon::getP_Miles() const{
    
    return miles / gallons;
    
}

void MillesGallon::display() const{
    
    cout<<"Your "<<Model<<"/"<<years<<endl;
    
    cout<<fixed<<showpoint<<setprecision(1);
    
    cout<<"Can drive: "<<getP_Miles()<<" miles per gallon."<<endl;
}




