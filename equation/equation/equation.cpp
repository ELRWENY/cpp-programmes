#include <iostream>
#include <iomanip>
//#include <bits/stdc++.h>
using namespace std;

long long equation(int x, int n)
{

    //5,,,,5

    long long sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += pow(x, i);                 //25 //5^4

        //25

    }
    return sum;
}
int main()

{
    int x;
    int n;
    cin >> x >> n;
    cout << equation(x, n);


    return 0;
}
