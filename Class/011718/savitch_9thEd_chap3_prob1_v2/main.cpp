/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 17, 2018, 10:20 AM
 * Purpose: Create a CSC/CIS 5 Template
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
    unsigned short cost,//Cost of the phone call in pennies
            hrs,mins,
            tmSpan;//duration of the phone call
    string day,//Day of the week
            strTime;
    
    //Initialize Variables
    cout<<"Calculate cost of a phone call"<<endl;
    cout<<"input the day a phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM= 13:30"<<endl;
    cin>>strTime;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>tmSpan;
    
    //Process/Map inputs to outputs
    hrs=strTime[0]-48*10+(strTime[1]-'0');
    mins=strTime[3]-48*10+(strTime[4]-'0');
    if(day[0]=='s'||day[0]=='s'){
        cost=tmSpan*15;
    }else if(hrs>=8&&hrs<=18){
        cost=tmSpan*40;
    }else{
        cost=tmSpan*25;
    }
    
    //Output data
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The phone call on"<<day<<" at "
            <<strTime<<" for "<<tmSpan
            <<" minutes cost = $"<<cost/100.0f<<endl;

    
    //Exit stage right;
    return 0;
}

