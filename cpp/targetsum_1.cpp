#include <iostream>
using namespace std;
int main()
{
/*

    //3,4,6,7,1
    //targetsum=13
    //i=0 j=1
    //array[i]=0th element =3
    //array[j]=1th element =4
array[i]+array[j]!=targetsum;
7!=13;

next loops
i=1 j=2
array[i]+array[j]=targetsum
4+6!=13;

//next iteration
i=2 j=3
array[i]+array[j]=13
array[2]+array[3]=13
6+7=13;

"Hurrah" !!we got it ! 






*/


    int array[] = {3, 4, 6, 7, 1};
    int targetsum = 13;
    int size = 5;
    int pairs = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == targetsum)
            {
                pairs++;
            }
        }
    }
    cout << pairs << endl;
}