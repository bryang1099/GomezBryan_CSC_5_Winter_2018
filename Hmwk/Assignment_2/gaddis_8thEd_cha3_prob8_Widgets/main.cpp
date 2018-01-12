/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 10, 2018, 1:07 PM
 * Purpose: Create a CSC/CIS 5 Template
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
    float widgw,//Widget weight
            paltw,//Pellet weight
            ww,//Weight with widgets on the pallet
            Widg,//How many widgets
            totww;//Weight with
    //Initialize Variables
    widgw=12.5;
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"This program calculates how many widgets are on the pallet"<<endl;
    cout<<"How much does the pallet weigh in lb by it self? "<<endl;
    cin>>paltw;
    
    cout<<"How much does the pallet weight in lbs with the widgets? "<<endl;
    cin>>ww;
    
    totww=ww-paltw;
    widgw=totww/widgw;
    
    cout<<"There are "<<widgw<<" Widgets"<<endl;
    
   
    //Exit stage right;
    return 0;
}

