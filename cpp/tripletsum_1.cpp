#include <iostream>
using namespace std;
int main()
{

/*
   //{3,4,5,1,6,9}
   //i=0 j=1 k=2
   //tripletsum=10;
   array[i]+array[j]+array[k]
   = array[0]+array[1]+array[2]
   =3 +4 +5=10
   12!=10 
   $#  k value is increasing and rest are constant till loop become false 
    i=0 j=1 k=2 //+1 in k
    i=0 j=1 k=3//+1 in k
    i=0 j=1 k=4 //+1 in k
    i=0 j=1 k=5 //+1 in k
    i=0 j=1 k=6 // innermost loop will false so move to uppermost of that that is j loop 
     intialize value 

    i=0 j=1 k=6// j is +1 
    i=0 j=2 (k=j+1=2+1=3) //+1 in k
    i=0 j=2 k=4// +1 in k
    i=0 j=2 k=5// +1

    i=0 j=2 k=6// in k size reached so loop terminate from k loop
    i=0 j=2+1 k=j+1// increase the j value by +1
    i=0 j=3 k=4 // +1 in k
    i=0 j=3 k=5 // +1 in k
    
    i=0 j=3 k=6// in k size reached so loop terminate from k loop
    i=0 j=3+1 k=j+1
    i=0 j=4 k=5

    i=0 j=4 k=6
    i=0 j=4+1 k=j+1// in k and j reached the size value so it will out from both innnermost loop 
    i=0 j=5 k=6

    i=0+1 j=i+1 k=j+1
    i=1 j=2 k=3
    i=1 j=2 k=4
    i=1 j=2 k=5

    i=1 j=2+1 k=j+1
    i=1 j=3 k=4
    i=1 j=3 k=5

    i=1 j=3+1 k=j+1
    i=1 j=4 k=5

    i=1 j=5 k=6 // in k and j reached the size value so it will out from both innnermost loop 
    i=1+1 j=i+1 k=j+1
    i=2 j=3 k=4
    i=2 j=3 k=5

    i=2 j=3+1 k=5
    i=2 j=5 k=6

    i=2+1 j=i+1 k=j+1
    i=3 j=4 k=5 
    i=3 j=5 k=6

    i=3+1 j=5 k=6
    i=5  // all loop become false 
    






    






    





   next iteration 
   //all values are increase by one 
   //i=1 j=2 k=3
   array[i]+array[j]+array[k]
   array[1]+array[2]+array[3]
   => 4 +5 +1 =10 
   => 10 =10

   we found the matched of a triplet

   Again !!
   i=2 j=3 k=4
   array[i]+array[j]+array[k]
   => array[2]+array[3]+array[4]
   => 5+1+6=10
   => 12!=10

   i=0 j=3 k=4
   array[i]+array[j]+array[k]
   => array[i]+array[j]+array[k]
   => array[0]+array[3]+array[4]
   => 3+ 1 +6 = 10
   => 10 =10
     we got second triplet value whose sum is 10;
   
   

   









*/




    int array[] = {3, 4, 5, 1, 6, 9};
    int targetsum = 10;
    int size = 6;
    int triplet = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (array[i] + array[j] + array[k] == targetsum)
                {
                    triplet++;
                }
            }
        }
    }
    cout << triplet << endl;
}