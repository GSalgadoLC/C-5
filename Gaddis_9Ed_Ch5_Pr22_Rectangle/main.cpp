/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 2023, 07:49 AM
 * Purpose: Gaddis 9th edition chapter 5 Problem 22 Rectangle
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
    int numIn;          //Var to store input number value for rectangle size
    char charIn;        //Var to store input char value for rectangle pattern
    //Initialize variables
    cin>>numIn>>charIn; //Inputs value to variables
    //Map/Process the Inputs -> Outputs 
    for ( int i = 1; i <= numIn; i++){  //Loop counter until equals numIn var
        
         
         for ( int i = 1; i <= numIn; i++){ //couts character a multiple of numIn times 
         cout<<charIn; 
      
        }
        if ((i+1)<=numIn){      //If statement is for code E formatting 
         cout<<"\n";            //This breaks up the chars into lines
        }
    }
    //Display Inputs/Outputs
  
    //Clean up memory and files
    //Exit the program
    return 0;
}
