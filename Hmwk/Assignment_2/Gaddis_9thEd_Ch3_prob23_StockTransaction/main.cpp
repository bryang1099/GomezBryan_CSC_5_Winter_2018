/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 11, 2018, 9:15 PM
 * Purpose: Find out how much joe made
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
   float nmbrs,//How many shares,
           mps,//How much each share was
           mps2,//How much each share was
           totsp,//total stock price
           totsp2,//Total stock price when sold
           totsp2c,
           util,
           util2,
           cmstot,// how much commission he paid when he sold the stocks
           sbc;//stock broker commission
           
    //Initialize Variables
    nmbrs=1000;//How many shares
   mps=45.50f;//how much the shares were when he bought them
   mps2=56.90f;//How much he sold them for each
   sbc=0.02f;//Stock broker commission
    
    //Process/Map inputs to outputs
   util=nmbrs*mps*sbc;
   util2=nmbrs*mps;
   totsp=util+util2;// how much he paid for the stocks including commission
   totsp2=nmbrs*mps2;// how much he sold the stocks for total
   cmstot=nmbrs*mps2*sbc;//How much he payed the stock broker when he sold the stocks
   totsp2c=(totsp2-cmstot)-totsp;
   
   
    //Output data
       cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Joe paid "<<mps<<"$ per stock or "<<totsp<<"$ Total"<<endl;
    cout<<"Joe paid "<<util<<"$ of commission"<<endl;
    cout<<"Joe sold the stock for "<<mps2<<"$ per share or "<<totsp2<<"$ Total"
            <<endl;
    cout<<"Joe paid "<<cmstot<<"$ of commission when he sold the stocks"<<endl;
    cout<<"The amount of profit Joe made is "<<totsp2c<<"$"<<endl;
    

    
    //Exit stage right;
    return 0;
}

