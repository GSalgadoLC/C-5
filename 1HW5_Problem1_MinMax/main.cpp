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
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2, num3 ;
    int min, max;
    
    cin>>num1>>num2>>num3;
    min = 0;
    max = 0;
    
    minmax(num1,num2,num3, min, max);
    
    
    return 0;
}




void minmax(int num1,int num2,int num3,int &min,int &max){
    
    if ((num1> num2) && (num1 > num3)){
        max = num1;
    }
    else if ((num2 > num1) && (num2 > num3)){
        max = num2;
    }
    else {
        max = num3;
    }
    
    
    
    
    if ((num1 < num2) && (num1 < num3)){
        min = num1;
    }
    else if ((num2 < num1) && (num2 < num3)){
        min = num2;
    }
    else {
        min = num3;
    }
    
    
    
    
    
    cout<<"Input 3 numbers"<<endl;
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    
 
}


