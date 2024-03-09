#include <iostream>
using namespace std;
int main()
{
	int size;
	cin >> size;
	int check = 0;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int searcher;
	cin >> searcher;
	for (int i = 0; i < size; i++) {
		if (arr[i] == searcher) {
			cout << i << endl;
			check = 1;
			break;
		}
	}
	if (check == 0) {
		cout << -1 << endl;
	}
}