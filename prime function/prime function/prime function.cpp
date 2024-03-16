#include <iostream>
#include <iomanip>
//#include <bits/stdc++.h>
using namespace std;

bool prime(int num)
{
    int x = sqrt(num);

    int flag = 0;
    for (int i = 2; i <= x; i++)  //6//6== 5 4 3 2 ==1
    {
        if (num % i == 0) {//6%2=0 .. 6%3==0
            flag = 1;
            break;
        }
    }
    return flag; //1 ==> return value from falg and store in function prime 

}
int main()

{
    int size;  //3
    cin >> size; ///3 
    while (size--) //3  2  1 
    {
        int num;// 6  2 4     // yes // no // no
        cin >> num;
        if (num == 1)
        {
            cout << "NO" << endl;
            continue;  //ignore 
        }
        int temp = prime(num);//1 => num NOT prime  .. 0 => num is prime
        if (temp == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
