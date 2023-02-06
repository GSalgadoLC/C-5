/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
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
    char package,pk, under;
    unsigned short hours, maxHour,cap,breach;
    float tbill,prMonth,addHour1,addHour2,billabl,first,second,third,savings;
    

    pk = 'a';
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    switch (package){
        case 'A': 
            
            prMonth =16.99; 
            maxHour = 10;
            cap = 10;
            breach = hours-maxHour;
            addHour1 = 0.95;
            addHour2 = 0.85;
                    break;
        case 'a': 
            prMonth =16.99; 
            maxHour = 10;
            cap = 10;
            breach = hours-maxHour;
            addHour1 = 0.95;
            addHour2 = 0.85;
                    break;
        case 'B': 
            prMonth = 26.99;
            maxHour = 20;      
            cap = 10;               //Determines which package is applicable
            breach = hours-maxHour;
            addHour1 = 0.74;
            addHour2 = 0.64;        //Sets the constants of variables 
                    break;
        case 'b': 
            prMonth = 26.99;
            maxHour = 20;
            cap = 10;               //Determines which package is applicable
            breach = hours-maxHour;
            addHour1 = 0.74;
            addHour2 = 0.64;            //Sets the constants of variables 
                    break;
        case 'C': 
            prMonth = 36.99; 
            maxHour = hours;    //Sets max hours to user hours, since its unlim
            addHour1 = 0.00;
            addHour2 = 0.00;
                    break;  
        case 'c': 
            prMonth = 36.99; 
            maxHour = hours;    //Sets max hours to user hours, since its unlim
            addHour1 = 0.00;
            addHour2 = 0.00;
                    break;  
    }
    
  
    if (maxHour > hours){               
        billabl  = 0.00;                  
    }                                         
    else if  (breach <= cap){
        
    
        billabl = (breach)*addHour1; 
    }
    else
        billabl = (cap*addHour1) + ((breach-cap)*addHour2);
    


    tbill = prMonth + billabl;
    
    
    
    
   
   
    breach = hours-10;
    
    if (10 > hours){               
        billabl  = 0.00;                  
    }                                         
    else if  (breach <= 10){
        
    
        billabl = (breach)*0.95; 
    }
    else
        billabl = (10*0.95) + ((breach-10)*0.85);
        
    first = 16.99 + billabl;
    
    
    
    
    
    breach = hours-20;
    
    if (20 > hours){               
        billabl  = 0.00;                  
    }                                         
    else if  (breach <= 10){
       
    
        billabl = (breach)*0.74; 
    }
    else
        billabl = (10*0.74) + ((breach-10)*0.64);
        
    second = 26.99 + billabl;
    
    third = 36.99;
    
    
    
    
    
    
    if ((first < second ) && (first < third)){
        pk = 'A';
        under = 'a';
      
        
        savings = tbill - first;
        
    } 
    else if ((second < first) && (second < third)){
        pk = 'B';
        under = 'b';
        savings = tbill - second;
    } 
    else if ((third < first) && (third < second)){
        pk = 'C';
        under = 'c';
        savings = tbill - third;    
    }
    
    
    if ( savings < 9.99){

    cout<<"$"<<tbill<<" "<<pk<<" $"<<showpoint<<setprecision(3)<<savings<<endl;
    }
    else 
    cout<<"$"<<tbill<<" "<<pk<<" $"<<showpoint<<setprecision(4)<<savings<<endl;
    
   
    
    //Basic Charges

    
    //Output the Charge


    //Output the cheapest package and the savings
    
        
    //Exit
    return 0;
}