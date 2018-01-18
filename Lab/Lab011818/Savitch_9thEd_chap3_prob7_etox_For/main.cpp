/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 16, 2018, 1:05 PM
 * Purpose: e to the x
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float aproxE, term, x;
    int counter,nLoops=10;
    
    //Initialize Variables
    aproxE=1.0f;
    counter=1;
    x=1.0f;
    term=x/counter++;
    
    //Process/Map inputs to outputs
    for(int cnt=2;cnt<=10;cnt++){
        aproxE+=term; 
        term*=x/cnt++;
    }
    

    

    
    //Output data
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
    
    //Exit stage right;
    return 0;
}

