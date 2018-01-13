/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 12, 2018, 5:07 PM
 * Purpose: Find minimum amount to pay for insurance
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
    float repcst,minipay;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"This program calculates how much you should spend on insurance which "
            "should be at least 80% of what it would cost to replace the"
            " structure"<<endl;
    cout<<"Please enter the amount it would cost to replace the structure in"
            " U.S. dollars"<<endl;
    cin>>repcst;
    
    minipay=repcst*0.8f;
cout<<setprecision(2)<<fixed<<showpoint<<endl;  
cout<<"The minimum amount you should pay for insurance is "<<minipay<<" $"
            <<endl;
    //Exit stage right;
    return 0;
}

