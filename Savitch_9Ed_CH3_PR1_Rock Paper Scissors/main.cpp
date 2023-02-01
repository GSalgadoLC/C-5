
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 16, 2023, 11:42 PM
 * Purpose: Savitch 9th edition problem 1 rock paper scissors
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
    char pick1,pick2;           //Variables to hold input characters
    int rep1,rep2,result;       //Variables to manipulate input, output result
    //Initialize variables
    cout<<"Rock Paper Scissors Game"<<endl; //Program display prompt
    cout<<"Input Player 1 and Player 2 Choices"<<endl;  //Prompts user for input
    cin>>pick1>>pick2;              //Stores user input
    //Map/Process the Inputs -> Outputs 
    switch (pick1){              //Converts pick 1 into a representative number
        case 'r': rep1 = 1;break;   //If rock 1,paper 2, scissors 3
        case 'R':rep1 = 1;break;
        case 'p': rep1 = 2;break;
        case 'P':rep1 = 2;break;
        case 's': rep1 = 3;break;
        case 'S':rep1 = 3;break;
    }
    switch (pick2){             //Converts pick2 into a representative number
        case 'r': rep2 = 1;break;  //If rock 1,paper 2, scissors 3
        case 'R':rep2 = 1;break;
        case 'p': rep2 = 2;break;
        case 'P':rep2 = 2;break;
        case 's': rep2 = 3;break;
        case 'S':rep2 = 3;break;
    }
    
    result = rep1+rep2; //Adds user picks together to decide what was drawn
   
    switch (result){            //Displays output depending on user input
        case 3: 
                cout<<"Paper covers rock."; break;
       
        case 4 : 
                cout<<"Rock breaks scissors."; break;
     
        case 5 : 
                cout<<"Scissors cuts paper."; break;
              
    }
    
    //Display Inputs/Outputs
    //Clean up memory and files
    //Exit the program
    return 0;
}

