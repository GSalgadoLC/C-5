
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on February 12, 2023, 
 * Purpose: Project 2 BATTLESHIP V4
 */

//System Libraries
#include <iostream>                                                             //I/O library
#include <iomanip>                                                              //Format Library
#include <cstdlib>                                                              //Random number generator
#include <ctime>                                                                //Time for random seed    
#include <stdlib.h>  
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions
const int columns = 10;                                                         //For 2D array board columns
const int rows = 10;                                                            //For 2D array board rows
//Function Prototypes
void disWelcome(string);                                                        //Function prototype displays welcome prompt
void disRules();                                                                //Function prototype displays battleship rules
void disReady(char);                                                            //Function prototype asks if user is ready

void initBoard(string [][columns]);                                             //Initializes the 2d array board to 10x10 with empty string "-"    
void printBoard(string [][columns], int[], string[]);                           //Function prototype to print out the board when called
void placeDestroyer(string [][columns],string);
int pathWay();
void placeSubmarine(string [][columns],string);
void placeCruiser(string [][columns],string);
void placeBattleship(string [][columns],string);

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));                                  //Random number generation seed
    char keyIn;                                                                 //Char variable to store user input if ready to start game            
    string name;                                                                //String variable to ask for users name    
    
    
    
    string board[rows][columns];                                                //2D Array variable of type string that acts as out game board        
    
    int topBar[11]= {0,1,2,3,4,5,6,7,8,9,10};                                   //1D Integer array variable that displays the top row of our game board        
    string leftBar[10]= {"A","B","C","D","E","F","G","H","I","J"};              //1d String array variable that displays the left vertical bar for our game board
    
    string miss,                                                                //String variable to hold characters for game board        
            hit,
            empty,
            boat;
  
    miss = "O";                                                                 //Sets values to the string variables depending on action type performed
    hit = "X";                                                                  //Sets values to the string variables depending on action type performed
    empty = "-";                                                                //Sets values to the string variables depending on action type performed
    boat = "*";        
            
    disWelcome(name);                                                           //Calls our welcome display function
    disRules();                                                                 //Calls our rules display function    
    disReady(keyIn);                                                            //Calls our ready display function
    
    
    initBoard(board);                                                           //Calls our initialization board function, to start the game                                          
    placeBattleship(board,boat); 
    placeCruiser(board,boat); 
    placeDestroyer(board, boat);
    placeSubmarine(board, boat);
    printBoard(board, topBar,leftBar);
   
    
    return 0;
}

void disWelcome(string name){
    
        cout<<"\n\tWelcome To BATTLESHIP";                                      //Welcome prompt
        cout<<"\n\tPlease enter your name...\t";                                //Asks for player name
        cin>>name;                                                              //Stores player name
        cout<<"\n\tHello Captain "<<name;                                       //Greets player    
      
}

void disRules(){
    cout<<"\n\n\t\tRules of the game:";                                         //Rule prompt
    cout<<"\n\t\t\t+ Each player has a fleet of 5 ships";                       //Rule prompt
    cout<<"\n\t\t\t\t- Carrier 5 Holes, BattleShip 4 Holes, Cruiser 3 Holes,";  //Rule prompt
    cout<<"\n\t\t\t\t- Submarine 3 Holes and Destroyer 1 Hole";                 //Rule prompt
    cout<<"\n\t\t\t+ Place each ship in any horizontal or vertical position but not diagonally";//Rule prompt
    cout<<"\n\t\t\t+ Do not place a ship so that holes overlap with another";   //Rule prompt
    cout<<"\n\t\t\t+ Do not change position of ships once the game has begun";  //Rule prompt
    cout<<"\n\n\t\tHow to play:";                                               //Rule prompt
    cout<<"\n\t\t\t+ You will call your shot alphabet then number";             //Rule prompt
    cout<<"\n\t\t\t\t- Example: D 4";                                           //Rule prompt
    cout<<"\n\t\t\t+ If you hit a ship you will see BOOM, and your opponent will tell you what ship you hit";//Rule prompt
    cout<<"\n\t\t\t\t- Example: BOOM, you have hit my Destroyer!";              //Rule prompt
    cout<<"\n\t\t\t+ If you miss, your opponent will tell say MISS";            //Rule prompt
    cout<<"\n\t\t\t\t- Example: MISS";                                          //Rule prompt
    cout<<"\n\t\t\t+ The game will automatically keep count of your Hits AND Misses";//Rule prompt
}

