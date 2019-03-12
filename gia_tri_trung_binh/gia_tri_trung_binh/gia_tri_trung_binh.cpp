//tính tổng và giá trị trung bình của dãy số nguyên dương
#include "pch.h"
#include<iostream>
using namespace std;
int main() {
	int n, i=0, s = 0;
	float trungBinh;
	while (1) 
	{
		cout << "nhap so nguyen duong n:";
		cin >> n;
		while (n < 0)
		{
			cout << "nhap lai: ";
			cin >> n;
		}
		s += n;
		if (n == 0) break;
		i++;
	
	}
	cout << "tong la:" << s << endl;
	trungBinh =(double)s / i;
	cout << "gia tri trung binh la:" << trungBinh;
return 0;
}