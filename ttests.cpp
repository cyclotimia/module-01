#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t = 0;
	cout << "Enter numbr of tests: ";
	cin >> t;
	for (int i = t+1; i > 0, --i;)
	{
		int a = 0;
		int b = 0;
		cout << "Enter a and b:";
		cin >> a >> b;
		cout << sqrt(a)+sqrt(b) << endl;
	}
	
	return 0;
}