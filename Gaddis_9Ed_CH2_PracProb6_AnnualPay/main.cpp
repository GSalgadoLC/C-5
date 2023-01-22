
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 11, 2023, 4:30 PM
 * Purpose: Gaddis CH2 problem 6 Annual Pay
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
    int pyAmnt, pyPerds, annPay;
    //Initialize variables
    pyAmnt = 2200;
    pyPerds = 26;
    //Map/Process the Inputs -> Outputs
    annPay = pyAmnt*pyPerds;
    //Display Inputs/Outputs
    cout<<"The total annual pay is $"<<annPay<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

