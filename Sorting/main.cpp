#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void filAray(int[], int);       //Fill an array with 2 digit numbers
void prntAry(int [], int, int); //Print an array with number of cols
void swap1(int &, int&);         //Added memory swap
void swap2(int &, int&);        //Passed through walls
void smlPos(int[],int,int);     //Find smallest and swap with position
void mark(int[],int);
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    
    const int SIZE = 100;
    int array[SIZE];
    
    
    filAray(array,SIZE);
    
    cout<<"The original unsorted array\n"<<endl;
    prntAry(array,SIZE,10);
    
 
   swap1(array[0],array[99]);
   swap2(array[1],array[98]);
  
   cout<<endl<<endl<<"The swapped unsorted array\n"<<endl;
   prntAry(array,SIZE,10);
    
    
    smlPos(array,SIZE,0);
    smlPos(array,SIZE,1);
    cout<<endl<<endl<<"Smallest element\n"<<endl;
    prntAry(array,SIZE,10);
    
    
    mark(array,SIZE);
    cout<<endl<<endl<<"SORTED ARRAY\n"<<endl;
    prntAry(array,SIZE,10);
	return 0;
}

void mark(int a[],int n){
    for ( int i = 0; i<n-1; i++){
        smlPos(a,n,i);
    }
}


void smlPos(int a[],int n,int pos){
    for(int i = pos; i < n; i++){
        if (a[pos]>a[i])swap1(a[pos],a[i]);
    }
}   

void swap1(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    
}

void swap2(int &a, int &b){
    a = a^b;
    b = a^b;
    a=a^b;
}



void prntAry(int a[], int n, int perLine){
    for ( int i = 0; i < n; i++){
        cout<<a[i]<<" ";
        if (i%perLine==(perLine-1))cout<<endl;
    }
}

void filAray(int a[], int n){
    for ( int i = 0;i<n;i++){
        a[i]=rand()%90+10; //10-99
    }
}