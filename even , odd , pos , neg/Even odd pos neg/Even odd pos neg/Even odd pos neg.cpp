
#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int even_unm = 0;
    int odd_num = 0;
    int pos_num = 0;
    int neg_num = 0;
    for (int i = 0; i < n; i++) {

        cin >> x;

        if (x % 2 == 0)
            even_unm = even_unm + 1;

        if (x % 2 != 0)
            odd_num = odd_num + 1;

        if (x > 0)
            pos_num = pos_num + 1;
        if (x < 0)
            neg_num = neg_num + 1;

    }
    cout << "Even: " << even_unm << endl;
    cout << "Odd: " << odd_num << endl;
    cout << "Positive: " << pos_num << endl;
    cout << "Negative: " << neg_num << endl;

    return 0;
}