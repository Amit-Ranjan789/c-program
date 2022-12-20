#include <iostream>
using namespace std;
int main() {
int i;
  cout<<"number of chances"<<endl;
  cin>>i;
  for(int j=1;j<=i;j++){
    int a;
    cout<<"Enter your lucky number:"<<endl;
    cin>>a;
    // int b;
    
    if(a==j){
      cout<<1+(rand()%10);
      cout<<"number of chances "<<a<<endl<<"hurrah! you won "<<endl;
      break;
      
    }
    else{
      cout<<j<<" is not match with "<<a<<"  try again:"<<endl;
    }
  } 
}