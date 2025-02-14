#include <iostream>
#include <Windows.h>
#include "Prime.h"
using namespace std;

void Prime::setValue(int unum)
{
	num = unum;
}

bool Prime::isValid()
{
	return checkPrime(num);
}

bool Prime::checkPrime(int unum)
{
	for (int i = 2; i < unum - 1; i++)
	{
		if (unum % i == 0)
		{
			return false;
		}
	}
	return true;
}

int Prime::countBetween(Prime& unum)
{
	int count = 0;
	for(int i = min(num, unum.getValue()) + 1; i < max(num, unum.getValue()); i++)
	{
		if(checkPrime(i))
		{
			count++;
		}
	}
	return count;
}

Prime Prime::nextPrime()
{
	int temp;
	for (temp = num + 1;!checkPrime(temp);temp++);
	return Prime(temp);
}

int Prime::getValue() const
{
	return num;
}

Prime::Prime(int unum)
{
	num = unum;
}

Prime::Prime()
{
	num = 0;
}

void Prime::Print()
{
	cout << num << endl;
}
