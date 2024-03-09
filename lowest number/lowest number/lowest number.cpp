#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int size;
	cin >> size;
	int min;
	int position = 3;
	int* arr=new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	min = arr[0];
	position = 1;
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			position = i + 1;
		}
	}
	cout << min << " " << position << endl;
}