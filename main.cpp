
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 11, 2023, 4:06 PM
 * Purpose: Gaddis CH2 problem 2
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
    float ecdivpt,ecdiv,rednum;
    int ctotrev;
    //Initialize variables
    ctotrev = 8.6e6;
    ecdivpt = 0.58;
    
    //Map/Process the Inputs -> Outputs
    ecdiv = ecdivpt * ctotrev;
    rednum = ecdiv / 1000000;
    //Display Inputs/Outputs
    cout<<"The expected revenue from the East Coast division is "<<rednum<<" Million"<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

