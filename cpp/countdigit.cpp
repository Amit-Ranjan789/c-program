#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the Digit:";
    cin>>n;
    int count=0;
    while (n>0)
    {
        count++;
        n/=10;
    }
    cout<<"number of Digit:"<<count<<endl;
}