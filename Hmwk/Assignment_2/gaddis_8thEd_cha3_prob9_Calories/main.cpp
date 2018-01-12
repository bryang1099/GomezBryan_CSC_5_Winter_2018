/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 10, 2018, 12:55 PM
 * Purpose: to tell you how many calories you ate
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
    float cki,//cookies
            cal;//calories
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"This program calculate how many calories were consumed "
            "based on how many you ate"<<endl;
    
    cout<<"Enter the amount of cookies up to 30"<<endl;
    
    cin>>cki;
    cki=cki/10;
    cal=cki*300;
    
    cout<<"You have consumed "<<cal<<" Calories"<<endl;
    
    //Exit stage right;
    return 0;
}

