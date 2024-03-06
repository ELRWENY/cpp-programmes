
#include <iostream>
using namespace std;
int main()
{
    long long x, y, z, d;
    cin >> x >> y >> z >> d;

    if (x + y * z == d)
        cout << "YES";
    else if (x + y - z == d)
        cout << "YES";
    else if (x - y * z == d)
        cout << "YES";
    else if (x - y + z == d)
        cout << "YES";
    else if (x * y - z == d)
        cout << "YES";
    else if (x * y + z == d)
        cout << "YES";
    else 
        cout << "NO";
}
