#include<iostream>
using namespace std;

int n;
int main()
{
	cin >> n;
	if (n % 2 == 0)
	{
		cout << (n / 2 + 1) * (n / 2 + 1) << endl;
	}
	else
	{
		cout << ((n+1)/2+1)*((n+1)/2+1)-((n+1)/2)-1 << endl;
	}


	system("pause");
	return 0;
}