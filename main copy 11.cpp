/*
 
 //Jan M. Rodriguez Cumba
 
 1. (Gaddis) Programming Challenger, 12. Star Search pág. 370, Cap 6.
 a. Implemente cuatro funciones cuyos parámetros sean por valor y por referencia,
 las funciones retornaran uno o mas valores por sus parámetros de entrada.
 
 12. Star Search
 A particular talent competition has five judges, each of whom awards a score between 0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer’s final score is determined by dropping the highest and lowest score received, then averaging the three remaining scores. Write a program that uses this method to calculate a contestant’s score. It should include the following functions:
 • void getJudgeData() should ask the user for a judge’s score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five judges.
 • void calcScore() should calculate and display the average of the three scores that remain after dropping the highest and lowest scores the performer received. This function should be called just once by main and should be passed the five scores.
 The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop.
 • int findLowest() should find and return the lowest of the five scores passed to it.
 • int findHighest() should find and return the highest of the five scores passed to it.
 Input Validation: Do not accept judge scores lower than 0 or higher than 10.
 
 */

#include <iostream>
#include <iomanip>
using namespace std;

void getJudgeData(float &Judge1s,float &Judge2s,float &Judge3s,float &Judge4s,float &Judge5s){
    
    do{
        cout<<"Please enter Judges score: 0 to 10 \n";
        cout<<"Judge #1: ";
        cin>>Judge1s;
    }while(Judge1s > 10 || Judge1s <= 0);
    
    
    do{
        cout<<"Please enter a number betwen 0 to 10 \n";
        cout<<"Judge #2: ";
        cin>>Judge2s;
    }while(Judge2s > 10 || Judge2s <= 0);

    do{
        cout<<"Please enter a number betwen 0 to 10 \n";
        cout<<"Judge #3: ";
        cin>>Judge3s;
    }while(Judge3s > 10 || Judge3s <= 0);

    do{
        cout<<"Please enter a number betwen 0 to 10 \n";
        cout<<"Judge #4: ";
        cin>>Judge4s;
    }while(Judge4s > 10 || Judge4s <= 0);

    do{
        cout<<"Please enter a number betwen 0 to 10 \n";
        cout<<"Judge #5: ";
        cin>>Judge5s;
    }while(Judge5s > 10 || Judge5s <= 0);
    
}

int findHighest(float Judge1s,float Judge2s,float Judge3s,float Judge4s,float Judge5s){
        
    if(Judge1s > Judge2s && Judge1s > Judge3s && Judge1s > Judge4s && Judge1s > Judge5s){
        return Judge1s;
    }
    
    if(Judge2s > Judge1s && Judge2s >= Judge3s && Judge2s >= Judge4s && Judge2s >= Judge5s){
        return Judge2s;
    }
    
    if(Judge3s > Judge1s && Judge3s > Judge2s && Judge3s > Judge4s && Judge3s > Judge5s){
        return Judge3s;
    }
    
    if(Judge4s > Judge1s && Judge4s > Judge2s && Judge4s > Judge3s && Judge4s > Judge5s){
        return Judge4s;
    }
    
    if(Judge5s > Judge1s && Judge5s > Judge2s && Judge5s > Judge3s && Judge5s > Judge4s){
        return Judge5s;
    }
    return 0;
}

int findLowest(float Judge1s,float Judge2s,float Judge3s,float Judge4s,float Judge5s){
    
    if(Judge1s < Judge2s && Judge1s < Judge3s && Judge1s < Judge4s && Judge1s < Judge5s){
        return Judge1s;
    }
    
    if(Judge2s < Judge1s && Judge2s < Judge3s && Judge2s < Judge4s && Judge2s < Judge5s){
        return Judge2s;
    }
    
    if(Judge3s < Judge1s && Judge3s < Judge2s && Judge3s < Judge4s && Judge3s < Judge5s){
        return Judge3s;
    }
    
    if(Judge4s < Judge1s && Judge4s < Judge2s && Judge4s < Judge3s && Judge4s < Judge5s){
        return Judge4s;
    }
    
    if(Judge5s < Judge1s && Judge5s < Judge2s && Judge5s < Judge3s && Judge5s < Judge4s){
        return Judge5s;
        
    }
    return 0;
}

