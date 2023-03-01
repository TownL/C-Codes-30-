//
//  main.cpp
//  StarSearch
//
//  Created by Jan M Rodriguez cumba on 2/8/23.


#include <iostream>
#include <iomanip>
#include "StarSearch.hpp"
using namespace std;


int main(){
    
    StarSearch Display;
    
    //Display.display();

    
    Display.setNumScores();
    Display.setName();
    Display.setScore();
    
    Display.setMax();
    Display.setMin();
    
    cout<<fixed<<showpoint<<setprecision(2);

    Display.display();
    
    return 0;
}


/*
 
------OUTPUT-----
 
 This is Constructor Function Working
 Please enter how manny scores you have: 5

 Enter Judge #1 Name:Jan

 Enter Judge #2 Name:Maria

 Enter Judge #3 Name:Pedro

 Enter Judge #4 Name:Carlos

 Enter Judge #5 Name:Sherley

 Enter Judge #1 Score:-1

 Invlaid 1-10 score.
 Enter Judge #1 Score:10

 Enter Judge #2 Score:7

 Enter Judge #3 Score:3

 Enter Judge #4 Score:8

 Enter Judge #5 Score:2
 

 Judge: Jan vote: 10.00

 Judge: Maria vote: 7.00

 Judge: Pedro vote: 3.00

 Judge: Carlos vote: 8.00

 Judge: Sherley vote: 2.00
 
 Here is the Higher Score: 10.00
 Here is the Lower Score: 2.00
 This is Destructor Function Working
 Program ended with exit code: 0
 */
 
