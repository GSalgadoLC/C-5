
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 11, 2023, 3;%1 PM
 * Purpose: Savitch CH1 problem 3
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
    float nick,dime,qrtr,sum;
    int tempnum;
    //Initialize variables
    nick = 0.05, dime=0.1,qrtr = 0.25;
    //Map/Process the Inputs -> Outputs
    cout<<"Please enter the number of nickels, then press enter ";
    cin>>tempnum;
    nick=nick*tempnum;
    cout<<"Please enter the number of dimes, then press enter ";
    cin>>tempnum;
    dime=dime*tempnum;
    cout<<"Please enter the number of quarters, then press enter ";
    cin>>tempnum;
    qrtr=qrtr*tempnum;
    
    sum = nick+dime+qrtr;
    //Display Inputs/Outputs
    cout<<"\n \nYou have $"<<sum;
    //Clean up memory and files
    //Exit the program
    return 0;
}