void calcScore(float Judge1s,float Judge2s,float Judge3s,float Judge4s,float Judge5s,float &Total, float High, float Low){
    
    High = findHighest(Judge1s, Judge2s, Judge3s, Judge4s, Judge5s);
    Low  = findLowest(Judge1s, Judge2s, Judge3s, Judge4s, Judge5s);
    
    if (High == static_cast<int>(Judge1s))
    {
        if (Low == static_cast<int>(Judge2s))
            Total = (Judge3s + Judge4s + Judge5s)/3;
        else if (Low == static_cast<int>(Judge3s))
            Total = (Judge2s + Judge4s + Judge5s)/3;
        else if (Low == static_cast<int>(Judge4s))
            Total = (Judge3s + Judge2s + Judge5s)/3;
        else
            Total = (Judge2s + Judge3s + Judge4s)/3;
        
    }
    
    else if (High == static_cast<int>(Judge4s))
    {
        if (Low == static_cast<int>(Judge1s))
            Total = (Judge3s + Judge4s + Judge5s)/3;
        else if (Low == static_cast<int>(Judge3s))
            Total = (Judge1s + Judge4s + Judge5s)/3;
        else if (Low == static_cast<int>(Judge4s))
            Total = (Judge3s + Judge1s + Judge5s)/3;
        else
            Total = (Judge1s + Judge3s + Judge4s)/3;
    }
    
    else if (High == static_cast<int>(Judge3s))
    {
        if (Low == static_cast<int>(Judge2s))
            Total = (Judge1s + Judge4s + Judge5s)/3;
        else if (Low == static_cast<int>(Judge1s))
            Total = (Judge2s + Judge4s + Judge5s)/3;
        else if (Low == static_cast<int>(Judge4s))
            Total = (Judge1s + Judge2s + Judge5s)/3;
        else
            Total = (Judge2s + Judge1s + Judge4s)/3;
    }
    
    else if (High == static_cast<int>(Judge4s))
    {
        if (Low == static_cast<int>(Judge2s))
            Total = (Judge3s + Judge1s + Judge5s)/3;
        else if (Low == static_cast<int>(Judge3s))
            Total = (Judge2s + Judge1s + Judge5s)/3;
        else if (Low == static_cast<int>(Judge1s))
            Total = (Judge3s + Judge2s + Judge5s)/3;
        else
            Total = (Judge2s + Judge3s + Judge1s)/3;
    }
    
    else
    {
        if (Low == static_cast<int>(Judge2s))
            Total = (Judge3s + Judge4s + Judge1s)/3;
        else if (Low == static_cast<int>(Judge3s))
            Total = (Judge2s + Judge4s + Judge1s)/3;
        else if (Low == static_cast<int>(Judge4s))
            Total = (Judge3s + Judge2s + Judge1s)/3;
        else
            Total = (Judge2s + Judge3s + Judge4s)/3;
        
    }
    
}



int main(){
    float Judge1s, Judge2s, Judge3s, Judge4s, Judge5s,
          Total = 0,
          Low = 0,
          High = 0;
    
    cout<<fixed<<showpoint<<setprecision(1);
    
    getJudgeData(Judge1s,Judge2s,Judge3s,Judge4s,Judge5s);
    cout<<"The Highest number is: "<<findHighest(Judge1s, Judge2s, Judge3s, Judge4s, Judge5s)<<endl;
    cout<<"The lowest number is: "<<findLowest(Judge1s, Judge2s, Judge3s, Judge4s, Judge5s)<<endl;
    calcScore(Judge1s, Judge2s, Judge3s, Judge4s, Judge5s, Total, Low, High);
    cout<<"The average of left numbers is: "<<Total<<endl;
    
        
    return 0;
}


/*
                    --------------OUTPUT------------
 
 Please enter Judges score: 0 to 10
 Judge #1: 0
 Please enter Judges score: 0 to 10
 Judge #1: -1
 Please enter Judges score: 0 to 10
 Judge #1: 4
 Please enter a number betwen 0 to 10
 Judge #2: 7
 Please enter a number betwen 0 to 10
 Judge #3: 8
 Please enter a number betwen 0 to 10
 Judge #4: 6
 Please enter a number betwen 0 to 10
 Judge #5: 5
 The Highest number is: 8
 The lowest number is: 4
 The average of left numbers is: 6.0
 Program ended with exit code: 0
 
*/
