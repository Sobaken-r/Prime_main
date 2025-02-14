#pragma once
class Prime
{
	int num;
public:
	void setValue(int unum);
	bool isValid();
	bool checkPrime(int unum);

	int countBetween(Prime& unum);

	Prime nextPrime();

	int getValue() const;

	Prime(int unum);
	Prime();

	void Print();
};

