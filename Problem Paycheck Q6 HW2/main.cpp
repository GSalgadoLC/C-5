/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 5:30 PM
 * Purpose: Paycheck problem
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip> //Format library
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    int wage,hrswrkd,dobl,grospay;   //variables to hold input values, double wage and sum paycheck value
    //Initialize variables
    dobl = 2;
    //Map/Process the Inputs -> Outputs
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;  //Prompts user for input values and stores in var
    cin>>wage;
    cin>>hrswrkd;
    
    if (hrswrkd <= 40)                                                  //determines if did overtime
        grospay = wage * hrswrkd;                                       //If no overtime, regular pay is calculated
    else 
        grospay = (40 * wage) + ( hrswrkd - 40)*(wage*dobl);           //Defaults to calculate overtime by calculating regular pay and then adding overtime pay
                
    
    //Display Inputs/Outputs                                          //Displays output
    if (grospay<= 999)
        cout<<"Paycheck = $ "<<fixed<<setprecision(2)<<static_cast <float> (grospay);
    else                                                                                      //Formatting for over $999 created an if else case for $1000+
        cout<<"Paycheck = $"<<fixed<<setprecision(2)<<setw(7)<<static_cast <float> (grospay);
    //Clean up memory and files
    //Exit the program
    return 0;
}