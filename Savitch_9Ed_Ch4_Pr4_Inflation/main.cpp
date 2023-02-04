/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 22, 2023, 01:54 PM
 * Purpose: Savitch 9Ed Ch 4 Pr 4 Inflation
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip>  //Formatting library
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    float prcNow, prcYr,infla;        //Vars for input value
    char again;
    
    again = 'y';
    
    do {                                                                    
    
        cout<<"Enter current price:"<<endl;                        //Prompt user
        cin>>prcNow;                                         //Store input value
        cout<<"Enter year-ago price:"<<endl;                       //Prompt user
        cin>>prcYr;                                          //Store input value
     
        infla = ((prcNow/prcYr)-1)*100;                  //Inflation calculation
     
        
        if (infla > 9.99){
            cout<<"Inflation rate: "<<setw(3)<<setprecision(4)<<infla<<"%\n"<<endl;         //Display a prompt
        }
        else{
            cout<<"Inflation rate: "<<setw(3)<<setprecision(3)<<infla<<"%\n"<<endl;         //Display a prompt
        }
        cout<<"Again:"<<endl;                                 //Display a prompt
        cin>>again;                                          //Store input value
        if (again=='y') {                  //Determine if program will run again
            cout<<"\n";                            //If looping print a new line
        }
    }
    while (again == 'y');                           //Determine if looping again
    //Clean up memory and files
    //Exit the program
    return 0;
}

