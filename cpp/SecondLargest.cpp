#include <iostream>
using namespace std ;
int SecondLargestNumber(int array[],int size){
    int max =INT16_MIN;
    int secondmax =INT16_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>secondmax && array[i]!=max){
            secondmax=array[i];
        }
    }
    return secondmax;
}

int main (){

int array[]={1,2,5,3,2,9,11,7,6};
int n=9;
int Result=SecondLargestNumber(array,n);
cout<<"SecondLargestnumber:="<<Result<<endl;
// 1,2,5,3,2,9,11,7,6
// largest number =11
//



}