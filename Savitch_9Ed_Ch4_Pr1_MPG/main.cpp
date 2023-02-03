/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 22, 2023, 12:58 PM
 * Purpose: Savitch 9Ed Ch 4 Pr 1 MPG
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip>  //Formatting library
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    float gasLit, milesTr;        //Vars for input value
    float liter,mpg;              //Vars for conversion and calculation
    char again;                   //Var to store input character
    //Initialize variables
    liter = 0.264179;            //Liter conversion value
    again = 'y';                 //Initial char value set to yes
    
    do {                                                                    
    
        cout<<"Enter number of liters of gasoline:\n"<<endl;    //Prompt user
        cin>>gasLit;                                            //Store input value
        cout<<"Enter number of miles traveled:\n"<<endl;        //Prompt user
        cin>>milesTr;                                           //Store input value
        //Map/Process the Inputs -> Outputs 
        mpg =  ((milesTr/gasLit)/liter);                    //Mpg calculation
        //Display Inputs/Outputs
        cout<<"miles per gallon:"<<endl;                    //Display a prompt
        cout<<fixed<<showpoint<<setprecision(2)<<mpg<<endl; //Display mpg result
        cout<<"Again:"<<endl;                               //Display a prompt
        cin>>again;                                         //Store input value
        if (again=='y') {                  //Determine if program will run again
            cout<<"\n";                            //If looping print a new line
        }
    }
    while (again == 'y');                  //Determine if looping again
    //Clean up memory and files
    //Exit the program
    return 0;
}


