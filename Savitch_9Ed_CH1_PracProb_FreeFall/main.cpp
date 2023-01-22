
/* 
 * File:   main.cpp
 * Author: gusta
 *
 * Created on January 9, 2023, 5:44Pm
 *  * Purpose: FreeFall Calculation problem
 */

//System Libraries
#include <iostream> //I/O library
#include <cstdlib> //Random number
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions
float G=3.2174e1f; //Gravity 32.174ft/s^2
//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare the variable
    float drp, //drop distance
            tim; //time of drop in s
    //Initialize variables
    tim=rand()%10+1;//Time from 1 to 10s
    //Map/Process the Inputs -> Outputs
    drp=1.0f/2*G*tim*tim;
    //Display Inputs/Outputs
    cout<<"This program calculates the drop will be "<<drp<<
            " feet and the time of drop to be "<<tim<<"s"<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

