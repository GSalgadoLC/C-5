
/* 
 * File:   main.cpp
 * Author: gusta
 *
 * Created on January 9, 2023, 02:08PM
 * Purpose: 
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
    char lt; //Letter to create the banner character
    
    //Initialize variables
    cout <<"Type a letter to create the banner C"<<endl;
    cout<<"Use characters a-z, or A-Z!" << endl;
    cin>>lt;
    
    //Map/Process the Inputs -> Outputs
    //Display Inputs/Outputs
    cout<<"Our big C using "<<lt<<endl;
    cout<<" "<<" "<<lt<<lt<<lt<<endl;
    cout<<" "<<lt<<" "<<" "<<lt<<endl;
    cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<" "<<lt<<" "<<" "<<lt<<endl;
    cout<<" "<<" "<<lt<<lt<<lt<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

