/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 16, 2018, 10:05 AM
 * Purpose: Grade with an Ternary Operator
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
    grade=(score<0)  ?'I':
          (score>100)?'I':
          (score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'f';

    //Output data
    cout<<"your score ="<<score<<" and your grade = "<<grade<<endl;
    //Exit stage right;
    return 0;
}

