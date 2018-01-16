/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 2, 2018, 1:20 PM
 * Purpose: Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare Variables
    unsigned short op1, op2, result, answer;
    
    //Initialize Variables
    op1=rand()%900+100;
    op2=rand()%1000;
    
    //Process/Map inputs to outputs
    result=op1+op2;
    //Output data
    cout<<"test your addition skills, Solve the following"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)>>op2<<endl;
    cout<<"-----"<<endl<<(result>1000?" ":"  ");
    cin>>answer;
    cout<<(result==answer?"Correct":"Incorrect")<<endl;
    //Exit stage right;
    return 0;
}

