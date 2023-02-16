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
    int ns;
    
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>numIn;
  
    ns = collatz(numIn);  
  
    cout<<"Sequence start of "<<numIn<<" cycles to 1 in "<<
            ns<<" steps";
    

    

    return 0;
}


int collatz(int numIn){
    
        int steps = 1;
        while (numIn!= 1){
            cout<<numIn<<", ";
            if (numIn % 2 ==0){
                numIn = numIn / 2;
            }
            else{
                numIn = 3 *numIn + 1;
            }
            
            steps++;
        }
        cout<<"1"<<endl;
        
    
    return steps;
}

