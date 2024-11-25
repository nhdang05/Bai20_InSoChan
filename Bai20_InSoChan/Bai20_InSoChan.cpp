// Bai20_InSoChan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "In So Chan\n";
	int so, tongchan = 0, tongle = 0, tong = 0;
	cout << "Nhap so: "; cin >> so;
	for (int i = 1; i < so; i++)
	{
		tong += i; 
		if (i % 2 == 0)
		{
			cout << i << " ";
			tongchan += i;
		}
		else {
			tongle += i;
		}
	}
	cout << "\n Tong cac so:" << tong;
	cout << "\n Tong cac so chan:" << tongchan;
	cout << "\n Tong cac so le:" << tongle;


	return 0;

}
