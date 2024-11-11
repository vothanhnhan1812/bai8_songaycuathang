// bai8_songaycuathang.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int thang;
	cout << "nhap thang"; cin >> thang;
	switch (thang)
	{
	case 1:
		cout << "31 ngay\n";
		break;
	case 2:
		cout << "29 ngay\n";
		break;
	case 3:
		cout << "31 ngay\n";
		break;
	case 4:
		cout << "30 ngay\n";
		break;
	case 5:
		cout << "31 ngay\n";
		break;
	case 6:
		cout << "30 ngay\n";
		break;
	case 7:
		cout << "31 ngay\n";
		break;
	case 8:
		cout << "31 ngay\n";
		break;
	case 9:
		cout << "30 ngay\n";
		break;
	case 10:
		cout << "31 ngay\n";
		break;
	case 11:
		cout << "30 ngay\n";
		break;
	case 12:
		cout << "31 ngay\n";
		break;
	default:
		cout << "khong phai thang";
		break;
	}
	return 0;
}

