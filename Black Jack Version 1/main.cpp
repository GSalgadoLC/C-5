
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 24, 2023, 03:13 PM
 * Purpose: PROJECT 1: BLACK JACK W/ GAME HISTORY AND BETTING RECORD
 */

//System Libraries
#include <iostream> //I/O library

using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    
   
    char keyIn;                         //Data type char 
    string name, dlr;                //Data type string
    string s, d, c, h;
    int gPlayed,gWon,gLoss;             //Data type int
    float betAmnt, totBet,net;          //Data type float
    
    int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,
           c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37,
           c38,c39,c40,c41,c42,c43,c44,c45,c46,c47,c48,c49,c50,c51,c52,c53,c54;
    
    gPlayed = gWon = gLoss = 0;         //Initializing variables
    totBet = net = 0.00;                //Var recording amount bet and take home
    
    dlr = "House";                   //String vars to simplify output display
    s = " of Spades";
    d = "of Diamonds";
    c = " of Clubs";
    h = " of Hearts";
    
//Columns are spades, diamonds, clubs, hearts   //Card vars
    c1  = c2  = c3  = c4  =  1; //These are aces, default set to 1
    c5  = c14 = c23 = c32 =  2; //These are 2s
    c6  = c15 = c24 = c33 =  3; //These are 3s
    c7  = c16 = c25 = c34 =  4; //These are 4s
    c8  = c17 = c26 = c35 =  5; //These are 5s
    c9  = c18 = c27 = c36 =  6; //These are 6s
    c10 = c19 = c28 = c37 =  7; //These are 7s
    c11 = c20 = c29 = c38 =  8; //These are 8s
    c12 = c21 = c30 = c39 =  9; //These are 9s
    c13 = c22 = c31 = c40 = 10; //These are 10s
    c41 = c42 = c43 = c44 = 10; //These are jack faces
    c45 = c46 = c47 = c48 = 10; //These are queen faces
    c49 = c50 = c51 = c52 = 10; //These are king faces
    
    cout<<"\tHello, welcome to Riverside Casino. Today we will be playing Black Jack"<<endl;    //Display program prompt
    cout<<"\tPlease enter your name:"<<endl;
    cin>>name;                                                                                 //Player name
    cout<<"\n\tRules of the game:"<<endl;
    cout<<"\t\tStandard deck of cards, no jokers, aces are worth 1 or 11, face cards are worth 10 "<<endl;  //Rules of the game
    cout<<"\t\tObjective: Get as close to 21 without busting"<<endl;
    cout<<"\n\tAre you ready? Press any key to continue or press Q to exit"<<endl;              //Looping variable prompt
    cin>>keyIn;                                                                                 //Variable to determine looping condition
    
    while ((keyIn != 'Q') && (keyIn != 'q')){                                                  //Loop to determine if player wants to keep playing with logical AND conditional
        cout<<"\n\tPlease enter a betting amount between $0.01 and $10,000"<<endl;
        cin>>betAmnt;                                                                         //Ask user for bet amount and stores in variable betAmnt

        while(betAmnt < 0.01 || betAmnt > 10000){                                             //Determines if variable is within accepted range
            cout<<"\tYou did not enter an amount between $0.01 and $10,000"
                    "\n\tPlease re-enter your betting amount"<<endl;
            cin>>betAmnt;
        }//While bracket
      
        cout<<"\t\tYou have bet: $"<<betAmnt<<endl;                                             //Displays how much user has bet for upcoming game


        cout<<"\n\tWould you like to play again? Press any key to continue or press Q to exit"<<endl;   //Looping display prompt 
        cin>>keyIn;                                                                                     //Updating looping variable to test again
    } //While bracket

    
    cout<<"\n\t*******Thanks for playing*******"<<endl;                                                 //Ending program display prompt
    cout<<"\n\tHere is your summary of today"<<endl;
    cout<<"\n\t\tGames Played: "<<gPlayed<<endl;                                                        //Displays summary of today's casino gaming
    cout<<"\t\tGames Won: "<<gWon<<endl;
    cout<<"\t\tGames Loss: "<<gLoss<<endl;                                                              //Displays games played,won,loss,total bet 
    cout<<"\t\tAmount Gambled: $"<<totBet<<endl;
    if ( net > 0){
        cout<<"\n\t\tCONGRATULATIONS!! Your take home is $"<<net<<endl;                                 //Displays total payout if net positive 
    }
    else{
        cout<<"\n\t\tSorry. You did not win today :("<<endl;                                            //If net payout is negative displays a sorry prompt
    }

    
    return 0;
}
//Potential program vulnerabilities
//Line 41 entering an invalid string instead of int into betting amount. Runs indefinitely; 
