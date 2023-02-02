
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 2023, 04:59 AM
 * Purpose: Gaddis 9th edition chapter 5 Problem 1 Summation
 */

//System Libraries
#include <iostream> //I/O library

using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    double numIn, total;       //Var storing input value and sum total
    //Map/Process the Inputs -> Outputs 
    cin>>numIn;             //Stores input value
    while ( numIn != 0){    //While input value is not equal to zero
        total += numIn;     //Perform summation
        numIn -= 1;         //Subtract input value to reach zero
    }
    //Display Inputs/Outputs
    cout<<"Sum = "<<total;      //Display total
    //Clean up memory and files
    //Exit the program
    return 0;
}

