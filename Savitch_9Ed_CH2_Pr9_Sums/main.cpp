
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 3:45 PM
 * Purpose: Gaddis 9th edition chapter 3 problem 7 Cookies
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

//First attempt but decided it was going to be messy so decided to use an array, for loop and if, else


int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    int x[10]; //Creates an array of size 10 that stores integers
    int summ, pos, neg; //vars for summation
    //Initialize variables
    summ = 0; pos = 0; neg = 0; //Initializes the summation vars to zeros
    //Map/Process the Inputs -> Outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;  //Prompts user for numbers
    for (int i = 0; i<10; i++){ //A for loop that iterates 10 times
        cin>>x[i];              //Stores input of user per iteration into array, using i as the array count
        
        summ += x[i];   // adds all numbers regardless of neg, or pos
                
        if (x[i] > 0){      //Checks if number is greater than zero, iterates through array
            pos += x[i];    //stores into var pos, adds number per iteration
            
        }
        else{              //This is the default case 
            neg += x[i];   //Stores input of array into var neg for summation, per iteration
        }
       
    }
    
    //Display Inputs/Outputs
    cout<<"Negative sum ="<<setw(4)<<neg<<endl; ///Displays negative summation
    cout<<"Positive sum ="<<setw(4)<<pos<<endl;    //Displays positive summation
    cout<<"Total sum    ="<<setw(4)<<summ;     //Displays sum
    //Clean up memory and files
    //Exit the program
    return 0;
}