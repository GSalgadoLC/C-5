
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 11, 2023, 12:44 PM
 * Purpose: Savitch CH1 problem 1
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
    int num1, num2, sum, prdct;
    //Initialize variables
    cout<<"Enter the first number, then press enter ";
    cin>>num1;
    cout<<"Enter the second number, then press enter ";
    cin>>num2;
    //Map/Process the Inputs -> Outputs
    sum = num1+num2;
    prdct = num1*num2;
    //Display Inputs/Outputs
    cout<< "The sum of "<<num1<<" + "<<num2<<" is "<<sum<<endl;
    cout<< "The product of "<<num1<<" * "<<num2<<" is "<<prdct;
    //Clean up memory and files
    //Exit the program
    return 0;
}

