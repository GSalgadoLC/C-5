/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
  
    
    
    
    unsigned short number;
    int ones,tens,hundos,thous,spCase;
    string preOne,preTen,preHun,preThous,spCaseD;
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    spCase = number%100;
    
    //Calculate the 1000's, 100's, 10's and 1's
    thous = (number/1000)%10;
    hundos = (number/100)%10;
    tens = (number/10)%10;
    ones = (number/1)%10;
    
    
    
    
    
    if ((spCase >=10)&&(spCase<=19)){
            
           
        
    switch(thous){
            case 0: 
                
                break;
            case 1: 
                preThous = "One Thousand ";
                
                break;
            case 2: 
                preThous = "Two Thousand ";
                
                break;
            case 3: 
                preThous = "Three Thousand ";
               
                break;
            
            
        }
        switch(hundos){
            case 0: 
                
                break;
            case 1: 
                preHun = "One Hundred ";
                
                break;
            case 2: 
                preHun = "Two Hundred ";
                
                break;
            case 3: 
                preHun = "Three Hundred ";
               
                break;
            case 4: 
                preHun = "Four Hundred ";
                break;
            case 5: 
                preHun = "Five Hundred ";
                
                break;
            case 6: 
                preHun = "Six Hundred ";
                
                break;
            case 7: 
                preHun = "Seven Hundred ";;
               
                break;
            case 8: 
                preHun = "Eight Hundred ";
                
                break;
            case 9: 
                preHun = "Nine Hundred ";
               
                break;
            
        }
        switch(spCase){
            case 0: 
                
                break;
          
            case 10: 
                spCaseD = "Ten ";
                break;
            case 11: 
                spCaseD = "Eleven ";
                
                break;
            case 12: 
                spCaseD = "Twelve ";
                
                break;
            case 13: 
                spCaseD = "Thirteen ";
               
                break;
            case 14: 
                spCaseD = "Fourteen ";
                break;
            case 15: 
                spCaseD = "Fifteen ";
                
                break;
            case 16: 
                spCaseD = "Sixteen ";
                
                break;
            case 17: 
                spCaseD = "Seventeen ";;
               
                break;
            case 18: 
                spCaseD = "Eighteen ";
                
                break;
            case 19: 
                spCaseD = "Nineteen ";
               
                break;
            
        } 
        cout<<preThous<<preHun<<spCaseD<<"and no/100's Dollars"<<endl;
    }
     else{
          
    

        switch(thous){
            case 0: 
                
                break;
            case 1: 
                preThous = "One Thousand ";
                
                break;
            case 2: 
                preThous = "Two Thousand ";
                
                break;
            case 3: 
                preThous = "Three Thousand ";
               
                break;
            
            
        }
        switch(hundos){
            case 0: 
                
                break;
            case 1: 
                preHun = "One Hundred ";
                
                break;
            case 2: 
                preHun = "Two Hundred ";
                
                break;
            case 3: 
                preHun = "Three Hundred ";
               
                break;
            case 4: 
                preHun = "Four Hundred ";
                break;
            case 5: 
                preHun = "Five Hundred ";
                
                break;
            case 6: 
                preHun = "Six Hundred ";
                
                break;
            case 7: 
                preHun = "Seven Hundred ";;
               
                break;
            case 8: 
                preHun = "Eight Hundred ";
                
                break;
            case 9: 
                preHun = "Nine Hundred ";
               
                break;
            
        }
        switch(tens){
            case 0: 
                
                break;
            case 1: 
                preTen = "One Hundred ";
                
                break;
            case 2: 
                preTen = "Twenty ";
                
                break;
            case 3: 
                preTen = "Thirty ";
               
                break;
            case 4: 
                preTen = "Forty ";
                break;
            case 5: 
                preTen = "Fifty ";
                
                break;
            case 6: 
                preTen = "Sixty ";
                
                break;
            case 7: 
                preTen = "Seventy ";;
               
                break;
            case 8: 
                preTen = "Eighty ";
                
                break;
            case 9: 
                preTen = "Ninety ";
               
                break;
        } 
        switch(ones){
            case 0: 
                
                break;
            case 1: 
                preOne = "One ";
                
                break;
            case 2: 
                preOne = "Two ";
                
                break;
            case 3: 
                preOne = "Three ";
               
                break;
            case 4: 
                preOne = "Four ";
                break;
            case 5: 
                preOne = "Five ";
                
                break;
            case 6: 
                preOne = "Six ";
                
                break;
            case 7: 
                preOne = "Seven ";;
               
                break;
            case 8: 
                preOne = "Eight ";
                
                break;
            case 9: 
                preOne = "Nine ";
               
                break;
            case 10: 
                preOne = "Ten ";
               
                break;
        }

      
        cout<<preThous<<preHun<<preTen<<preOne<<"and no/100's Dollars"<<endl;
     }
    

    //Exit
    return 0;
}