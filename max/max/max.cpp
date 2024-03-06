#include <iostream>
using namespace std;
int main()
{
	int x;
	int n;
	int max = 0;
	cin >> n;
	for (int i=0;i< n; i++) {
		cin >> x;
		if (x > max)
			max = x;
	}
	cout << max;




}

