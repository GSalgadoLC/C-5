/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 17, 2023, 03:37 PM
 * Purpose: Savitch 9th edition problem 4 Horoscopes
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
    string sign1,sign2;
    //Initialize variables
    cout<<"Horoscope Program which examines compatible signs."<<endl; //Program display prompt
    cout<<"Input 2 signs."<<endl;  //Prompts user for input
    cin>>sign1>>sign2;              //Stores user input
    //Map/Process the Inputs -> Outputs 
    
    if (((sign1 == "Aries") || (sign1=="Leo") || (sign1 == "Sagittarius")) && ((sign2 == "Aries") || (sign2=="Leo") || (sign2 == "Sagittarius"))){
        cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
    }
    else if (((sign1 == "Taurus") || (sign1=="Virgo") || (sign1 == "Capricorn")) && ((sign2 == "Taurus") || (sign2=="Virgo") || (sign2 == "Capricorn"))){
        cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
    }
    else if (((sign1 == "Gemini") || (sign1=="Libra") || (sign1 == "Aquarius")) && ((sign2 == "Gemini") || (sign2=="Libra") || (sign2 == "Aquarius"))){
        cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
    }
    else if (((sign1 == "Cancer") || (sign1=="Scorpio") || (sign1 == "Pisces")) && ((sign2 == "Cancer") || (sign2=="Scorpio") || (sign2 == "Pisces"))){
        cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
    }
   else 
       cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
  
    
    //Display Inputs/Outputs
    //Clean up memory and files
    //Exit the program
    return 0;
}