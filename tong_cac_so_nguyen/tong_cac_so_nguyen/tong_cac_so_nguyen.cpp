//tính tổng các số nguyên từ M đến N(M<N)
#include"pch.h"
#include<iostream>
using namespace std;
int main() {
	int m, n,s=0;
	cout << "nhap so nguyen M:";
	cin >> m;
	while (1) 
	{
		cout << "nhap so nguyen N>M: ";
		cin >> n;
		if (m < n) break;
	}
	for (int i = m; i <= n; i++) 
	{
		s += i;
	}
	cout << "tong cac so tu M den N la:" << s;
	return 0;
}