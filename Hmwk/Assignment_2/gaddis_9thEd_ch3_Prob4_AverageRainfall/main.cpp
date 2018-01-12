/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 2, 2018, 1:20 PM
 * Purpose: Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string mon,mon2,mon3;
    float rainavg,rnf1,rnf2,rnf3;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"This program Calculates the average rainfall of 3 months"<<endl;
    cout<<"Please enter the 3 month one at a time "<<endl;
    getline(cin,mon);
    getline(cin,mon2);
    getline(cin,mon3);
    
    cout<<"Enter the average rain fall for "<<mon<<endl;
    cin>>rnf1;
    cout<<"Enter the average rain fall for "<<mon2<<endl;
    cin>>rnf2;
    cout<<"Enter the average rain fall for "<<mon3<<endl;
    cin>>rnf3;  
    
    rainavg=(rnf1+rnf2+rnf3)/3;
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"The average rainfall of "<<mon<<", "<<mon2<<", and"
            <<mon3<<" is "<<rainavg<<endl;
    
    //Exit stage right;
    return 0;
}

