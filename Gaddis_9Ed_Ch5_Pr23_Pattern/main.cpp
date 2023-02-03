
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 2023, 12:22 PM
 * Purpose: Gaddis 9th edition chapter 5 Problem 23 Pattern
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
    int numIn;                           //Var to determine size of pattern
    char charOut;                       //Var to hold character for pattern
    //Initialize variables
    charOut = '+';                      //Stores pattern character 
    cin>>numIn;                         //Stores input value
    //Map/Process the Inputs -> Outputs 
   
    for ( int i = 1; i <= numIn; i++){      //Loop that runs 1 to numIn times
      for ( int t = 1; t <= i; t++){    //Loop runs 1 to numIn times, adds by 1
        cout<<charOut;                      //prints plus sign as iterates
        }
    cout<<"\n";cout<<"\n";                  //For new line
    }
     for ( int i = 1; i <= numIn; i++){     //Loop that runs 1 to numIn times
        for ( int t = numIn; t >= i; t--){  //Loop runs numIn to 1, subtracting by 1
            cout<<charOut;                  //Prints out plus sign
        
        }
        if (i<numIn){
            cout<<"\n";cout<<"\n";      //Prints new line if last iteration does not print
        }
    }
    //Display Inputs/Outputs
    //Clean up memory and files
    //Exit the program
    return 0;
}

