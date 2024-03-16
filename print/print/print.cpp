#include <iostream>
#include <iomanip>
using namespace std;
void  sum(int n)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i != n)
        {
            cout << " ";
        }

    }

}
int main()
{
    sum(1);
    return 0;

}
