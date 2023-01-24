
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 12, 7:00 PM
 * Purpose: Savitch 9th edition chapter 2 problem 1 Diet Coke
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
    float artMosG, masMosG, prcntK; //vars for mass of mouse and percent to kill 
    float artHumG,masHumLb, masHumG;  //Vars for mass of human in lbs and g
    float masCanG, swtCon,masSwtC, numCan; //vars for mass of can and sweet per can
    //Initialize variables
    artMosG = 5;                    //constants of question for mouse
    masMosG = 35;
    prcntK = (artMosG/masMosG);    //calculation for percentage that will kile mouse
    masCanG = 350;
    swtCon = 0.001;                //constants of question for can
    //Map/Process the Inputs -> Outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl; //Prompts user for input 
    cin>>masHumLb;
    masHumG = masHumLb * 453.592;   //Converts lbs to g
    artHumG = masHumG * prcntK;     //finds max g of sweetner human can consume
    masSwtC = masCanG * swtCon ;    // fings grams of sweetner per can
  
    numCan = artHumG / masSwtC ; //calculates number of cans can be consumed by div max tolerable by grams in can
    //Display Inputs/Outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<< static_cast<int> (numCan)<<" cans"; //Displays max cans to be consumed
    //Clean up memory and files
    //Exit the program
    return 0;
}
