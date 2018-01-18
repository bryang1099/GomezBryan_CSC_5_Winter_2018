/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 17, 2018, 10:20 AM
 * Purpose: Create a CSC/CIS 5 Template
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
    unsigned short cost,//Cost of the phone call in pennies
            hrs,mins,
            tmSpan;//duration of the phone call
    unsigned short bfrTime,aftTime;
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
    cout<<"Duration not more than 120 minutes is Valid"<<endl;
    cin>>tmSpan;
    if(tmSpan>120)exit(0);
    
    //Process/Map inputs to outputs
    hrs=(strTime[0]-48*10)+(strTime[1]-'0');
    mins=(strTime[3]-48*10)+(strTime[4]-'0');
    aftTime=(mins+tmSpan-60<=0)?0:mins+tmSpan-60;
    bfrTime=tmSpan-aftTime;
    if(day[0]=='s'||day[0]=='s'){
        cost=bfrTime*15;
    }else if(hrs>=8&&hrs<=18){
        cost=bfrTime*40;
    }else{
        cost=bfrTime*25;
    }
    //Calculate new hrs and new day
    hrs+=1;
    hrs=hrs>23?0:hrs;
    if(hrs==0&&day=="Su")day="Mo";
    if(hrs==0&&day=="Fr")day="Sa";
        if(day[0]=='s'||day[0]=='s'){
        cost=aftTime*15;
    }else if(hrs>=8&&hrs<=18){
        cost=aftTime*40;
    }else{
        cost=aftTime*25;
    }
    
    
    //Output data
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The phone call on "<<day<<" at "
            <<strTime<<" for "<<tmSpan
            <<" minutes cost = $"<<cost/100.0f<<endl;
    cout<<"Before = "<<bfrTime<<endl;
    cout<<"After = "<<aftTime<<endl;

    
    //Exit stage right;
    return 0;
}

