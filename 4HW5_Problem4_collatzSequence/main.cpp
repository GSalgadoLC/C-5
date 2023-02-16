/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int numIn;
    
    
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>numIn;
    
  
    cout<<"Sequence start of "<<numIn<<" cycles to 1 in "<<
            collatz(numIn)<<" steps";
    

    

    return 0;
}


int collatz(int numIn){
    
        int steps = 1;
        while (numIn!= 1){
            
            if (numIn % 2 ==0){
                numIn = numIn / 2;
            }
            else{
                numIn = 3 *numIn + 1;
            }
            
            steps++;
        }
    
    return steps;
}

