#include <iostream>
#include <iomanip>
//#include <bits/stdc++.h>
using namespace std;



void swap(int x, int y) {
    cin >> x >> y;
    int temp = x;
    x = y;
    y = temp;
    cout << x << " " << y;
}
int main()

{

    swap(1, 2);


    return 0;
}
