//
//  MontlhyTax.hpp
//  MonthlyTax
//
//  Created by Jan M Rodriguez cumba on 2/1/23.
//

#ifndef MontlhyTax_hpp
#define MontlhyTax_hpp
#include <stdio.h>
#include <string>

using namespace std;

class MonthlyTax{
    
private:
    
    string Month;
    int Year;
    float Sales;
    int Percent;
    
public:
    
    
    MonthlyTax();
    
    ~MonthlyTax();
    
    void setMonth();
    void setYear();
    void setTotalMS();
    void setPercent();
    
    
    string getMonth() const;
    int getYear() const;
    float getTotalMS() const;
    int getPercent() const;
    float getStateTax() const;
    float getCountyTax() const;
    float getTaxTotal() const;
    float getTotal() const;

    
    void display() const;
    
    
};

#endif /* MontlhyTax_hpp */
