
/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on January 15, 2023, 11:50 PM
 * Purpose: Gaddis 9th edition chapter 4 problem 8 sorting names
 */

//System Libraries
#include <iostream> //I/O library

using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    int numIn,temp,isEven;
    char pat;
    
    cin>>numIn>>pat;
    
    isEven = numIn%2;
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    
        
    
    if ((numIn>=1)&&(numIn<=50)){
    
        if (( pat == 'x')||(pat == 'X')){
            
            
            if (isEven != 0){
            
             for ( int row = numIn; row != 0; row--){
                    for (int col = numIn; col != 0; col--){
                        if (row==col){
                            cout<<row;
                        }
                        else if ((row + (col-1)) == numIn){
                            cout<<col;
                        }
                        else {
                             cout<<" ";
                        }
                    }
                    cout<<endl;            
                }
            }
            else{
            
                
                
                
                for ( int row = 1; row <= numIn; row++){
                        for (int col = 1; col <= numIn; col++){
                            if (row==col){
                                cout<<col;
                            }
                            else if ((row + (col-1)) == numIn){
                                cout<<col;
                            }
                            else {
                                 cout<<" ";
                            }
                        }
                        cout<<endl;            
                    }

            
            
            
            
            
            }
                
                
                
                
        }
        else if (( pat == 'b')||(pat == 'B')){
            

                
         
                
                for ( int row = numIn; row != 0; row--){
                    
                 
                    for (int col = numIn; col != 0; col--){
                      
                      
                        if (col==row){
                            cout<<col;
                        
                        }
                        else{
                           cout<<" ";
                          
                        }
                        
                        
                    }
                    
                    
                    cout<<endl;
                  
                    
                }
                    
       }
        

        
        else if (( pat == 'f')||(pat == 'F')){
              
        
            
                for ( int row = numIn; row != 0; row--){
                 
                    
                    for (int col = numIn; col != 0; col--){
                      
                      
                        if ((row + (col-1)) == numIn){
                            cout<<row;
                        
                        }
                        else{
                           cout<<" ";
                          
                        }
                        
              
                    }
                    
                    
                    cout<<endl;
                  
                    
                }
                
                
                
                
        }
        else
            cout<<"Pattern not supported"<<endl;
    
    }
    else
        cout<<"Number not in range"<<endl;
    
    
    
    
    return 0;
}


