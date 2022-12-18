#include<iostream>
using namespace std;/*

n=6//column
m=4//rows
123456
123456
123456
123456


*/
int main(){
int n,m;//m stands for rows and  n stands for column;

cin>>n>>m;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        cout<<j;
    }
    cout<<endl;
}


}