void disReady(char keyIn){                                                      //Function to ask if user is ready
    
    cout<<"\n\n\tReady? Enter any key to begin... or q to exit\t";              //Asks questions
    cin>>keyIn;                                                                 //Stores input variable
    if ((keyIn == 'q') || (keyIn == 'Q')){                                      //USER validation in if statement using logical operator
        cout<<"\n\tExiting Game"<<endl;                                         //Display prompt
        exit(0);                                                                //Exit function
    }
    else {                                                                      //If else statement to display prompt    
        cout<<"\n\tStarting Game!!!"<<endl;
        
    }
}



void initBoard(string board[][columns]){                                        //Function initializing our 2d board with placeholder character value "-"
    
    
    for( int i = 0; i < rows; i++){                                             //For loop creating our rows        
        
        
        for (int j = 0; j < columns; j++){                                      //For loop creating our columns    
            
            
            board[i][j] = "-";                                                  //2D String array that sets each value to an "-"        
        }                                                                       //As both for loops work together to weave our matrix board 
    }
    
}


void printBoard(string board[][columns],int topBar[], string leftBar[]){        //Print out our matrix board
    int x = 0;                                                                  //Int var for while looping condition    
    bool isTrue;                                                                //Boolean var to test if while loop variable is zero        
        
    while(x < 11){                                                              //While loop to loop around our topBar array    
    
        
    (x == 0)?isTrue = true:isTrue = false;                                      //Checks if we are on our first iteration of the while loop
    (isTrue == true)?cout<<"\n\n\t\t":cout<<"";                                 //Sets boolean variable to true and prints a statement if true    
    
        if (x < 10){                                                            //If statement that tests if looping variable is less than 10                
            
            cout<<topBar[x];                                                    //Displays value inside of our topBar array    
        }
        
    (x == 10)?cout<<topBar[x]<<endl:cout<<" ";                                  //Ternary conditional operator that couts 10 if on 10 th iteration or space if not        
    
    x++;                                                                        //Incrementing our while variable    
    }
    
    
    for( int i = 0; i < rows; i++){                                             //Goes through our rows inside our matrix board    
        
        cout<<"\t\t"<<leftBar[i]<<" ";                                          //Displays the left vertical bar array value per iteration
        
        for (int j = 0; j < columns; j++){                                      //Goes through our columns per iteration
            
            
            cout<<board[i][j]<<" ";                                             //Displays values inside matrix board
        }
        
        cout<<endl;                                                             //If end of row we print out a new line
    }
    
}

void placeDestroyer(string board [][columns],string boat){                      //To place our first boat a destroyer 1 Hole
    
    int shipRow;                                                                //Variable to index our matrix
    int shipCol;                                                                //Variable to index our matrix board
    
   for (int i = 0; i < 2; i++) {                                                //Placing two destroyers
       
    shipRow = rand() %rows;                                                     //Setting index variable to a random number        
    shipCol = rand() %columns;                                                  //Setting index variable to a random number    
    
    while (board[shipRow][shipCol] == boat) {
                                                                                //Verifying that the index number has not is unoccupied aka without a boat "*"
      shipRow = rand() %rows;                                                   //Verifying that the index number has not is unoccupied aka without a boat "*"
      shipCol = rand() %columns;                                                //Verifying that the index number has not is unoccupied aka without a boat "*"
      
    }
    
    board[shipRow][shipCol] = boat;                                             //If index coordinate pair is unoccupied then a boat will be placed, max two
  }
}


int pathWay(){                                                                  //This randomly selects the direction for boats that are greater than 1 hole
    
    int path;                                                                   //Variable to hold path value
    
    path = rand()%4+1;                                                          //Random number 1,2,3,4, representing directions

    return path;                                                                //Returning a path value representor
}




