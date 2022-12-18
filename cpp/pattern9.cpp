#include<iostream>
using namespace std;
/*
n=6
1
12
123
1234
12345
123456



*/
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

}