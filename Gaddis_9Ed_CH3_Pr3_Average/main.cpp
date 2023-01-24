
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 3:45 PM
 * Purpose: Gaddis 9th edition chapter 3 problem 3 average
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

/*
int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    float tc1,tc2,tc3,tc4,tc5,avg; //Vars for each test score and avf
    //Initialize variables
    cout<<"Enter the test score"<<endl;    //Request for test score and store in
    cin>>tc1;                               //var. Repeated 5x
    cout<<"\n \t You entered:\t"<<tc1<<endl;
    cout<<"\n\nEnter the second test score"<<endl;
    cin>>tc2;
    cout<<"\n \t You entered:\t"<<tc2<<endl;
    cout<<"\n\nEnter the third test score"<<endl;
      cin>>tc3;
    cout<<"\n \t You entered:\t"<<tc3<<endl;
    cout<<"\n\nEnter the fourth test score"<<endl;
      cin>>tc4;
    cout<<"\n \t You entered:\t"<<tc4<<endl;
    cout<<"\n\nEnter the third test score"<<endl;
      cin>>tc5;
    cout<<"\n \t You entered:\t"<<tc5<<endl;
    //Map/Process the Inputs -> Outputs
    avg = (tc1+tc2+tc3+tc4+tc5) / 5;          //Takes avg of test scores
    //Display Inputs/Outputs
    cout<<avg;cout<<setprecision(1)<<avg<<endl;
   //Display avg with formatting
    //Clean up memory and files
    //Exit the program
    return 0;
}
*/

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    float tc1,tc2,tc3,tc4,tc5,avg; //Vars for each test score and avg
    //Initialize variables
    cout<<"Input 5 numbers to average."<<endl;//Request for test score and store in
    cin>>tc1;                               //var. Repeated 5x
   
    cin>>tc2;
   
    cin>>tc3;

    cin>>tc4;
  
    cin>>tc5;

    //Map/Process the Inputs -> Outputs
    avg = (tc1+tc2+tc3+tc4+tc5) / 5;          //Takes avg of test scores
    //Display Inputs/Outputs
    cout<<"The average = "<<showpoint<<setprecision(2)<<avg;
   //Display avg with formatting
    //Clean up memory and files
    //Exit the program
    return 0;
}