void placeSubmarine(string board [][columns],string boat){                      //To place our first boat a destroyer 1 Hole
    
    int shipRow;                                                                //Variable to index our matrix
    int shipCol;                                                                //Variable to index our matrix board
    int side;
   for (int i = 0; i < 2; i++) {                                                //Placing two destroyers
       
    shipRow = rand() %rows;                                                     //Setting index variable to a random number        
    shipCol = rand() %columns;                                                  //Setting index variable to a random number    
    
    while (board[shipRow][shipCol] == boat) {
                                                                                //Verifying that the index number has not is unoccupied aka without a boat "*"
      shipRow = rand() %rows;                                                   //Verifying that the index number has not is unoccupied aka without a boat "*"
      shipCol = rand() %columns;                                                //Verifying that the index number has not is unoccupied aka without a boat "*"
      
    }
    
    side = pathWay();                                                           //Call ours path direction function
    switch(side){                                                               //To process our path direction variable and assign proper value        
        case 1:                                                                 //If 1 then we will select placement of ship to the left    
            if ((shipCol-1 < 0)||(board[shipRow][shipCol-1]==boat)){;
                i--;
            }
            else{
                board[shipRow][shipCol] = boat;                                     //Placing boat left
                board[shipRow][shipCol-1] = boat;                                   
            }
            break;
        case 2:                                                                 //2 represents right direction
            if (( shipCol+1 > 10)||(board[shipRow][shipCol+1]==boat)){
                i--;
            }
            else{
                board[shipRow][shipCol] = boat;   
                board[shipRow][shipCol+1] = boat;                                   //Placing boat right
            }
            break;
        case 3: 
            if ((shipRow-1<0)||(board[shipRow-1][shipCol]==boat)){                                                               //3 Represents top direction
                i--;
            }
            else{
            board[shipRow][shipCol] = boat;                                     
            board[shipRow-1][shipCol] = boat;                                   //Placing boat top direction    
            }
            break;
        case 4:                                                                 //4 represents bottom direction 
            if((shipRow+1 > 10 )||(board[shipRow+1][shipCol]==boat)){
                i--;
            }
            else{
                board[shipRow][shipCol] = boat;   
                board[shipRow+1][shipCol] = boat;                                   //Placing boat bottom direction        
            }
                break;
    }         
  }
}
void placeCruiser(string board [][columns],string boat){                        //To place our first boat a destroyer 1 Hole
    int shipRow;                                                                //Variable to index our matrix
    int shipCol;                                                                //Variable to index our matrix board
    int side;
    
    for (int i = 0; i < 1; i++) {                                                //Placing 1 carrier
    shipRow = rand() %rows;                                                     //Setting index variable to a random number        
    shipCol = rand() %columns;                                                  //Setting index variable to a random number    
    
    while (board[shipRow][shipCol] == boat) {
                                                                                //Verifying that the index number has not is unoccupied aka without a boat "*"
      shipRow = rand() %rows;                                                   //Verifying that the index number has not is unoccupied aka without a boat "*"
      shipCol = rand() %columns;                                                //Verifying that the index number has not is unoccupied aka without a boat "*"
    }
    side = pathWay();                                                           //Call ours path direction function
    switch(side){                                                               //To process our path direction variable and assign proper value        
        case 1:                                                                 //If 1 then we will select placement of ship to the left    

            if ((shipCol-1 < 0)||(board[shipRow][shipCol-1]==boat)||(shipCol-2 < 0)||(board[shipRow][shipCol-2]==boat)){;
                i--;  
            }
            else{
                board[shipRow][shipCol] = boat;                                     //Placing boat left
                board[shipRow][shipCol-1] = boat;                                   
                board[shipRow][shipCol-2] = boat;
            }
            break;
        case 2:                                                                 //2 represents right direction
            
            if (( shipCol+1 > 10)||(board[shipRow][shipCol+1]==boat)||( shipCol+2 > 10)||(board[shipRow][shipCol+2]==boat)){
                i--;
            }
            else{
                board[shipRow][shipCol] = boat;   
                board[shipRow][shipCol+1] = boat;                                   //Placing boat right
                board[shipRow][shipCol+2] = boat;
            }
            break;
        case 3: 
            if ((shipRow-1<0)||(board[shipRow-1][shipCol]==boat)||(shipRow-2<0)||(board[shipRow-2][shipCol]==boat)){                                                               //3 Represents top direction
                i--;
            }
            else{
            board[shipRow][shipCol] = boat;                                     
            board[shipRow-1][shipCol] = boat;                                   //Placing boat top direction    
            board[shipRow-2][shipCol] = boat; 
            }
            break;
        case 4:                                                                 //4 represents bottom direction 
            
            if((shipRow+1 > 10 )||(board[shipRow+1][shipCol]==boat)||(shipRow+2 > 10 )||(board[shipRow+2][shipCol]==boat)){
                i--;
            }
            else{
                board[shipRow][shipCol] = boat;   
                board[shipRow+1][shipCol] = boat;                                   //Placing boat bottom direction     
                board[shipRow+2][shipCol] = boat;
            }
                break;
    }         
  }
}
void placeBattleship(string board [][columns],string boat){                      //To place our first boat a destroyer 1 Hole
    
    int shipRow;                                                                //Variable to index our matrix
    int shipCol;                                                                //Variable to index our matrix board
    int side;
    
   for (int i = 0; i < 1; i++) {                                                //Placing 1 carrier
       
    shipRow = rand() %rows;                                                     //Setting index variable to a random number        
    shipCol = rand() %columns;                                                  //Setting index variable to a random number    
    
    while (board[shipRow][shipCol] == boat) {
                                                                                //Verifying that the index number has not is unoccupied aka without a boat "*"
      shipRow = rand() %rows;                                                   //Verifying that the index number has not is unoccupied aka without a boat "*"
      shipCol = rand() %columns;                                                //Verifying that the index number has not is unoccupied aka without a boat "*"
      
    }
    side = pathWay();                                                           //Call ours path direction function
    switch(side){                                                               //To process our path direction variable and assign proper value        
        case 1:                                                                 //If 1 then we will select placement of ship to the left    

            if ((shipCol-1 < 0)||(board[shipRow][shipCol-1]==boat)||(shipCol-2 < 0)||(board[shipRow][shipCol-2]==boat)||(shipCol-3 < 0)||(board[shipRow][shipCol-3]==boat)){;
                i--; 
            }
            else{
                board[shipRow][shipCol] = boat;                                     //Placing boat left
                board[shipRow][shipCol-1] = boat;                                   
                board[shipRow][shipCol-2] = boat;
                board[shipRow][shipCol-3] = boat;
            }
            break;
        case 2:                                                                 //2 represents right direction
            
            if (( shipCol+1 > 10)||(board[shipRow][shipCol+1]==boat)||( shipCol+2 > 10)||(board[shipRow][shipCol+2]==boat)||( shipCol+3 > 10)||(board[shipRow][shipCol+3]==boat)){
                i--;
            }
            else{
                board[shipRow][shipCol] = boat;   
                board[shipRow][shipCol+1] = boat;                                   //Placing boat right
                board[shipRow][shipCol+2] = boat;
                board[shipRow][shipCol+3] = boat;
            }
            break;
        case 3: 
            if ((shipRow-1<0)||(board[shipRow-1][shipCol]==boat)||(shipRow-2<0)||(board[shipRow-2][shipCol]==boat)||(shipRow-3<0)||(board[shipRow-3][shipCol]==boat)){                                                               //3 Represents top direction
                i--;
            }
            else{
            board[shipRow][shipCol] = boat;                                     
            board[shipRow-1][shipCol] = boat;                                   //Placing boat top direction    
            board[shipRow-2][shipCol] = boat;
            board[shipRow-3][shipCol] = boat; 
            }
            break;
        case 4:                                                                 //4 represents bottom direction 
            
            if((shipRow+1 > 10 )||(board[shipRow+1][shipCol]==boat)||(shipRow+2 > 10 )||(board[shipRow+2][shipCol]==boat)||(shipRow+3 > 10 )||(board[shipRow+3][shipCol]==boat)){
                i--;
            }
            else{
                board[shipRow][shipCol] = boat;   
                board[shipRow+1][shipCol] = boat;                                   //Placing boat bottom direction     
                board[shipRow+2][shipCol] = boat;
                board[shipRow+3][shipCol] = boat;
            }
                break;
    }
      
  }
}











    



