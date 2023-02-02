/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 17, 2023, 01:02AM
 * Purpose: Savitch 9th edition problem 3 Roman numeral conversion
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
    int n1,n10,n100,n1000;              //Vars to calculate in deci 
    string nn1,nn10,nn100,nn1000;       //Vars used to hold roman conversion value
    int integer;                        //Var to store user input value
    string roman;                       //Var to display full roman conversion
    //Initialize variables
    cout<<"Arabic to Roman numeral conversion."<<endl; //Program display prompt
    cout<<"Input the integer to convert."<<endl;  //Prompts user for input
    cin>>integer;              //Stores user input
    //Map/Process the Inputs -> Outputs 
    n1 = integer%10;
    n10 = (integer/10)%10;          //Calculates in deci
    n100 = (integer/100)%10;
    n1000 = (integer/1000)%10;
    
    switch(n1000){
        case 1 : nn1000 = "M"; break;
        case 2 : nn1000 = "MM"; break;  //Converts 1000s to roman
        case 3 : nn1000 = "MMM"; break;
    }
    
    switch(n100){
        case 1 : nn100 = "C"; break;
        case 2 : nn100 = "CC"; break;
        case 3 : nn100 = "CCC"; break;
        case 4 : nn100 = "CD"; break;
        case 5 : nn100 = "D"; break;        //Converts 100s to roman
        case 6 : nn100 = "DC"; break;
        case 7 : nn100 = "DCC"; break;
        case 8 : nn100 = "DCCC"; break;
        case 9 : nn100 = "CM"; break;
    }
    switch(n10){
        case 1 : nn10 = "X"; break;
        case 2 : nn10 = "XX"; break;
        case 3 : nn10 = "XXX"; break;
        case 4 : nn10 = "XL"; break;
        case 5 : nn10 = "L"; break;     //Converts 10s to roman
        case 6 : nn10 = "LX"; break;
        case 7 : nn10 = "LXX"; break;
        case 8 : nn10 = "LXXX"; break;
        case 9 : nn10 = "XC"; break;
    }
    switch(n1){
        case 1 : nn1 = "I"; break;
        case 2 : nn1 = "II"; break;
        case 3 : nn1 = "III"; break;
        case 4 : nn1 = "IV"; break;
        case 5 : nn1 = "V"; break;      //Converts 1s to roman
        case 6 : nn1 = "VI"; break;
        case 7 : nn1 = "VII"; break;
        case 8 : nn1 = "VIII"; break;
        case 9 : nn1 = "IX"; break;
    }
   
    roman = nn1000+nn100+nn10+nn1;  //Adds strings and stores in var roman

    //Display Inputs/Outputs
    if (integer >= 1000 && integer <= 3000){
     cout<<integer<<" is equal to "<<roman; //If input value is acceptable displays roman conversion
    }
    else cout<<integer<<" is Out of Range!";    //Not accepted value
    //Clean up memory and files
    //Exit the program
    return 0;
}
