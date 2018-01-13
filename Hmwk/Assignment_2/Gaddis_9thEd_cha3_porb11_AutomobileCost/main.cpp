/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 12, 2018, 5:34 PM
 * Purpose: Calculate monthly cost of having a car
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
    float lpay,//Loan payment
            insur,//Insurance
            gas,//Gas
            oil,//oil
            tires,//tires
            mcost,
            anncst,
            maint;//Maintenance
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"This program calculates the monthly and annual coast of having a coast and"
            <<endl;
    cout<<"Please enter the monthly cost for your Loan payment "<<endl;
    cin>>lpay;
    cout<<"Please enter the monthly cost for gas "<<endl;
    cin>>gas;
    cout<<"Please enter the monthly cost for oil "<<endl;
    cin>>oil;
    cout<<"Please enter the monthly cost for your tires "<<endl;
    cin>>tires;
    cout<<"Please enter the monthly cost for maintenance "<<endl;
    cin>>maint;
    cout<<"Please enter the monthly cost for your insurance "<<endl;
    cin>>insur;    
    
  mcost=lpay+gas+oil+tires+maint+insur;
  anncst=mcost*12;       
cout<<setprecision(2)<<fixed<<showpoint<<endl;  
cout<<"The Monthly cost will be"<<endl;
cout<<mcost<<"$"<<endl;
cout<<"The Annual cost will be"<<endl;
cout<<anncst<<"$"<<endl;
        
    //Exit stage right;
    return 0;
}

