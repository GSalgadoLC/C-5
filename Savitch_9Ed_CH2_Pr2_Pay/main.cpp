
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 3:45 PM
 * Purpose: Gaddis 9th edition chapter 3 problem 7 Cookies
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
    float prevSal,raise,retroPy;        //Vars for inputs and raise
    float newSal,mnthSal;               //vars to hold values for new salary
    //Initialize variables
    raise = 0.076;
    //Map/Process the Inputs -> Outputs
    cout<<"Input previous annual salary."<<endl; //Prompt for input
    cin>>prevSal;           //stores prev sal
    retroPy = (prevSal/2)*raise;
    newSal = prevSal*(1+raise);     //calclations for new pay
    mnthSal = newSal/12;
    //Display Inputs/Outputs
    cout<<"Retroactive pay    = $"<<fixed<<setprecision(2)<<setw(7)<<retroPy<<endl;
    cout<<"New annual salary  = $"<<setw(4)<<newSal<<endl; //Display outputs
    cout<<"New monthly salary = $ "<<setw(6)<<mnthSal;
    //Clean up memory and files
    //Exit the program
    return 0;
}
