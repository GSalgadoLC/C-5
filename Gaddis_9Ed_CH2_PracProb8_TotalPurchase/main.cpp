
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 11, 2023, 4:37 PM
 * Purpose: Gaddis CH2 problem 8 Total Purchase
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
    float itm1,itm2,itm3,itm4,itm5,taxpcnt,tax,stotal,total;
    //Initialize variables
   itm1 = 15.95;   
   itm2 = 24.95;
   itm3 = 6.95;
   itm4 = 12.95;
   itm5 = 3.95;
   taxpcnt = 0.07;
    //Map/Process the Inputs -> Outputs
   stotal = itm1+itm2+itm3+itm4+itm5;
   tax = stotal*taxpcnt;
   total = stotal + tax;
    //Display Inputs/Outputs
    cout<<"*****Nordstrom Receipt****************"<<endl;
    cout<<"\n Price of item 1           $"<<itm1<<endl;
    cout<<" Price of item 2           $"<<itm2<<endl;
    cout<<" Price of item 3           $"<<itm3<<endl;
    cout<<" Price of item 4           $"<<itm4<<endl;
    cout<<" Price of item 5           $"<<itm5<<endl;
    cout<<"\n The subtotal is           $"<<stotal<<endl;
    cout<<"\n Tax charge                $"<<tax<<endl;
    
    cout<<"\n Your total is             $"<<total<<endl;
    cout<<"\n    Thanks for Shopping with us"<<endl;
    cout<<"*************************************"<<endl;
 
    //Clean up memory and files
    //Exit the program
    return 0;
}

