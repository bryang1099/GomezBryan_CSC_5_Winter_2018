/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 17, 2018, 10:29 PM
 * Purpose: To find out how many points you will get
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
    short purch,pts;
    
    //Initialize Variables
    cout<<"This program tell would how many points are rewarded"<<endl;
    cout<<"Pleas input how many books you have purchased"<<endl;
    cin>>purch;
  
    //Process/Map inputs to outputs
    if(purch==1){
        pts=5;
    }else if(purch==2){
        pts=15;
    }else if(purch==3){
        pts=30;
    }else if(purch>=4){
        pts=60;            
                
    }else{
        pts=0;
    }
    
    //Output data
    cout<<"you get "<<pts<<endl;
    
    //Exit stage right;
    return 0;
}

