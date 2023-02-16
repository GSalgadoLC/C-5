/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <cmath>     //For the SQRT function
#include <cstdlib>   //Exit function
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
   
   int numIn;
   string msg;
   
   cin>>numIn;
   
   cout<<"Input a number to test if Prime."<<endl;
   
   

   msg=isPrime(numIn)?" is prime.":" is not prime.";
   cout<<numIn<<msg;


 return 0;
}


bool isPrime(int numIn){
    //Map/Process the Inputs -> Outputs
    if(numIn<=1){
        return false;
    }
    
    int nsqrt=sqrt(numIn);
    
    for(int i=2;i<=nsqrt;i++){
        if(numIn%i==0){
            return false;
        }
    }
    
    return true;
}