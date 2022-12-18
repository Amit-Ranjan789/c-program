#include<iostream>
#include<iomanip>
using namespace std;
//perimeter of rectangle 
double   perimeter(double  l,double  c){
    
double result =2*(l+c);
 return result;
}
//perimeter of circle 
double   perimeterofCircle (double  l){
    
double result =2*(3.14*l);
 return result;
}


int main (){

// double n ,m;
// cout<<"Length of rectangle=";
// cin>>n;
// cout<<"breadth of rectangle=";
// cin>>m;
// cout<<"perimeter of rectangle="<<perimeter(n,m)<<endl;

double n;
cout<<"Enter the radius Value:=";
cin>>n;
cout<<"Perimeter of circle :="<<perimeterofCircle(n);



}