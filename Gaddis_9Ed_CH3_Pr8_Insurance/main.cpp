
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 4:00 PM
 * Purpose: Gaddis 9th edition chapter 3 problem 8 Insurance
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
    float hsewrth, insneed,prct; // var for house worth, insurance needed and
                                    // percent recommended
    //Initialize variables
    prct = 0.8; //Var for prcnt of bulding
    //Map/Process the Inputs -> Outputs
    cout<<"Insurance Calculator"<<endl; 
    cout<<"How much is your house worth?"<<endl; //Ask value of house
    cin>>hsewrth;                       //Stores input value of house
    insneed = hsewrth * prct;
    //Display Inputs/Outputs
    cout<<"You need $"<<insneed<<" of insurance."; //Displays value of insurance 
                                                        //needed
    //Clean up memory and files
    //Exit the program
    return 0;
}

