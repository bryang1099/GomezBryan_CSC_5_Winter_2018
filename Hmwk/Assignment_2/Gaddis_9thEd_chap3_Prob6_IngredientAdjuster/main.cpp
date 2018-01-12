/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 9, 2018, 11:14 PM
 * Purpose: Find how much ingredients you need to make cookies
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float coFlour,//how many cups of flour
            coBut,//how many cups of butter
            coSug,//How many cups of sugar
            util,
            cki;//how many cookies
            
    //Initialize Variables
    coFlour=2.75f;
    coBut=1;
    coSug=1.5f;
    
    //Process/Map inputs to outputs
    
  
    //Output data
    
    cout<<"How many cookies do you need to make? ";
    cin>>cki;

    util=cki/48;
    coFlour=util*coFlour;
    coBut=util*coBut;
    coSug=util*coSug;
            
    cout<<"Your will need "<<coFlour<<" Cups of flour"<<endl;
    cout<<"Your will need "<<coBut<<" Cups of butter"<<endl;
    cout<<"Your will need "<<coSug<<" Cups of sugar"<<endl;

    //Exit stage right;
    return 0;
}

