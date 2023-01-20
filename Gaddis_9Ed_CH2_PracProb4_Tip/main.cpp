
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 11, 2023, 4:15 PM
 * Purpose: Gaddis CH2 problem 4
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
    float mcost,tiprcnt,tip,taxpcnt,tax,total;
    //Initialize variables
    mcost = 88.67;
    tiprcnt = 0.2;
    taxpcnt = 0.0675;
    //Map/Process the Inputs -> Outputs
    tax = mcost*taxpcnt;
    tip = (mcost+tax)*tiprcnt;
    total = mcost+tip+tax;
    //Display Inputs/Outputs
    cout<<"*****Dennys Receipt*************"<<endl;
    cout<<"\n Meal charge           $"<<mcost<<endl;
    cout<<" Tax charge            $"<<tax<<endl;
    cout<<" 20% tip               $"<<tip<<endl;
    cout<<"\n Your total is         $"<<total<<endl;
    cout<<"\n Thanks for Dining with us"<<endl;
    cout<<"********************************"<<endl;
 
    //Clean up memory and files
    //Exit the program
    return 0;
}

