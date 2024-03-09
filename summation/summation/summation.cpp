#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
int main()
{//#pragma region summation task

int  size;
cin >> size;
long long sum = 0;
for (int i = 1; i <= size; i++) {
	int numbers;
	cin >> numbers;

	sum = sum + numbers;

}
cout << abs(sum);
}

