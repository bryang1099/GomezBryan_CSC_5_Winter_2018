/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 10, 2018, 12:50 PM
 * Purpose: find test averages
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
    float t1,t2,t3,t4,t5,//Test scores 1-5
            avg,//Average
            totl;//Total
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"Enter test scores as a percent"<<endl;
    cout<<"Enter your 5 test scores to find the Average "<<endl;
    cin>>t1;
    
    cin>>t2;
    
    cin>>t3;
    
    cin>>t4;
    
    cin>>t5;
    
    
    totl=t1+t2+t3+t4+t5;//Calculates the test added up
    avg=totl/5;// Finds the average
    
    cout<<"Your average test score is "<<avg<<" %"<<endl;
    
    
    //Exit stage right;
    return 0;
}

