/* 
 * File:   main.cpp
 * Author: Bryan Gomez
 * * Created on January 11, 2018, 1:16 PM
 * Purpose: Validate the Truth Table
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
    bool x,y;
    
    //Generate the Heading of the Truth Table
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "
            <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //First Row
    x=true;
    y=true;
    cout<<(x?'T':'f')<<" ";
    cout<<(y?'T':'f')<<"  ";
    cout<<(!x?'T':'f')<<"  ";
    cout<<(!y?'T':'f')<<"   ";
    cout<<(x&&y?'T':'f')<<"    ";
    cout<<(x||y?'T':'f')<<"   ";
    cout<<(x^y?'T':'f')<<"    ";
    cout<<(x^y^y?'T':'f')<<"     ";
    cout<<(x^y^x?'T':'f')<<"      ";
    cout<<(!(x&&y)?'T':'f')<<"      ";
    cout<<(!x||!y?'T':'f')<<"       ";
    cout<<(!(x||y)?'T':'f')<<"       ";
    cout<<(!x&&!y?'T':'f')<<"    ";
    cout<<endl;
    
    //Second Row
    x=true;
    y=false;  
    cout<<(x?'T':'f')<<" ";
    cout<<(y?'T':'f')<<"  ";
    cout<<(!x?'T':'f')<<"  ";
    cout<<(!y?'T':'f')<<"   ";
    cout<<(x&&y?'T':'f')<<"    ";
    cout<<(x||y?'T':'f')<<"   ";
    cout<<(x^y?'T':'f')<<"    ";
    cout<<(x^y^y?'T':'f')<<"     ";
    cout<<(x^y^x?'T':'f')<<"      ";
    cout<<(!(x&&y)?'T':'f')<<"      ";
    cout<<(!x||!y?'T':'f')<<"       ";
    cout<<(!(x||y)?'T':'f')<<"       ";
    cout<<(!x&&!y?'T':'f')<<"    ";
    cout<<endl;
    
    //Output data
    
    //Exit stage right;
    return 0;
}

