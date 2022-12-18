#include<iostream>
#include <vector>
using namespace std;
int main(){
    // int arr[]= {1,2,3,4};
    // cout<<arr[2];
    vector<int>v;
//    for loop
   for (int i=0;i<5;i++)
   {
    int element;
    cin>>element;
    v.push_back(element);

   }
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    

   }
   cout<<endl;

   //for each loops in vector 
for(int ele:v){
cout<<ele<<" ";
}
   cout<<endl;


//while loop in vector
int index=0;
while (index<v.size()){
    cout<<v[index]<<" ";
    index++;
}
  
}
