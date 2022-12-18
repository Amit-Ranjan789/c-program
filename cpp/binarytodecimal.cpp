#include <iostream>
using namespace std;
/*
in this program we convert the binary number to decimal 

as we know binary value in 2's power;
as we know decimal value in 10's power;




*/
int main(){
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while (n>0)
    {
        int lastDigit=n%10;
        ans+=lastDigit*power;
        power*=2;
        n/=10;

    }
    cout<<ans<<endl;
    
}