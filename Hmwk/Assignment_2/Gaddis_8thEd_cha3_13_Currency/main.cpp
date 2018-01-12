/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 10, 2018, 1:35 PM
 * Purpose: This program converts U.S. dollar amount to yen and euros
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
    float usd,
            yen,
            euros;
    //Initialize Variables
   
    yen=98.93;
    euros=0.74;
    
    
    
    //Process/Map inputs to outputs
    
    //Output data
    
    cout<<"This program converts U.S. dollar amount to yen and euros"<<endl;
    cout<<"enter the amount of U.S. dollars your want to convert"<<endl;
    cin>>usd;
    
    yen=yen*usd;
    euros=euros*usd;
    
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"U.S. dollar to yen is "<<yen<<" Yen"<<endl;
     cout<<"U.S. dollar to euros is "<<euros<<" Euros"<<endl;
    //Exit stage right;
    return 0;
}

