/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11th, 2018, 1:15 PM
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Menu with input of choice
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Problem 1 -> Gaddis_9thEd_chap4_prob11_MathTutor"<<endl;
    cout<<"Problem 2 -> Savitch_9thEd_chap3_prob6_Fibowacci"<<endl;
    cout<<"Problem 3 -> Savitch_9thEd_chap3_prob7_etox"<<endl;
    cout<<"Problem 4 -> Savitch_9thEd_chap3_prob1_Phonecall_v2"<<endl;
    cout<<"Problem 5 -> Author_Edition_Chapter_Problem_Description 5"<<endl;
    cout<<"Problem 6 -> Author_Edition_Chapter_Problem_Description 6"<<endl;
    cout<<"Problem 7 -> Author_Edition_Chapter_Problem_Description 7"<<endl;
    cout<<"Problem 8 -> Author_Edition_Chapter_Problem_Description 8"<<endl;
    cout<<"Problem 9 -> Author_Edition_Chapter_Problem_Description 9"<<endl;
    cout<<"Type 1 to 9 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
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
                 cout<<"+ "<<setw(3)<<op2<<endl;
                 cout<<"-----"<<endl<<(result>1000?" ":"  ");
                 cin>>answer;
                 cout<<(result==answer?"Correct":"Incorrect")<<endl;
                 break;
        }    
        case 2: {
            //Declare Variables
            unsigned int fi, fim1, fim2;
            //Initialize Variables
            fim1=1;
            fim2=1;
            cout<<fim2<<","<<fim1;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

                //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

                //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Comparison of the ratio of Fibonacci to the Golden Ratio
            cout<<endl<<endl<<"Ratio = "<<1.0f*fim1/fim2<<endl;
    break;
        }
        case 3: {
                        //Declare Variables
                        float aproxE, term, x;
                        int counter;

                        //Initialize Variables
                        aproxE=1.0f;
                        counter=1;
                        x=1.0f;
                        term=x/counter++;

                        //Process/Map inputs to outputs
                        aproxE+=term;
                        cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                        term*=x/counter++;

                            //Process/Map inputs to outputs
                        aproxE+=term;
                        cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                        term*=x/counter++;

                            //Process/Map inputs to outputs
                        aproxE+=term;
                        cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                        term*=x/counter++;

                            //Process/Map inputs to outputs
                        aproxE+=term;
                        cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                        term*=x/counter++;

                            //Process/Map inputs to outputs
                        aproxE+=term;
                        cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                        term*=x/counter++;

                            //Process/Map inputs to outputs
                        aproxE+=term;
                        cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                        term*=x/counter++;



            //Output data
            cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;break;
                }
                case 4: {
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
                            <<" minutes cost = $"<<cost/100.0f<<endl;break;
                }
                case 5: {
                        //Declare Variables
            float aproxE, term, x;
            int counter;

            //Initialize Variables
            aproxE=1.0f;
            counter=1;
            x=1.0f;
            term=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;



            //Output data
            cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;break;
        }
        case 6: {
            //Declare Variables
            short purch,pts;

            //Initialize Variables
            cout<<"This program tell would how many points are rewarded"<<endl;
            cout<<"Pleas input how many books you have purchased"<<endl;
            cin>>purch;

            //Process/Map inputs to outputs
            if(purch==1){
                pts=5;
            }else if(purch=2){
                pts=15;
            }else if(purch=3){
                pts=30;
            }else if(purch>=4){
                pts=60;            

            }else{
                pts=0;
            }

            //Output data
            cout<<"you get "<<pts<<endl;
            break;
        }
        case 7: {
            cout<<"Put problem 7 here "<<endl;break;
        }
        case 8: {
            cout<<"Put problem 8 here "<<endl;break;
        }
        case 9: {
            cout<<"Put problem 9 here "<<endl;break;
        }
        default:cout<<"You choose to exit"<<endl;
    }
   
    //Exit
    return 0;
}

