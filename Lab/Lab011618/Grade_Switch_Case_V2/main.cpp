/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 16, 2018, 10:05 AM
 * Purpose: Grade with an Switch case
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
    short score;
    char grade;
    
    //Initialize Variables
    cout<<"This program gives a grade"<<endl;
    cout<<"Type in a score from 0 to 100" <<endl;
    cin>>score;
    
    //Process/Map inputs to outputs
    grade='I';
    switch(score<0||score>100){
        case true:grade='I';break;
        default:{
            switch(score>=90){
                case true:grade='A';break;
                default:{
                    switch(score>=80){
                    case true:grade='B';break;
                        default:{
                            switch(score>=70){
                                case true:grade='C';break;
                                default:{
                                    
                                }
                            }
                        }
                    
                   
                        
                    }
                }
            }
        }

    }
    //Output data
    cout<<"your score = "<<score<<" and your grade = "<<grade<<endl;
    //Exit stage right;
    return 0;
}

