//
//  MontlhyTax.cpp
//  MonthlyTax
//
//  Created by Jan M Rodriguez cumba on 2/1/23.
//

#include "MontlhyTax.hpp"
#include <iostream>
using namespace std;


//Constructors
MonthlyTax::MonthlyTax(){
    Month = "June";
    Year = 2020;
    Sales = 25068.76;
    Percent = 6;
    cout<<"This is constructor function running"<<endl;
}

//Destructor
MonthlyTax::~MonthlyTax(){
    cout<<"\nThis is destructor function running\n"<<endl;
}

//Functions
void MonthlyTax::setMonth(){
    
    cout<<"Please enter the month:";cin>>Month;
    
}
void MonthlyTax::setYear(){
    
    cout<<"Please enter the year:";cin>>Year;
    
}
void MonthlyTax::setTotalMS(){
    
    cout<<"Please enter the total of sales:";cin>>Sales;

}
void MonthlyTax::setPercent(){
    
    cout<<"Please enter the percent of tax:";cin>>Percent;
    
}




//Return Functions
string MonthlyTax::getMonth() const{
    
    return Month;
    
}
int MonthlyTax::getYear() const{
    
    return Year;
    
}

float MonthlyTax::getTotalMS() const {
    
    return Sales;
    
}

int MonthlyTax::getPercent() const {
    
    return Percent;
    
}



float MonthlyTax::getStateTax() const{
    
    float stateTax;
    
    stateTax = Sales * 4 / 100;

    return stateTax;
    
}

float MonthlyTax::getCountyTax() const{
    
    float countyTax;
    
    countyTax = Sales * 2 / 100;
    
    return countyTax;
}

float MonthlyTax::getTaxTotal() const{
    
    float TaxTotal;
    
    TaxTotal = Sales * Percent / 100;
    
    return TaxTotal;
    
}

float MonthlyTax::getTotal() const{
    
    float totalAmountCollected;
    
    totalAmountCollected = Sales + Sales * Percent / 100;

    return totalAmountCollected;
    
}


//Display
void MonthlyTax::display() const{
    
    cout<<"Month: "<<Month<<endl;
    cout<<"\n-------------------"<<endl;
    cout<<"\nTotal Collected: "<<getTotal()<<endl;
    cout<<"\nSales: "<<Sales<<endl;
    cout<<"County Sales Tax: "<<getCountyTax()<<endl;
    cout<<"State Sales Tax: "<<getStateTax()<<endl;
    cout<<"Total Sales Tax: "<<getTaxTotal()<<endl;
    
}

