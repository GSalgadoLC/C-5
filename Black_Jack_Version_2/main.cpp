
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
    
    srand(static_cast<unsigned int>(time(0)));                                       //Random number generation seed
   
    char keyIn,hors;                                                                 //Data type char 
    string name, dlr;                                                                //Data type string
    string s, d, c, h,abv;                                                           //Data type string
    int a, thand;                                                                    //Data type int
    int gPlayed,gWon,gLoss;                                                          //Data type int
    float betAmnt, monLoss, monWon, totBet,net;                                      //Data type float
    
    int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,      //Data type int for cards
           c21,c22,c23,c24,c25,c26,c27,c28,c29,c30,c31,c32,c33,c34,c35,c36,c37,
           c38,c39,c40,c41,c42,c43,c44,c45,c46,c47,c48,c49,c50,c51,c52,c53,c54;
    
    int p1, p2 ;                                                                     //Data type int
    
    gPlayed = gWon = gLoss = 0;         //Initializing variables
    monLoss = monWon = totBet = net = 0.00;                //Var recording amount bet and take home
    thand = 0;

    dlr = "House";                   //String vars to simplify output display
    s = " of Spades";                // of spades variable
    d = " of Diamonds";              //of diamonds variable 
    c = " of Clubs";                 // of clubs variable
    h = " of Hearts";                // of hearts variable
    
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
    
    p1 = p2 = 0;
    
    
    cout<<"\tHello, welcome to Riverside Casino. Today we will be playing Black Jack"<<endl;    //Display program prompt
    cout<<"\tPlease enter your name:\n\t\t";
    cin>>name;                                                                                 //Player name
    cout<<"\n\tWelcome "<<name<<", Rules of the game:"<<endl;
    cout<<"\t\tStandard deck of cards, no jokers, aces are worth 1 or 11, face cards are worth 10 "<<endl;  //Rules of the game
    cout<<"\t\tObjective: Get as close to 21 without busting"<<endl;
    cout<<"\n\tAre you ready? Press any key to continue or press Q to exit\n\t";              //Looping variable prompt
    cin>>keyIn;                                                                                 //Variable to determine looping condition
    
    while ((keyIn != 'Q') && (keyIn != 'q')){                                                  //Loop to determine if player wants to keep playing with logical AND conditional
        cout<<"\n\tPlease enter a betting amount between $0.01 and $10,000\n\t";
        cin>>betAmnt;                                                                         //Ask user for bet amount and stores in variable betAmnt

        while(betAmnt <= 0.01 || betAmnt >= 10000){                                             //Determines if variable is within accepted range
            cout<<"\tYou did not enter an amount between $0.01 and $10,000"
                    "\n\tPlease re-enter your betting amount"<<endl;
            cin>>betAmnt;                                                                      //Takes in bet amount, user validation
        } //While bracket
      
        cout<<"\t\tYou have bet: $"<<betAmnt<<endl;                                             //Displays how much user has bet for upcoming game
        totBet = totBet + betAmnt;                                                             //Totbet is the total gambled for the session
        a = 0;                                                                                  //Variable to display a certain prompt if condition is met
        for (int i = 1; i < 3; i++){                                                            //For loop that distributes a random card and keeps distributing if player asks for more cards
            
            a += 1;                                                                             //Variable to determine if card distributed is the third or more
        p1 =rand()%52+1;                                                                        //picks a random numnber from 1 to 52 and matches card from c1 to c52 
        
        switch(p1){                                                                             //Switch that takes in random number and matches card to the deck card
                    case (1):                                                                   //This would match to card c1 which is an ace of spades        
                        p1 = c1;                                                                // This assigns the value of card c1 which is 1 or 11 to the variable p1
                        abv = s;                                                                //This assigns the card type like spades or diamonds to cout at display prompt later on
                        break;
                    case (2): 
                        p1 = c2;
                        abv = d;
                        break;
                    case (3): 
                        p1 = c3;
                        abv = c;
                        break;
                    case (4): 
                        p1 = c4;
                        abv = h;
                        break;
                    case (5): 
                        p1 = c5;
                        abv = s;
                        break;
                    case (6):                                                                   //This is another example of how the switch works
                        p1 = c6;                                                                //This matches the random number chosen from 1 to 52.    
                        abv = s;                                                                //In this case p1 was randomly chosen to be 6. It will match the card c6        
                        break;                                                                  //Which is 3 of spades so variable p1 is assigned value of 3
                    case (7):                                                                   //and the abbreviation is set to " of spades"        
                        p1 = c7;
                        abv = s;
                        break;
                    case (8): 
                        p1 = c8;
                        abv = s;
                        break;
                    case (9): 
                        p1 = c9;
                        abv = s;
                        break;
                    case (10): 
                        p1 = c10;
                        abv = s;
                        break;
                    case (11): 
                        p1 = c11;
                        abv = s;
                        break;
                    case (12): 
                        p1 = c12;
                        abv = s;
                        break;
                    case (13): 
                        p1 = c13;
                        abv = s;
                        break;
                    case (14): 
                        p1 = c14;
                        abv = d;
                        break;
                    case (15): 
                        p1 = c15;
                        abv = d;
                        break;
                    case (16): 
                        p1 = c16;
                        abv = d;
                        break;
                    case (17): 
                        p1 = c17;
                        abv = d;
                        break;
                    case (18): 
                        p1 = c18;
                        abv = d;
                        break;
                    case (19): 
                        p1 = c19;
                        abv = d;
                        break;
                    case (20):                                                      //This is another example of how the switch works
                        p1 = c20;                                                   //P1 is randomly assigned the value of 20.             
                        abv = d;                                                    //This will match the card of c20 which is 8 of diamonds            
                        break;                                                      //The variable p1 is assigned the value of 8 and abbreviation of " of diamonds"    
                    case (21): 
                        p1 = c21;
                        abv = d;
                        break;
                    case (22): 
                        p1 = c22;
                        abv = d;
                        break;
                    case (23): 
                        p1 = c23;
                        abv = c;
                        break;
                    case (24): 
                        p1 = c24;
                        abv = c;
                        break;
                    case (25): 
                        p1 = c25;
                        abv = c;
                        break;
                    case (26): 
                        p1 = c26;
                        abv = c;
                        break;
                    case (27): 
                        p1 = c27;
                        abv = c;
                        break;
                    case (28): 
                        p1 = c28;
                        abv = c;
                        break;
                    case (29): 
                        p1 = c29;
                        abv = c;
                        break;
                    case (30): 
                        p1 = c30;
                        abv = c;
                        break;
                    case (31): 
                        p1 = c31;
                        abv = c;
                        break;
                    case (32): 
                        p1 = c32;
                        abv = h;
                        break;
                    case (33): 
                        p1 = c33;
                        abv = h;
                        break;
                    case (34): 
                        p1 = c24;
                        abv = h;
                        break;
                    case (35): 
                        p1 = c35;
                        abv = h;
                        break;
                    case (36): 
                        p1 = c36;
                        abv = h;
                        break;
                    case (37): 
                        p1 = c37;
                        abv = h;
                        break;
                    case (38): 
                        p1 = c38;
                        abv = h;
                        break;
                    case (39): 
                        p1 = c39;
                        abv = h;
                        break;
                    case (40): 
                        p1 = c40;
                        abv = h;
                        break;
                    case (41): 
                        p1 = c41;
                        abv = s;
                        break;
                    case (42): 
                        p1 = c42;
                        abv = d;
                        break;
                    case (43): 
                        p1 = c43;
                        abv = c;
                        break;
                    case (44): 
                        p1 = c44;
                        abv = h;
                        break;
                    case (45): 
                        p1 = c45;
                        abv = s;
                        break;
                    case (46): 
                        p1 = c46;
                        abv = d;
                        break;
                    case (47): 
                        p1 = c47;
                        abv = c;
                        break;
                    case (48): 
                        p1 = c48;
                        abv = h;
                        break;
                    case (49): 
                        p1 = c49;
                        abv = s;
                        break;
                    case (50): 
                        p1 = c50;
                        abv = d;
                        break;
                    case (51): 
                        p1 = c51;
                        abv = c;
                        break;
                    case (52): 
                        p1 = c52;
                        abv = h;
                        break;
        
                }
                thand = thand + p1;                                                //The variable thand adds up the total hand of the plater
                                                                                   //Each time the player draws a card thand is updated with += drawn card          
            if (i == 1){                                                           //For the first drawn card by the played the for loop will be at i = 1
                                                                                   //We will display prompt and the value of the card that was drawn and what card
                cout<<"\t\tYour first card is  "<<p1<<" "<<abv<<endl;
            }
            if ((i == 2)&&(a==2)){                                                 //For the second time the player draws a card the for loop variable i will be at 2    
                
                cout<<"\t\tYour second card is "<<p1<<" "<<abv<<endl;              //This displays a prompt and the value of the second card and what card it is
            }
            else if (a > 2){                                                       //If the played has drawn more than twice the secondary looping variable in the for loop will be greater than 2     
                
                cout<<"\n\t\tYour New card is "<<p1<<" "<<abv<<endl;                //This will display a prompt and the card value as well as what card it was
            } 
                
            if ((i ==2) && (thand == 21)){                                         //If the player has been given two cards and the value is 21 exactly we will display a prompt             
                cout<<"\n\tCongratulations you have a winning hand of 21!";        //Display prompt 
                gWon += 1;                                                          //This will update the variable gWon to keep track of how many games have been won
                gPlayed += 1;                                                       //This variable will update how many games have been played for the session
                monWon = monWon + betAmnt ;                                        //This variable will update the variable to show how much was won during the session  
             
            }
                
            if ((i ==2) && (thand > 21)){                                          //If played has received at least two cards and the value of their hand is over 21
              
                cout<<"\n\tSorry you have busted, your hand is "<<thand<<endl;     //The player will receive a display prompt showing they have busted
                gLoss += 1;                                                        //This will update games loss for the session 
                gPlayed += 1;                                                     //This will update total games played during a session          
                monLoss = monLoss - betAmnt;                                       //This will update total money lost during a session
            }
            if ((i ==2) && (thand < 21)){                                                           //This will display if plater has received at least two cards and is under 21
                    cout<<"\n\tYour hand is "<<thand<<", would you like to hit or stay?"<<endl;     //They will be shown their total hand value and asked if they want another card
                    cout<<"\tEnter H to hit or S to stay\t";                                        //They will enter H for a hit or an S for a stay    
                    cin>>hors;                                                                      //This will record their response
            }
            if ((thand < 21) && ((hors == 'H')||(hors =='h'))){                                     //This will determine what response was inputted            
                    i = i - 1;                                                                      //This will decrease the for loop variable and draw another card for the player
                    a = a + 1;                                                                      //This will increase secondary variable    
                    
            }
            else if ((thand < 21) && ((hors == 's')||(hors == 'S'))){
                    cout<<"This ran, here we evaluate against dealers card";
                }
               
                
        } //For Loop
        
        cout<<"\n\tWould you like to play again? Press any key to continue or press Q to exit"<<endl;   //Looping display prompt 
        cin>>keyIn;                                                                                     //Updating looping variable to test again
        thand = 0;                                                                                      //Variable is reset
        a=0;                                                                                            //Variable is reset
        hors = '';                                                                                     //Variable is reset
      
       
    } //While bracket
 
   
    
    
    cout<<"\n\t*******Thanks for playing*******"<<endl;                                                 //Ending program display prompt
    cout<<"\n\tHere is your summary of today"<<endl;                                                    //Displays summary of today's casino gaming
    cout<<"\n\t\tGames Played: "<<gPlayed<<endl;                                                        //Displays how games were played during the session    
    cout<<"\t\tGames Won: "<<gWon<<endl;                                                                //Displays how many games were won during the session    
    cout<<"\t\tGames Loss: "<<gLoss<<endl;                                                              //Displays how many games were lost during the session
    cout<<"\t\tAmount Gambled: $"<<totBet<<endl;                                                        //Displays total amount gambled for the session
    net = monWon + monLoss;                                                                             //Calculates the take home net of the player
    if ( net > 0){                                                                                      //If net is greater than zero
        cout<<"\n\t\tCONGRATULATIONS!! Your take home is $"<<net<<endl;                                 //Displays total payout if net positive 
    }
    else{                                                                                               //If net is less than zero 
        cout<<"\n\t\tSorry. You did not win today, You lost "<<net<<" :("<<endl;                        //If net payout is negative displays a sorry prompt
    }

    return 0;                                                                                           //End program return 0 exit
}
//Potential program vulnerabilities
//Line 41 entering an invalid string instead of int into betting amount. Runs indefinitely; 
