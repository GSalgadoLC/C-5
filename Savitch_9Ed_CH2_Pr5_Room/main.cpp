
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 3:45 PM
 * Purpose: Gaddis 9th edition chapter 3 problem 7 Cookies
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
    short maxp, nump, diff; //shorts vars for small nums
    //Initialize variables
    //Map/Process the Inputs -> Outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl; //prompts user for var values of number of people and room capacity
    cin>>maxp;              //stores user inputs
    cin>>nump;              //stores user inputs
   
    //Display Inputs/Outputs 
    if (nump > maxp){           //if and else statement to check number of people and room capacity
        diff = nump-maxp;       //too many people
        cout<<"Meeting cannot be held."<<endl;  //displays user what to do for too many people
        cout<<"Reduce number of people by "<<diff<<" to avoid fire violation.";
    }
    else {
        diff = maxp - nump;
        cout<<"Meeting can be held."<<endl; //Tells the user that he can add people
        cout<<"Increase number of people by "<<diff<<" will be allowed without violation.";
    }
    //Clean up memory and files
    //Exit the program
    return 0;
}

