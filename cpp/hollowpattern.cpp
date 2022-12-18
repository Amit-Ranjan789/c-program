#include <iostream>
using namespace std;
//problem based on hollow pattern of rectangular
int main()
{
    int m, n;//we take two input as n,m (matrix arrangement);
    cin >> n>>m;
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || j == m || i == n || j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}