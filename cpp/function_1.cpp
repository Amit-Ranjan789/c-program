#include<iostream>
using namespace std ;
int addValue(int a,int b){
   int  sum =a+b;
    return sum;
}
int addValue(int a,int b,int c){
   int  sum =a+b+c;
    return sum;
}
double addValue(double a,double b){
   double  sum =a+b;
    return sum;
}
int print( int a,int b=0,int c=9){
   int sum= a+b+c;
    return sum ;
}


int main(){
    // int x=5;
    // int y=7;
    // cout<<addValue(x,y);
    // cout<<addValue(5,7,8);
    // cout<<addValue(5.3,7.3);
 int a=3456;
 int b=a%10;
 int c=a/10;
 cout<<b;
 cout<<c;
 


    

}
