#include<iostream>
using namespace std;
int square(int n){
 int    sqr=n*n;
    return sqr;
}
double circumference(double a){
    double circum=2*3.14*a;//2*pi*r
    return circum;
}
double area(double b){
    double result=3.14*b*b;
    return result;
}
bool vote(int age){
    if(age>=18){
        return true;
    }else{
        return false;
    }
}
int main(){
int m;
cin>>m;
// for getting square of first natural number 
// for(int i=0;i<=m;i++){
//     cout<<"Square of Number:"<<square(i)<<endl;
// }
//area  and Circumference of a circle
// cout<<"Circumference:"<<circumference(m)<<endl;
// cout<<"Area:"<<area(m)<<endl;

//casting vote for new elected member of the year
if(vote(m)==true){
    cout<<"yes! you can vote.";
}else{
    cout<<"no ! you cannot.";
}





}