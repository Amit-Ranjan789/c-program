#include <iostream>
using namespace std;
int LargestElementIndex(int array[], int size)
{
    int max = INT16_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int SecondLargestElement(int array[],int size){
    int max =INT16_MIN;
    int secondmax =INT16_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>secondmax &&array[i]!=max){
            secondmax=array[i];
        }
    }
    return secondmax;
}









int main()
{
    int array[] = {1, 3, 5, 2, 7, 11, 9,11,11};
    int n=9;
//     int LargestElement = LargestElementIndex(array, n);
//     cout << array[LargestElement] << endl;
//     // array[LargestElement]=-1;
//     int LargestNumber=array[LargestElement];
//  for (int i=0;i<n;i++){
//     if(array[i]==LargestNumber){
//         array[i]=-1;
//     }
//  }


//     int SecondLargest=LargestElementIndex(array,n);
//     cout<<array[SecondLargest]<<endl;
cout<<SecondLargestElement(array,n);
// cout<<SecondLargestElement(array,n);





}

//1, 3, 5, 2, 7, 11, 9
//Largestelement =5 ==-1;
//1, 3, 5, 2, 7, -1, 9;
//Secondlargest=6 ==-1;
