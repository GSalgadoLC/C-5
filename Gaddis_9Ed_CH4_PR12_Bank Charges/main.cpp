/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 1, 2023, 5:12 PM
 * Purpose: Gaddis 9th edition chapter 4 problem 12 Bank Charges
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes


int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    int numChk;
    float initBal,mnthFee,chkFee,lowBal,newBal;
    //Initialize variables
    mnthFee  = 10;
    cout<<"Monthly Bank Fees"<<endl;    //Program display welcome
    cout<<"Input Current Bank Balance and Number of Checks"<<endl; //Prompts user
    cin>>initBal>>numChk;
    //Map/Process the Inputs -> Outputs
   
    if (numChk<20){                 //Evaluates number of checks
        chkFee = 0.10 * numChk;
    }
    else if (numChk<40){
        chkFee = 0.08 * numChk;
    }
    else if (numChk<60){
        chkFee = 0.06 * numChk;     //If falls in certain range a different check 
    }                                   //Multiplier is assigned 
    else if (numChk>=60){
        chkFee = 0.04 * numChk;
    }
    
    if (initBal < 400){         //Determines if a low balance fee shall be charged
        lowBal = 15;
    }
    else lowBal = 0;
    
    newBal  = initBal - mnthFee - chkFee - lowBal ; //Determines the new balance of account
    
    
    //Display Inputs/Outputs
    cout<<"Balance     $"<<setw(9)<<showpoint<<setprecision(5)<<initBal<<endl;
    cout<<"Check Fee   $"<<setw(9)<<setprecision(3)<<chkFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<setprecision(4)<<mnthFee<<endl;         //Displays value output
    if (initBal<400){
    cout<<"Low Balance $"<<setw(9)<<setprecision(4)<<lowBal<<endl;
    cout<<"New Balance $"<<setw(9)<<setprecision(4)<<newBal;
    }
    else{
        cout<<"Low Balance $"<<setw(9)<<setprecision(3)<<lowBal<<endl;
    cout<<"New Balance $"<<setw(9)<<setprecision(5)<<newBal;
    }
    //Clean up memory and files
    //Exit the program
    return 0;
}