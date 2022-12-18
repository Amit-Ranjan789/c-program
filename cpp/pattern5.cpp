#include <iostream>
using namespace std;
/*

n=9

123456789
234567891
345678912
456789123
567891234
678912345
789123456
891234567
912345678


*/
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}