
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 1, 2023, 4:01 PM
 * Purpose: Gaddis 9th edition chapter 4 problem 8 sorting names
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
    string name1,name2,name3,first,second,third; //Variables to hold strings
    //Initialize variables    
    cout<<"Sorting Names"<<endl;        //Program name
    cout<<"Input 3 names"<<endl;        //Prompts user to input names
    cin>>name1>>name2>>name3;           //Vars to receive input names
    
    if ((name1>name2) && (name1>name3)){
        first = name1;
    }
    if ((name2>name1) && (name2>name3)){    ///Checks to see if each name is bigger than both of the others
        first = name2;
    }
    if ((name3>name1) && (name3>name2)){
        first = name3;
    }
    
    
    if ((name1<name2) && (name1<name3)){
        third = name1;
    }
    if((name2<name1) && (name2<name3) ){    //Checks to see if each name is smaller than both of the others
        third = name2;
    }
    if ((name3<name2) && (name3<name1)){
        third = name3;
    }
    
    
    if ((name1 != first)&(name1!=third)){
        second = name1;
    }
    if ((name2 != first)&(name2!=third)){ //Checks to see if each name is smaller or bigger than the others
        second = name2;
    }
    if ((name3 != first)&(name3!=third)){
        second = name3;
    }
    
    
    
    
    cout<<third<<endl;
    cout<<second<<endl;     //Outputs result to screen
    cout<<first<<endl;
    //Display Inputs/Outputs
    //Clean up memory and files
    //Exit the program
    return 0;
} 
