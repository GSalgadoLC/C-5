
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 11, 2023, 3:00 PM
 * Purpose: Savitch chapter 1 practice problem 2
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
    string star, coolstf,sp5,sp3,sp,sp4;
    char lc,ls,xm,lo;
    //Initialize variables
    star = "**********************************************";
    coolstf = "      Computer Science is cool stuff!!!!";
    sp5 = "        ";
    sp4 = "      ";
    sp3 = "    ";
    sp = " ";
    lc = 'C';
    ls = 'S';
    xm = '!';
    lo = '0';
    //Map/Process the Inputs -> Outputs
    //Display Inputs/Outputs
    cout<<star<<endl;
    cout<<endl<<sp5<<lc<<sp<<lc<<sp<<lc<<sp5<<ls<<sp<<ls<<sp<<ls<<sp<<ls<<sp3<<sp<<xm<<xm<<sp3<<endl;
    cout<<sp4<<lc<<sp4<<lc<<sp4<<ls<<sp5<<ls<<sp<<sp<<sp<<xm<<xm<<endl;
    cout<<sp3<<lc<<sp<<sp<<sp<<sp3<<sp4<<ls<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp3<<sp<<xm<<xm<<endl;
    cout<<sp<<sp<<sp<<lc<<sp5<<sp<<sp4<<ls<<sp5<<sp3<<sp<<xm<<xm<<endl;
    cout<<sp<<sp<<sp<<lc<<sp5<<sp<<sp5<<ls<<sp<<ls<<sp<<ls<<sp<<ls<<sp3<<sp<<xm<<xm<<endl;
    cout<<sp<<sp<<sp<<lc<<sp<<sp<<sp3<<sp4<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<ls<<sp<<sp<<sp<<sp<<xm<<xm<<endl;
    cout<<sp3<<lc<<sp<<sp<<sp<<sp3<<sp4<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp<<sp3<<ls<<sp<<sp<<xm<<xm<<endl;
    cout<<sp4<<lc<<sp4<<lc<<sp4<<ls<<sp5<<ls<<sp3<<endl;
    cout<<sp5<<lc<<sp<<lc<<sp<<lc<<sp5<<ls<<sp<<ls<<sp<<ls<<sp<<ls<<sp3<<sp<<lo<<lo<<endl;
    cout<<endl<<star<<endl;
    cout<<coolstf;
    //Clean up memory and files
    //Exit the program
    return 0;
}

