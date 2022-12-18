#include<iostream>
using namespace std;
//for finding sum of a digit ;
int main(){
    int n;
    cin>>n;
    int sum =0;
    while (n>0)
    {
        sum+=(n%10);
        n/=10;
    }
   cout<<sum<<endl; 
}