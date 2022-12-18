#include<iostream>
using namespace std;
/*
n=9
m=9
123456789
1       9
1       9
1       9
1       9
1       9
1       9
1       9
123456789
*/
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==m||j==n){
                cout<<j;
            }
            else{
                cout<<" ";
            }
          
        }
          cout<<endl;
    }

}