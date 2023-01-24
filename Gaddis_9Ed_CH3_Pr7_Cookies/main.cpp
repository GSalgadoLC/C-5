
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
    short cookate, calpcok,totcal; //Vars for cookies ate, 
                              //calories per cookie and total calories consumed
    //Initialize variables
    calpcok = 75;  //Constant cal per cookie
    //Map/Process the Inputs -> Outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl; //prompts user for how many ate
    cin>>cookate;
    totcal = cookate*calpcok; //Calculates total calories
    //Display Inputs/Outputs
    
    cout<<"You consumed "<<totcal<<" calories."; // display tot cal consumed
    //Clean up memory and files
    //Exit the program
    return 0;
}

