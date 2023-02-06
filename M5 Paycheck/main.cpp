/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate,total;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    
    if (hrsWrkd <= 20){
        
        total = hrsWrkd * payRate;
        
    }
    else if ((hrsWrkd > 20) && (hrsWrkd < 40)){
        total = (20*payRate)+((hrsWrkd-20)*(1.5*payRate));
        
    
    }
    else if (hrsWrkd >= 40){
        
        total = (20*payRate)+((20)*(1.5*payRate))+ ((hrsWrkd-40)*(2*payRate))                  ;
    
    }
    
    cout<<showpoint<<setprecision(5);
    cout<<"$"<<total<<endl;
    
    
        
    //Calculate Paycheck

    
    //Output the check
    
    
    //Exit
    return 0;
}