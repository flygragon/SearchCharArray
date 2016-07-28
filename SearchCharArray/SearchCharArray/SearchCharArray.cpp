// SearchCharArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"SearchCharArray.h"
using namespace std;

int main()
{
	char m[20], n[20];
	cin >> m >> n;
	char* arr1 =m, *arr2 =n;
	SearchCharArray s;
	cout << s.getPosition(arr1, arr2) << '\n';
    return 0;
}

