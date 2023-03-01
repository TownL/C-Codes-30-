//
//  StarSearch.cpp
//  StarSearch
//
//  Created by Jan M Rodriguez cumba on 2/8/23.
//

#include "StarSearch.hpp"
#include <iostream>
#include <iomanip>
using namespace std;


StarSearch::StarSearch(){
    
    NumScores = 1.0;
    
    cout<<"This is Constructor Function Working"<<endl;
}



StarSearch::~StarSearch(){
    
    cout<<"This is Destructor Function Working"<<endl;
}



void StarSearch::setNumScores(){
    
    cout<<"Please enter how manny scores you have: ";cin>>NumScores;

}

void StarSearch::setName(){
    

    for(int i = 0; i < NumScores; i++){
        
        cout<<"\nEnter Judge #"<<(i + 1)<<" Name:";
        cin>>names[i];
        
    }
}

void StarSearch::setScore(){
    
    for(int i = 0; i < NumScores; i++){
        
        cout<<"\nEnter Judge #"<<(i + 1)<<" Score:";
        cin>>Score[i];
        
        if(Score[i] < 1 || Score[i] > 10){
            
            cout<<"\nInvlaid 1-10 score."<<endl;
            cout<<"Enter Judge #"<<(i + 1)<<" Score:";
            cin>>Score[i];
        }
        
    }
}


void StarSearch::setMax(){
    
    for(int i = 0; i < NumScores; i++){
        
        if(Score[i] > Score[i + 1])
        {
            
            MaxNum = Score[i];
            
        }
    }
    
}
float StarSearch::getMax() const{

    return  MaxNum;
    
}



void StarSearch::setMin(){
    
    for(int i = 0; i < NumScores; i++){
        
        if(Score[i] < Score[i + 1])
        {
            
            MinNum = Score[i];
            
        }
    }
}
float StarSearch::getMin() const {
    
    return MinNum;
    
}




void StarSearch::display() const{
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    
    for(int i = 0; i < NumScores; i++){
        
        
        cout<<"\n\nJudge: "<<names[i]<<" vote: "<<Score[i]<<endl;
    }
    
    cout<<"\nHere is the Higher Score: "<<getMax()<<endl;
    cout<<"Here is the Lower Score: "<<getMin()<<endl;

    
}


