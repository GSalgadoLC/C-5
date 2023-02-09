#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void filAray(int[], int);       //Fill an array with 2 digit numbers
void prntAry(int [], int, int); //Print an array with number of cols
void mark(int[],int);
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    
    const int SIZE = 100;
    int array[SIZE];
    
    
    filAray(array,SIZE);
    
    cout<<"The original unsorted array\n"<<endl;
    prntAry(array,SIZE,10);

    mark(array,SIZE);
    cout<<endl<<endl<<"SORTED ARRAY\n"<<endl;
    prntAry(array,SIZE,10);
	return 0;
}

void mark(int a[],int n){
    for ( int j = 0; j<n-1; j++){
         for(int i = j+1; i < n; i++){
            if (a[j]>a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            
            
            }
        }
    }
}


void smlPos(int a[],int n,int pos){
    for(int i = pos+1; i < n; i++){
        if (a[pos]>a[i]){
            int temp = a[pos];
            a[pos] = a[i];
            a[i] = temp;
            
            
        }
    }
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