/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 10, 2018, 6:34 PM
 * Purpose: play a word game
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string name,city,cllg,prof,anml,petn,
             age;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"What is your name? "<<endl;
    getline(cin, name);
    
    cout<<"What is your age? "<<endl;
   getline(cin, age);
   
    cout<<"What city do u live in? "<<endl;
    getline(cin, city) ;
    
    cout<<"What college do you go to? "<<endl;
    getline(cin, cllg);
    
    cout<<"What is your profession? "<<endl;
    getline(cin, prof);
    
    cout<<"Name a type of pet "<<endl;
    getline(cin, anml);
    
    cout<<"Name the pet "<<endl;
    getline(cin, petn);
    
    cout<<"There once was a person named "<<name<<" who lived in "<<city
            <<". At the age of "<<age<<","<<name<<" went to college at "<<cllg
            <<"."<<name<<" graduated and went to work as a "<<prof<<". Then,"
            <<name<<" adopted a(n)"<<anml<<" named "<<petn<<". They both lived"
            " happily ever after!"<<endl;
    
    //Exit stage right;
    return 0;
}

