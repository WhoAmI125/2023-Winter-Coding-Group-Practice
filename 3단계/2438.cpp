#include <iostream>
using namespace std;

int main()
{
	int num, i,j;
	cin >> num;
	
	for(i=0; i<num; i++)
	{
		for(j=0; j<=i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
