
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 2023, 04:59 AM
 * Purpose: Gaddis 9th edition chapter 5 Problem 13 MinMax
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
    int numSmal,numLrg,numIn;     //Stores input number and smallest and largest
    //Initialize variable
    cin>>numIn;                  //Initial request for input value number
    numSmal = numLrg = numIn;    //Sets smallest and largest to initial input value
    //Map/Process the Inputs -> Outputs 
    
    while (numIn != -99){       //If initial number is -99 does not loop
        if (numIn <numSmal){
            numSmal = numIn;    //Checks if number is smaller than var smallest
        }
        if (numIn > numLrg){
            numLrg = numIn;      //Checks if number is larger than var largest
        }
        cin>>numIn;             //Ask for input value again
    }
    //Display Inputs/Outputs
    cout<<"Smallest number in the series is "<<numSmal<<endl;      //Display var
    cout<<"Largest  number in the series is "<<numLrg;              //Display var
    //Clean up memory and files
    //Exit the program
    return 0;
}

