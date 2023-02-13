
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on February 10
 * Purpose: Project 2 Version 1
 */

//System Libraries
#include <iostream> //I/O library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions
const int columns = 10;
const int rows = 10;
//Function Prototypes
void disWelcome(string);
void disRules();
void disReady(char);

void initBoard(int [][columns]);
void printBoard(int [][columns]);




//void disReadyExample(char, char, int [],int, string [], int);


int main(int argc, char** argv) {
  
    char keyIn;
    char sp;
    string name;
    
    int board[rows][columns];
    
  
  
   
    disWelcome(name);
    disRules();
    disReady(keyIn);
    
    
    initBoard(board);
    printBoard(board);

    
    
    
    
    
    

    
    return 0;
}

void disWelcome(string name){
    
        cout<<"\n\tWelcome To BATTLESHIP";
        cout<<"\n\tPlease enter your name...\t";
        cin>>name;
        cout<<"\n\tHello Captain "<<name;
      
}

void disRules(){
    cout<<"\n\n\t\tRules of the game:";
    cout<<"\n\t\t\t+ Each player has a fleet of 5 ships";
    cout<<"\n\t\t\t\t- Carrier 5 Holes, BattleShip 4 Holes, Cruiser 3 Holes,";
    cout<<"\n\t\t\t\t- Submarine 3 Holes and Destroyer 2 Holes";
    cout<<"\n\t\t\t+ Place each ship in any horizontal or vertical position but not diagonally";
    cout<<"\n\t\t\t+ Do not place a ship so that holes overlap with another";
    cout<<"\n\t\t\t+ Do not change position of ships once the game has begun";
    cout<<"\n\n\t\tHow to play:";
    cout<<"\n\t\t\t+ You will call your shot alphabet then number";
    cout<<"\n\t\t\t\t- Example: D 4";
    cout<<"\n\t\t\t+ If you hit a ship you will see BOOM, and your opponent will tell you what ship you hit";
    cout<<"\n\t\t\t\t- Example: BOOM, you have hit my Destroyer!";
    cout<<"\n\t\t\t+ If you miss, your opponent will tell say MISS";
    cout<<"\n\t\t\t\t- Example: MISS";
    cout<<"\n\t\t\t+ The game will automatically keep count of your Hits AND Misses";
}

void disReady(char keyIn){
    
    cout<<"\n\n\tReady? Enter any key to begin...\t";
    cin>>keyIn;
    
}



void initBoard(int board[][columns]){
    
    
    for( int i = 0; i < rows; i++){
        
        
        for (int j = 0; j < columns; j++){
            
            
            board[i][j] = 0;
        }
        
        
    }
    
}


void printBoard(int board[][columns]){
    
    
    for( int i = 0; i < rows; i++){
        
        
        for (int j = 0; j < columns; j++){
            
            
            cout<<board[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
}













/*

  string abcRow[7] = {"A","B","C","D","E","F","G"};

 char miss, hit, empty;
    miss = 'O';
    hit = 'X';
    empty = '-';
    

*/
























































/*
void disReadyExample(char keyIn,char empty, int numCol[],int rows, string abcRow[], int columns){
    
    
    
    
    cout<<"\n\t    Your Board\t\t   Your Fleet\n\n\t";
    for (int i = 0; i < 9 ; i++ ){
        cout<<numCol[i]<<" "; 
    }
    cout<<endl;
    
    for ( int i = 0; i < rows ; i++){
        cout<<"\t"<<abcRow[i]<<" ";
        for (int i = 0; i < columns; i++){
            cout<<empty<<" ";
            
        }
        
        if (i == 0){
            cout<<"\t Carrier"<<setw(14)<<"* * * * *"<<endl;
        }
        else if (i == 1){
            cout<<"\t BattleShip"<<setw(9)<<"* * * *"<<endl;
        }
        else if (i == 2){
            cout<<"\t Cruiser"<<setw(10)<<"* * *"<<endl;
        }
        else if (i == 3){
            cout<<"\t Submarine"<<setw(8)<<"* * *"<<endl;
        }
        else if (i == 4){
            cout<<"\t Destroyer"<<setw(6)<<"* *"<<endl;
        }
        else{
        cout<<endl;
        }
    }
    
    
}
*/
