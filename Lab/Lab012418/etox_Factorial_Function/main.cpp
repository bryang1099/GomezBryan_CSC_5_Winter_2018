/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 24, 2018, 10:20 PM
 * Purpose:  etox 
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fcttoril(int);//Product of 1*2*3*4...n*
int fctRcsv(int);//Recursion n

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int n,fact,nterms;
    float etox,x;
    //Initialize Variables
    cout<<"This program solves the e^x sequence"<<endl;
    cout<<"Input x and the number of terms in the sequence"<<endl;
    cout<<"Number of terms > 1"<<endl;
    cin>>x>>nterms;
    
    
    //Process/Map inputs to outputs
    etox=1;
    for(int n=1;n<nterms;n++){
    //etox+=pow(x,n)/fcttoril(n);
      etox+=pow(x,n)/fctRcsv(n);  
    }
    
    //Output data
    cout<<"e^"<<x<<"="<<etox<<" with "<<nterms<<" terms"<<endl;
    cout<<"e^"<<x<<"="<<exp(x)<<" with the math library"<<endl;
    
    
    //Exit stage right!
    return 0;
}

int fctRcsv(int n){
    if(n<=1)return 1;
    return fctRcsv(n-1)*n;
}

int fcttoril(int n){
    float fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        }
    return fact;
}