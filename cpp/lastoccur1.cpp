#include <iostream>
#include <vector>
/*
Example 1
4
4
5
7
8
9
Enter x:8
4
*/
using namespace std;
int main()
{

   vector<int> v(6);
   // for lops
   for (int i = 0; i < 6; i++)
   {

      cin>> v[i];
   }
   cout << "Enter x:";
   int x;
   cin >> x;

   int occurence = -1;
   // for (int i = 0; i < v.size(); i++)
   // {
   //    if (v[i] == x)
   //    {
   //       occurence = i;
   //    }
   // }
   for (int i = v.size()-1; i >=0; i--)
   {
      if (v[i] == x)
      {
         occurence = i;
         break;
      }
   }
   cout << occurence;
   // return 0;
}
