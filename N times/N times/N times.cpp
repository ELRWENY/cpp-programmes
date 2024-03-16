#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
using namespace std;
//#include<bits/stdc++.h>


void print(int times, char c) { // 5
	for (int i = 1; i <= times; i++) {// 1 2 3 4 5
		cout << c << " ";
	}
}
int main()
{


	int lines; // 5
	cin >> lines;

	while (lines--) { // 5 4 3 2 1
		int times;
		cin >> times;
		char c;
		cin >> c;
		print(times, c);
		cout << "\n";
	}



	return 0;

}



