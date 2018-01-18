/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 16, 2018, 10:05 AM
 * Purpose: Grade with an Dependant If
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char vege,vegan,glutfre;
    short rest;
    //Initialize Variables
    cout<<"This program Gives you resturant options based of how your party"
    " eats"<<endl;
    cout<<"Is anyone in your party vegetarian?"<<endl;
    cin>>vege;
    
    cout<<"Is anyone in your party vegan?"<<endl;
    cin>>vegan;
    
    cout<<"Is anyone in your party gluten-free?"<<endl;
    cin>>glutfre;
    
    //Process/Map inputs to outputs
    if(vege=='y')       rest='k';

    //Output data
    cout<<rest<<endl;
    //Exit stage right;
    return 0;
}

