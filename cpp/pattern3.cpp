#include<iostream>
using namespace std; 
/*
 trinlular pattern in reverse ******
                               *****
                               **** 
                               ....... like that


*/
int main(){
    int a,b;
    cin>>a>>b;
    for (int i=1;i<=a;i++){
        for(int j=1;j<=b-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}