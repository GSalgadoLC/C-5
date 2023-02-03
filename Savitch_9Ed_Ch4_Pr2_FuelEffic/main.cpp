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
    float liter,mpg1,mpg2;              //Vars for conversion and calculation
    char again;                   //Var to store input character
    //Initialize variables
    liter = 0.264179;            //Liter conversion value
    again = 'y';                 //Initial char value set to yes
    
    do {  
    
    cout<<"Car 1"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;           //Prompt user
    cin>>gasLit;                                             //Store input value
    cout<<"Enter number of miles traveled:"<<endl;               //Prompt user
    cin>>milesTr;                                            //Store input value
    mpg1 =  ((milesTr/gasLit)/liter);                          //Mpg calculation
    cout<<"miles per gallon: "<<fixed<<showpoint<<setprecision(2)<<mpg1<<"\n"<<endl;    //Display mpg result
    
    
    cout<<"Car 2"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;           //Prompt user
    cin>>gasLit;                                             //Store input value
    cout<<"Enter number of miles traveled:"<<endl;               //Prompt user
    cin>>milesTr;                                            //Store input value
    mpg2 =  ((milesTr/gasLit)/liter);                          //Mpg calculation
    cout<<"miles per gallon: "<<fixed<<showpoint<<setprecision(2)<<mpg2<<"\n"<<endl;    //Display mpg result
    
    if ( mpg1 > mpg2){
        cout<<"Car 1 is more fuel efficient\n"<<endl;
    }
    else{
        cout<<"Car 2 is more fuel efficient\n"<<endl;
    }
    
    cout<<"Again:"<<endl;                                     //Display a prompt
    cin>>again;                                              //Store input value
    if (again=='y') {                      //Determine if program will run again
            cout<<"\n";                            //If looping print a new line
        }
    
    }
    
    while (again == 'y');                           //Determine if looping again
    
        
    //Clean up memory and files
    //Exit the program
    return 0;
}
