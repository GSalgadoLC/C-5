
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 1, 2023, 10:38 PM
 * Purpose: Gaddis 9th edition chapter 4 problem 23 ISP
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
    char package;       //Single letter character to reference package
    int hours,maxHour;  //Holds user hours used and max hours of plan
    float tbill,prMonth,addHour,billabl;    //vars for total bill and constant of plan fee
    //Initialize variables
    cout<<"ISP Bill"<<endl; //Prompts a message
    cout<<"Input Package and Hours"<<endl;  //Prompts user for input
    cin>>package>>hours;                    //Stores user input values
    //Map/Process the Inputs -> Outputs
    switch (package){
        case 'A': 
            prMonth =9.95; 
            maxHour = 10;
            addHour = 2.00;
                    break;
        case 'B': 
            prMonth = 14.95;
            maxHour = 20;             //Determines which package is applicable
            addHour = 1.00;             //Sets the constants of variables 
                    break;
        case 'C': 
            prMonth = 19.95; 
            maxHour = hours;    //Sets max hours to user hours, since its unlim
            addHour = 0.00;     
                    break;           
    }
    
    if (maxHour > hours){               //Determines if user is under or over their plan hours
        billabl  = 0;                   //If under there are 0 billable additional hours
    }                                         
    else billabl = (hours-maxHour)*addHour; //If over calculates additional hours and charges based on plan constant
    
    tbill = prMonth + billabl;      //Calculates total bill 
    
    //Display Inputs/Outputs
    cout<<"Bill = $ "<<tbill;       //Displays bill total
    //Clean up memory and files
    //Exit the program
    return 0;
}