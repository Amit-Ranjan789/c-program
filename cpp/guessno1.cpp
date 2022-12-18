#include<iostream>
using namespace std;
/*
finally i made one code for guessing through do while loops.
*/
int main(){
    int n,m;
    cout<<"Your fav number:";
   cin>>m;
    do{
         cout<<"Enter the Number:";
         cin>>n;
         if(n==m){
            cout<<"You win"<<endl;
            break;
         }
         else{
            cout<<"Try again!"<<endl;
         }
    }while(n!=0);
    cout<<"Hope you like this ";

}