
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 4:20 PM
 * Purpose: Gaddis 9th edition chapter 3 problem 10 Temp
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    float degFah, degCen; //Vars for input deg and output deg 
    //Initialize variables
    //Map/Process the Inputs -> Outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl; //Asks for deg input, stores in var
    cin>>degFah;
    degCen = (5.0/9.0)*(degFah-32); //Conversion from deg Fahrenheit to centigrd
    //Display Inputs/Outputs
    cout<<showpoint<<setprecision(4)<<degFah<<" Degrees Fahrenheit = "<<degCen<<" Degrees Centigrade";
                                                        //Displays in centigrage
    //Clean up memory and files
    //Exit the program
    return 0;
}

