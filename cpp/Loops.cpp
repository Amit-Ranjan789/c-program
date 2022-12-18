#include<iostream>
using namespace std;
int main(){
    int n;// natural number as a input 
    cout<<"n:";
    cin>>n;
int sum=0;
int i=1;//loop variable
while (i<=n)//condition
{
   sum+=i;
   i++;//updating loop variable5
}
cout<<"Sum:"<<sum<<endl;




    return 0;

}