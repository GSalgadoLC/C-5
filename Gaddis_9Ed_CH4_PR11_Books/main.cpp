
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 1, 2023, 4:20 PM
 * Purpose: Gaddis 9th edition chapter 4 problem 11 Books
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
    int bkpur, pts;
    //Initialize variables
    cout<<"Book Worm Points"<<endl; //Prints intro display
    cout<<"Input the number of books purchased this month."<<endl; //Prompts user to enter input value of books purchased
    cin>>bkpur;                     //Variable to hold input value
    //Map/Process the Inputs -> Outputs
    switch (bkpur){
        case 0:
            pts = 0 ; break;
        case 1:                       //Switch expression per case in which user inputs nmber of books purchased
            pts = 5 ; break;
        case 2:
            pts = 15 ; break;
        case 3:
            pts = 30 ; break;
        default:                    //Default is 60 for books purchased greater than or equal to 4
            pts = 60 ; break;
    }
    
    //Display Inputs/Outputs
    cout<<"Books purchased =  "<<bkpur<<endl;   //display books purchased and number of points earned
    cout<<"Points earned   = "<<pts;
    //Clean up memory and files
    //Exit the program
    return 0;
}