/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 22, 2023, 01:54 PM
 * Purpose: Savitch 9Ed Ch 4 Pr 5 Est Cost
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
    float first,second,third;
    float pam2,pam3;
    
    cout<<"Enter first number:\n"<<endl;
    cout<<"Enter Second number:\n"<<endl;
    cout<<"Enter third number:\n"<<endl;
    cin>>first>>second>>third;
    
    
    if (first>second){
        pam2 = first;
    }
    else{
        pam2 = second;
    }
    
    if(first>second && first >third){
        pam3 = first;
    }
    else if(second>first && second>third){
        pam3 = second;
    }
    else{
        pam3 =third;
    }
    
    
    
    
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<pam2<<endl;
    cout<<"\nLargest number from three parameter function:"<<endl;
    cout<<pam3<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}
