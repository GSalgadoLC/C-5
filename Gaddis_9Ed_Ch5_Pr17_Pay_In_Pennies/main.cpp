
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 2023, 04:59 AM
 * Purpose: Gaddis 9th edition chapter 5 Problem 7 Pay In Pennies
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    int numDays,total,dayPay;;  //Var storing input value //Var storing daily pay and total 
    //Initializing variables
    total = 0;dayPay = 1;    //initial total 0, first day pay 0.01
    //Map/Process the Inputs -> Outputs 
    cin>>numDays;             //Stores input value
    for (int i = 1; i<=numDays;i++){    //until we reach number days worked
        total = total + dayPay;         // total owed 
        dayPay = dayPay * 2;            //Multiplies daily pay after t
    }
    //Display Inputs/Outputs
    cout<<"Pay = $"<<setprecision(2)<<fixed<<showpoint<<total*0.01;      //Display total
    //Clean up memory and files
    //Exit the program
    return 0;
}

