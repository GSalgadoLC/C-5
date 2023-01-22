
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 11, 2023, 4:43 PM
 * Purpose: Gaddis CH2 problem 16 Diamond
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
    char lt;
    string sp,sp2,sp3;
    //Initialize variables
    sp = " ";
    sp2 = "  ";
    sp3 = "   ";
    lt = '+';
    
    //Map/Process the Inputs -> Outputs
    //Display Inputs/Outputs
    cout<<sp3<<lt<<endl;
    cout<<sp2<<lt<<lt<<lt<<endl;
    cout<<sp<<lt<<lt<<lt<<lt<<lt<<endl;
    cout<<lt<<lt<<lt<<lt<<lt<<lt<<lt<<endl;
    cout<<sp<<lt<<lt<<lt<<lt<<lt<<endl;  
    cout<<sp2<<lt<<lt<<lt<<endl;
    cout<<sp3<<lt<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

