#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
using namespace std;
//#include<bits/stdc++.h>
void average(int size) {
	//3	

	double sum = 0;
	double sol;          //3
	for (int i = 0; i < size; i++) {//0 1 2 ==> 3
		double num;
		cin >> num; // ==> 1.0 2.0 5.0 ==>8.0


		sum += num;//0+1.0 => 1 + 2.0=>3 + 5.0=>8.0
	}

	sol = sum / size;
	cout << setprecision(8) << sol;


}
int main()
{
	int size; //3
	cin >> size;
	average(size);



	return 0;

}