//in số chính phương
#include"pch.h"
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	int t, n;
	while (1)
	{
			cout << "nhap so tu nhien n>0:";
			cin >> n;
			if (n > 0) break;
	}
	for (int i = 1; i <= n; i++)
	{
		t = sqrt(i);
		if (pow(t, 2) == i)
		{
			cout << i<<" ";
		}
		
	}
return 0;
}