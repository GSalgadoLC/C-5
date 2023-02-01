
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 1, 2023, 9:20 PM
 * Purpose: Gaddis 9th edition chapter 4 problem 14 Race Program
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
    string name1,name2,name3,first,second,third;
    float time1,time2,time3,p1,p2,p3;
    
    //Initialize variables
    cout<<"Race Ranking Program"<<endl; //Prints intro display
    cout<<"Input 3 Runners"<<endl; //Prompts user to enter input value of name and time
    cout<<"Their names, then their times"<<endl; //Prompts user to enter input value of name and time
    cin>>name1>>time1>>name2>>time2>>name3>>time3;//Variable to hold input values
    //Map/Process the Inputs -> Outputs
    if ((time1<time2 ) && (time1<time3)) {
        first = name1;                          //Determines if time is greater than both of the others
        p1 = time1;
    }
    if ((time2<time3 ) && (time2<time1)) {  //Determines if time is greater than both of the others
        first = name2;
        p1 = time2;
    }
    if ((time3<time2 ) && (time3<time1)) {  //Determines if time is greater than both of the others
        first = name3;
        p1 = time3;
    }
    if ((time1>time2 ) && (time1>time3)) {  //Determines if time is less than both of the others
        third = name1;
        p3 = time1;
    }
    if ((time2>time1 ) && (time2>time3)) {  //Determines if time is less than both of the others
        third = name2;
        p3 = time2;
    }
    if ((time3>time1 ) && (time3>time2)) {  //Determines if time is less than both of the others
        third = name3;
        p3 = time3;
    }
    if ((time1!= p1 ) && (time1 != p3)) {      //Determines if this one is first or third
        second = name1;
        p2 = time1;
    }
    if ((time2!= p1 ) && (time2 != p3)) {   //Determines if this one is first or third
        second = name2;
        p2 = time2;
    }
    if ((time3!= p1 ) && (time3 != p3)) {   //Determines if this one is first or third
        second = name3;
        p2 = time3;
    }
    //Display Inputs/Outputs
    
    cout<<first<<"\t"<<setw(3)<<p1<<endl;
    cout<<second<<"\t"<<setw(3)<<p2<<endl;  //Displays the results
    cout<<third<<"\t"<<setw(3)<<p3;
    //Clean up memory and files
    //Exit the program
    return 0;
}