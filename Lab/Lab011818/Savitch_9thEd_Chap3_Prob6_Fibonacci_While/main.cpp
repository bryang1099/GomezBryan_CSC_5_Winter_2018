/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * Created on January 18, 2018, 11: PM
 * Purpose:  Fibonacci Sequence
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
    unsigned int fi,fim1,fim2;
    unsigned char nLoops;
    
    //Initialize Variables
    nLoops=9;
    fim1=1;
    fim2=1;
    cout<<fim2<<","<<fim1;
    
    //Process/Map inputs to outputs
    unsigned char cnt=0;
    while(++cnt<=nLoops){
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    }

    
    //Comparison of the ratio of Fibonacci to Golden Ratio
    cout<<endl<<endl<<"Ratio = "<<1.0f*fim1/fim2<<endl;
    
    //Exit stage right!
    return 0;
}